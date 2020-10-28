#include "MyForm.h"
#include <Windows.h>
using namespace pr;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;

}

//void paint(TextBox ^a) {
//	msclr::interop::marshal_context context;
//	string std_string = context.marshal_as<std::string>(a->Text);
//	//string str = std_string;
//	int count = 0;
//	for (int i = 0; i < std_string.size(); i++) {
//		if (std_string[i] == ',') {
//			count++;
//		}
//	}
//	if (count >= 2) {
//		System::Windows::Forms::MessageBox::Show("“екст сообщени€", "заголовок окна с сообщением");
//		return;
//	}
//
//}


