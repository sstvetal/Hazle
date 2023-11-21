#pragma once

#include "Core.h"



namespace Hazle {

	class HAZLE_API Aplication
	{
	public:
		Aplication();
		virtual ~Aplication();

		void Run();
	};


	Aplication* CreateApplication();

}

