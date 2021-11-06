#pragma once

#ifdef AL_PLATFORM_WINDOWS


int main(int argc, char** argv) {
	printf("Welcome to Almond!");
	auto app = Almond::CreateApplication();
	app->run();
	delete app;
}

#endif