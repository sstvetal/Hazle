#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazle::Aplication* Hazle::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazle Engine\n");
	auto app = Hazle::CreateApplication();
	app->Run();
	delete app;
}

#endif