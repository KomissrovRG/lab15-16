#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}
