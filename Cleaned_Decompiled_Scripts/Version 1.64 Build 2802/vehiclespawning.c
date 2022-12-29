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
int iLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35=20;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
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
int iLocal_56=0;
BOOL bLocal_57=0;
BOOL bLocal_58=0;
BOOL bLocal_59=0;
BOOL bLocal_60=0;
BOOL bLocal_61=0;
int iLocal_62=0;
float fLocal_63=0f;
Interior inLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
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
iLocal_28=3;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
fLocal_63=277.7314f;
uLocal_65={
-196.045f, -580.13f, 135.0004f 
};
CAM::DO_SCREEN_FADE_OUT(800);
func_16();
while (true){
GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
func_15();
if(_SHOULD_NETWORK_SCRIPT_TERMINATE() || iLocal_62) func_3();
if(!bLocal_58){
if(!bLocal_57 && CAM::IS_SCREEN_FADED_OUT()){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_65, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_63);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(uLocal_65, 2500f, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
bLocal_57=true;
}elseif(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!bLocal_61){
bLocal_61=func_2();
}elseif(!bLocal_59){
bLocal_59=func_1();
}else{
CAM::DO_SCREEN_FADE_IN(800);
bLocal_58=true;
}}}}
return;
}
BOOL func_1() // Position - 0x121{
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_64, "garage_decor_01")){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_64, "garage_decor_01");
}else{
INTERIOR::REFRESH_INTERIOR(inLocal_64);
return 1;
}
return 0;
}
BOOL func_2() // Position - 0x14B{
inLocal_64=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(INTERIOR::IS_VALID_INTERIOR(inLocal_64)){
if(!bLocal_60){
INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_64);
bLocal_60=true;
}elseif(INTERIOR::IS_INTERIOR_READY(inLocal_64)){
INTERIOR::UNPIN_INTERIOR(inLocal_64);
return 1;
}}
return 0;
}


void func_3() // Position - 0x18C{
int i;
for (i=0;
i < iLocal_56;
i=i + 1){
func_5(i);
}
func_4();
return;
}


void func_4() // Position - 0x1B1{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_5(int iParam0) // Position - 0x1BD{
func_6(&uLocal_35[iParam0]);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1);
return;
}


void func_6(var uParam0) // Position - 0x1DB{
Entity entity;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)) !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
entity=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&entity);
}
return;
}
int _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x214{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return 1;
if(func_14()) return 1;
if(Global_2696915) return 1;
if(func_13()) return 1;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_11()) return 1;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return 1;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return 1;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return 1;
return 0;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x298{
switch (func_10()){
case 0:
return func_9();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_9() // Position - 0x2CB{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_10() // Position - 0x2EF{
return Global_32163;
}
BOOL func_11() // Position - 0x2FA{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x309{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_13() // Position - 0x320{
return Global_2694524;
}
BOOL func_14() // Position - 0x32C{
return Global_2683862.f_693;
}


void func_15() // Position - 0x33B{
SYSTEM::WAIT(0);
return;
}


void func_16() // Position - 0x348{
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_35, 21, 0);
if(!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA()) func_3();
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
if(!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a")) STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
return;
}
BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0x38C{
int num;
num=0;
while (true){
num=num + 1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return false;
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()) return true;
if(func_14()) return false;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return false;
if(num >=3600) return false;
SYSTEM::WAIT(0);
}
return false;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x3E5{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_4();
else return 0;
if(!func_19(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_4();
else return 0;
if(func_14())if(!bNoTerminate) func_4();
else return 0;
if(_DOES_EVENT_OF_TYPE_EXIST(157))if(!bNoTerminate) func_4();
else return 0;
}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bNoTerminate) func_4();
else return 0;
}}
SYSTEM::WAIT(0);
}
if(iParam1 > -1) Global_1574666=i;
if(iParam0==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_4();
else return 0;
elseif(!NETWORK::NETWORK_IS_IN_SESSION())if(!bNoTerminate) func_4();
else return 0;
return 1;
}
BOOL func_19(BOOL bParam0) // Position - 0x4FB{
bParam0;
return Global_1575035;
}