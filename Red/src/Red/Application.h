#pragma once
#include "Core.h"

namespace Red {

	class RED_API Application
	{
	public:
		Application();
		virtual ~Application();

	public:
		void Run();
	};

	Application* CreateApplication();
}


