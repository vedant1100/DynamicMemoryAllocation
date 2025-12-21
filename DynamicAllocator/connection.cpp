#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

using namespace std;

int main() {
    try {
        // Get MySQL driver instance
        sql::mysql::MySQL_Driver *driver;
        driver = sql::mysql::get_mysql_driver_instance();

        // Connect to MySQL server
        sql::Connection *con;
        con = driver->connect("tcp://127.0.0.1:3306", "cpp_user", "India@1122");

        // Connect to database
        con->setSchema("training_center");

        cout << "Connected to MySQL database successfully!" << endl;

        // Create statement
        sql::Statement *stmt;
        stmt = con->createStatement();

        // Execute query
        sql::ResultSet *res;
        res = stmt->executeQuery("SELECT * FROM registrations");

        // Display results
        while (res->next()) {
            cout << res->getString("Name") << " | "
                 << res->getString("Telephone_Number") << " | "
                 << res->getString("Topic") << " | "
                 << res->getDouble("Fee") << endl;
        }

        // Clean up
        delete res;
        delete stmt;
        delete con;
    }
    catch (sql::SQLException &e) {
        cout << "ERROR: " << e.what() << endl;
    }

    return 0;
}
