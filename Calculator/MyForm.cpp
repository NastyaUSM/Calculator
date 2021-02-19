#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	form.FormBorderStyle = FormBorderStyle::FixedSingle;
	form.MaximizeBox = false;
	form.MinimizeBox = false;
	Application::Run(% form);
}