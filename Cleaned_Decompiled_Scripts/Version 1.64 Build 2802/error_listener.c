//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
char* sLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
float fLocal_62=0f;
var uLocal_63=0;
#endregion

void main() // Position - 0x0{
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=(0.05f + 0.275f) - 0.01f;
func_12();
while (true){
SYSTEM::WAIT(0);
if(func_11()) return;
func_1();
}
return;
}


void func_1() // Position - 0xA2{
func_2();
return;
}


void func_2() // Position - 0xAE{
int i;
eEventType eventAtIndex;
eEventType type;
var unk3;
for (i=0;
i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS);
i=i + 1){
eventAtIndex=SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i);
if(func_10(eventAtIndex)){
func_9(&type);
func_8(SCRIPT_EVENT_QUEUE_ERRORS, i, eventAtIndex, &type);
type.f_1=MISC::GET_FRAME_COUNT() - 1;
type=eventAtIndex;
if(!func_7(&type, &unk3)) func_6(&type);
func_3(&type);
}}
return;
}


void func_3(var uParam0) // Position - 0x116{
eEventType type;
type=*uParam0;
if(_IS_FMMC_ACTIVE() && func_4(type) && type !=EVENT_ERRORS_UNKNOWN_ERROR && NETWORK::NETWORK_CAN_BAIL()) NETWORK::NETWORK_BAIL(0, 1, 0);
return;
}
BOOL func_4(eEventType eetParam0) // Position - 0x14F{
return eetParam0==EVENT_ERRORS_ARRAY_OVERFLOW || eetParam0==EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam0==EVENT_ERRORS_STACK_OVERFLOW || eetParam0==EVENT_ERRORS_UNKNOWN_ERROR;
}
BOOL _IS_FMMC_ACTIVE() // Position - 0x17D{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}

int func_6(var uParam0) // Position - 0x194{
if(Global_32442.f_61 < 20){
Global_32442[Global_32442.f_61 /*3*/]={
*uParam0 
};
Global_32442.f_61=Global_32442.f_61 + 1;
return 1;
}
return 0;
}
BOOL func_7(var uParam0, var uParam1) // Position - 0x1C7{
*uParam1=0;
*uParam1=0;
while (*uParam1 < Global_32442.f_61){
if(Global_32442[*uParam1 /*3*/]==*uParam0 && Global_32442[*uParam1 /*3*/].f_2==uParam0->f_2) return true;
*uParam1=*uParam1 + 1;
}
return false;
}


void func_8(eEventGroup eegParam0, int iParam1, eEventType eetParam2, var uParam3) // Position - 0x215{
var eventData;
if(eetParam2==EVENT_ERRORS_UNKNOWN_ERROR || eetParam2==EVENT_ERRORS_ARRAY_OVERFLOW || eetParam2==EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam2==EVENT_ERRORS_STACK_OVERFLOW)if(SCRIPT::GET_EVENT_DATA(eegParam0, iParam1, &eventData, 1)) uParam3->f_2=eventData;
return;
}


void func_9(var uParam0) // Position - 0x25A{
*uParam0=-1;
uParam0->f_1=-1;
uParam0->f_2=-1;
return;
}
BOOL func_10(eEventType eetParam0) // Position - 0x270{
return func_4(eetParam0);
}
BOOL func_11() // Position - 0x27E{
return false;
}


void func_12() // Position - 0x287{
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
return;
}