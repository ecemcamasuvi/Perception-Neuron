#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::MyForm form;
	Application::Run(%form);

	return 0;
}
void Project::MyForm::set()
{
	for (int i = 0; i < 20; ++i) {
		input[i] = new long double[3];
		input[i][2] = -1.0;
		for (int j = 0; j < 2; j++) {
			input[i][j] = 0.0;
		}
	}
	
	
	for (int i = 0; i < 21; ++i) {
		weight1[i] = new long double[3];
	}
	for (int i = 0; i < 21; ++i) {
		for (int j = 0; j < 3; j++) {
			weight1[i][j] = 0.0;
		}
	}
	cycleCount= 0;

}


