// !!!!!!! for more than 2 class

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
	for (int i = 0; i < 70; ++i) {
		input[i] = new long double[3];
	}
	for (int i = 0; i < 70; ++i) {
		for (int k = 0; k < 3; k++) {
			input[i][k] = 0.0;
		}
	}



	for (int i = 0; i < 7; i++) {
		weight[i] = new long double[3];
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 3; j++) {
			weight[i][j] = 0.0;
		}
	}

	for (int i = 0; i < 7; i++) {
		click[i] = 0;
	}
	for (int i = 0; i < 7; i++) {
		d[i] = new double[70];

	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 70; j++) {
			d[i][j] = -1.0;

		}
	}
	cycleCount = 0;


}
