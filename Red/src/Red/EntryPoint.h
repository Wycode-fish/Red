#pragma once

#ifdef RED_PLATFORM_WINDOWS

extern Red::Application* Red::CreateApplication();

int main(int argc, char** argv)
{
	printf("Red Engine Initializing...\n");
	auto app = Red::CreateApplication();
	app->Run();
	delete app;
}

#endif