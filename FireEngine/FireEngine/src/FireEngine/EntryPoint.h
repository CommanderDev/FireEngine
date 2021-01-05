#pragma once

#ifdef FE_PLATFORM_WINDOWS
	extern FireEngine::Application* FireEngine::CreateApplication();
	int main(int argc, char** argv)
	{
		printf("Welcome to Fire Engine\n");
		auto app = FireEngine::CreateApplication();
		app->Run();
		delete app;
	}
#endif