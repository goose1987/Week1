// WindowsPhoneRuntimeComponent1.cpp
#include "pch.h"
#include "WindowsPhoneRuntimeComponent1.h"

using namespace WindowsPhoneRuntimeComponent1;
using namespace Platform;

WindowsPhoneRuntimeComponent::WindowsPhoneRuntimeComponent()
{
	this->counter = 0;
	
}

int WindowsPhoneRuntimeComponent::incrementCnt(int delta){
	this->counter += delta;
	return this->counter;
}