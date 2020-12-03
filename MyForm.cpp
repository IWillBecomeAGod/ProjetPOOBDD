#include "MyForm.h"
#include "commande.h"
#include "service_gestion_commande.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3poo::MyForm mainMyForm;
	Application::Run(% mainMyForm);
}
