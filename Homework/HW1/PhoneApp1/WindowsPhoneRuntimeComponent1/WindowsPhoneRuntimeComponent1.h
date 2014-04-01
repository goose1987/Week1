#pragma once

namespace WindowsPhoneRuntimeComponent1
{
    public ref class WindowsPhoneRuntimeComponent sealed
    {

	private:
		int counter;

    public:
        WindowsPhoneRuntimeComponent();
		int incrementCnt(int delta);
    };
}