//Cleaned With dr NHA's C Script Cleaner V2.72


void main() // Position - 0x0{
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_1("main_install", DEFAULT);
return;
}


void func_1(char* sParam0, eStackSize essParam1) // Position - 0x15{
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SYSTEM::WAIT(0);
SCRIPT::REQUEST_SCRIPT(sParam0);
}
SYSTEM::START_NEW_SCRIPT(sParam0, essParam1);
return;
}