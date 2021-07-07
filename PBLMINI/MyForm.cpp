
#include "MyForm.h"
using namespace System::Windows::Forms;
int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew PBLMINI::MyForm());
	return 0;
}
