#include <FireEngine.h>

class TestBox : public FireEngine::Application
{
public:
	TestBox()
	{

	}
	~TestBox()
	{

	}
};

FireEngine::Application* FireEngine::CreateApplication()
{
	return new TestBox();
}