#include "MyForm.h"
#include <mysql.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	/*MYSQL* conn;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "root", "vet", 3306, NULL, 0);*/

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DataBaseProject::MyForm form;
	Application::Run(%form);

	/*if (conn) {
		MessageBox::Show("Message");
	}*/
}