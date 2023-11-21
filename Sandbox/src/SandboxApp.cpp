#include <Hazle.h>

class Sandbox : public Hazle::Aplication
{
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}
};

Hazle::Aplication* Hazle::CreateApplication()
{
	return new Sandbox();
}