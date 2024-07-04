#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern Pear::Application* Pear::CreateApplication();

int main(int argc, char** argv) {
	auto app = Pear::CreateApplication();
	app->Run();
	delete app;
}

#endif