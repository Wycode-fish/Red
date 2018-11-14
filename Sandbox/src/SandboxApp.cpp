#include <Red.h>

class Sandbox : public Red::Application
{
public:
	Sandbox()
	{}
	~Sandbox()
	{}
};

Red::Application* Red::CreateApplication()
{
	return new Sandbox();
}