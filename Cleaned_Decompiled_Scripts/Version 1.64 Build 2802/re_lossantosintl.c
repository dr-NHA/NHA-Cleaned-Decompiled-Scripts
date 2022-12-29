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
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=0;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=4;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
Vehicle veLocal_54=0;
var uLocal_55=4;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
Ped pedLocal_60=0;
var uLocal_61=4;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
BOOL bLocal_77=0;
BOOL bLocal_78=0;
BOOL bLocal_79=0;
BOOL bLocal_80=0;
BOOL bLocal_81=0;
BOOL bLocal_82=0;
int iLocal_83=0;
Hash hLocal_84=0;
float fLocal_85=0f;
float fLocal_86=0f;
int iLocal_87=0;
int iLocal_88=0;
Vehicle veLocal_89=0;
Ped pedLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
BOOL bLocal_95=0;
var uLocal_96=0;
Ped pedLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
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
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
bLocal_78=true;
hLocal_84=joaat("S_M_M_Pilot_01");
iLocal_99=500;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)) func_12();
pedLocal_97=PLAYER::PLAYER_PED_ID();
while (true){
if(ENTITY::IS_ENTITY_DEAD(pedLocal_97, false)) iLocal_98=5;
switch (iLocal_98){
case 0:
iLocal_98=1;
break;
case 1:
func_11();
iLocal_98=2;
break;
case 2:
if(func_10()) iLocal_98=3;
break;
case 3:
func_9();
iLocal_98=4;
break;
case 4:
if(Global_97609) iLocal_98=5;
func_4();
break;
case 5:
func_1();
func_12();
break;
}
SYSTEM::WAIT(iLocal_99);
}
return;
}


void func_1() // Position - 0x11A{
int i;
for (i=0;
i < 4;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[i])){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[i]) || !ENTITY::IS_ENTITY_DEAD(uLocal_49[i], false) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_49[i])){
VEHICLE::DELETE_VEHICLE(&uLocal_49[i]);
PED::DELETE_PED(&uLocal_55[i]);
}else{
if(i==0 || i==2) func_3(true);
func_2(&uLocal_49[i], &uLocal_55[i]);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_49[i]);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_55[i]);
}}}
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54)){
if(ENTITY::IS_ENTITY_OCCLUDED(veLocal_54)){
VEHICLE::DELETE_VEHICLE(&veLocal_54);
PED::DELETE_PED(&pedLocal_60);
}else{
func_2(&veLocal_54, &pedLocal_60);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_54);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
}}
if(bLocal_82){
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
}
return;
}


void func_2(var uParam0, var uParam1) // Position - 0x233{
if(ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))if(ENTITY::IS_ENTITY_IN_AIR(*uParam0))if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 100, 50, true);
return;
}


void func_3(BOOL bParam0) // Position - 0x2B4{
if(bLocal_78){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], false))if(ENTITY::IS_ENTITY_IN_AIR(uLocal_49[0]))if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0]))if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], false)) TASK::TASK_PLANE_MISSION(uLocal_55[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
elseif(bParam0)if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], false)) TASK::TASK_PLANE_MISSION(uLocal_55[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], false))if(ENTITY::IS_ENTITY_IN_AIR(uLocal_49[2]))if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], false)) TASK::TASK_PLANE_MISSION(uLocal_55[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
elseif(bParam0)if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], false)) TASK::TASK_PLANE_MISSION(uLocal_55[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
}
return;
}


void func_4() // Position - 0x493{
int i;
switch (iLocal_88){
case 0:
uLocal_61[0 /*3*/]={
-1542.1127f, -3023.8025f, 23.2538f 
};
uLocal_61[1 /*3*/]={
-3089.888f, -1960.0751f, 313.559f 
};
uLocal_61[2 /*3*/]={
-1037.6381f, -3316.1196f, 23.2475f 
};
uLocal_61[3 /*3*/]={
451.174f, -4009.4602f, 135.1171f 
};
uLocal_74={
-1612.1736f, -2688.442f, 12.9444f 
};
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) bLocal_78=false;
else bLocal_78=true;
iLocal_88=1;
break;
case 1:
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(hLocal_84);
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
iLocal_88=2;
break;
case 2:
if(!bLocal_82){
if(STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(hLocal_84) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight")){
bLocal_82=true;
}else{
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(hLocal_84);
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
}}
if(bLocal_82){
if(!CAM::IS_SPHERE_VISIBLE(uLocal_61[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(uLocal_74, 50f)){
iLocal_88=3;
}else{
CAM::IS_SPHERE_VISIBLE(uLocal_61[0 /*3*/], 50f);
CAM::IS_SPHERE_VISIBLE(uLocal_74, 50f);
}}
break;
case 3:
uLocal_49[0]=VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_61[0 /*3*/], 0, true, true, false);
ENTITY::SET_ENTITY_HEADING(uLocal_49[0], 240.3179f);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_49[0], false);
uLocal_49[1]=VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_61[1 /*3*/], 0, true, true, false);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_49[1], false);
uLocal_49[2]=VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_61[2 /*3*/], 0, true, true, false);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_49[2], false);
uLocal_49[3]=VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_61[3 /*3*/], 0, true, true, false);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_49[3], false);
for (i=0;
i < 4;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[i])){
uLocal_55[i]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_49[i], PED_TYPE_CIVMALE, hLocal_84, -1, true, true);
ENTITY::SET_ENTITY_LOD_DIST(uLocal_49[i], 1000);
VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_49[i], true, true, false);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_55[i], true);
}}
func_8(&uLocal_49[1], &uLocal_55[1]);
func_8(&uLocal_49[2], &uLocal_55[2]);
func_8(&uLocal_49[3], &uLocal_55[3]);
if(bLocal_78){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[0])){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
bLocal_77=true;
}else{
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
}}}
iLocal_88=4;
break;
case 4:
if(bLocal_81){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], false)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[3])){
if(!bLocal_79){
func_8(&uLocal_49[3], &uLocal_55[3]);
bLocal_79=true;
}}}}
func_3(false);
func_7();
switch (iLocal_87){
case 0:
if(!bLocal_77){
if(bLocal_78){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], false)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[0]) && !CAM::IS_SPHERE_VISIBLE(uLocal_61[0 /*3*/], 50f)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
bLocal_77=true;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
}}}
}}
if(bLocal_77){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], false))if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0])) fLocal_85=VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[0]);
if(fLocal_85 > 1100f) iLocal_87=1;
}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], false)){
if(bLocal_78){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1])){
if(bLocal_81){
if(bLocal_79){
func_6(&uLocal_49[1], &uLocal_55[1]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
bLocal_80=false;
iLocal_87=2;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
}
}}else{
func_6(&uLocal_49[1], &uLocal_55[1]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
bLocal_80=false;
iLocal_87=2;
}
else{
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
}}}
}}
break;
case 2:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], false))if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1])) iLocal_87=3;
break;
case 3:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], false)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")){
if(!CAM::IS_SPHERE_VISIBLE(uLocal_61[2 /*3*/], 50f)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2])){
func_6(&uLocal_49[2], &uLocal_55[2]);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[2], 101, "AirportNew", true);
iLocal_87=4;
}}
}}
break;
case 4:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], false))if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2])) fLocal_86=VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[2]);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], false)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1])){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1])){
func_8(&uLocal_49[1], &uLocal_55[1]);
bLocal_80=true;
}
}}
if(fLocal_86 > 1100f){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], false)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")){
if(!CAM::IS_SPHERE_VISIBLE(uLocal_61[3 /*3*/], 50f)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3]) && bLocal_80){
func_6(&uLocal_49[3], &uLocal_55[3]);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[3], 104, "AirplaneLandingRedux", true);
iLocal_87=5;
}}}
}}
break;
case 5:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], false)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3])){
func_5();
iLocal_87=0;
}}
break;
}
break;
}
return;
}


void func_5() // Position - 0xBB3{
fLocal_85=0f;
bLocal_77=false;
bLocal_81=true;
bLocal_79=false;
return;
}


void func_6(var uParam0, var uParam1) // Position - 0xBC7{
ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, true, false);
ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
return;
}


void func_7() // Position - 0xBF2{
Vector3 entityCoords;
switch (iLocal_83){
case 0:
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_54)){
veLocal_54=VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, true, true, false);
ENTITY::SET_ENTITY_LOD_DIST(veLocal_54, 1000);
VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_54, true, true, false);
VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(veLocal_54, false);
pedLocal_60=PED::CREATE_PED_INSIDE_VEHICLE(veLocal_54, PED_TYPE_CIVMALE, hLocal_84, -1, true, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_60, true);
iLocal_83=1;
}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54) && !ENTITY::IS_ENTITY_DEAD(veLocal_54, false)){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight")){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_54)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(veLocal_54, 101, "EastWestFlight", 2, 5, 786603);
iLocal_83=2;
}}}
break;
case 2:
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54) && !ENTITY::IS_ENTITY_DEAD(veLocal_54, false))if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_54))if(ENTITY::IS_ENTITY_OCCLUDED(veLocal_54) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f) && SYSTEM::VDIST2(entityCoords, ENTITY::GET_ENTITY_COORDS(veLocal_54, true)) > 62500f) iLocal_83=1;
break;
}
return;
}


void func_8(var uParam0, var uParam1) // Position - 0xD31{
ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
return;
}


void func_9() // Position - 0xD5C{
return;
}
BOOL func_10() // Position - 0xD64{
return true;
}


void func_11() // Position - 0xD6D{
return;
}


void func_12() // Position - 0xD75{
func_1();
func_13();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_13() // Position - 0xD89{
Vector3 entityCoords;
Vector3 vector;
Vector3 offsetFromCoordAndHeadingInWorldCoords;
float entityHeading;
if(ENTITY::DOES_ENTITY_EXIST(veLocal_89)){
if(ENTITY::IS_ENTITY_OCCLUDED(veLocal_89)){
VEHICLE::DELETE_VEHICLE(&veLocal_89);
}elseif(!ENTITY::IS_ENTITY_DEAD(veLocal_89, false) && !PED::IS_PED_INJURED(pedLocal_90)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_89);
PED::SET_PED_KEEP_TASK(pedLocal_90, true);
entityCoords={
ENTITY::GET_ENTITY_COORDS(veLocal_89, true) 
};
entityHeading=ENTITY::GET_ENTITY_HEADING(veLocal_89);
vector={
0f, 500f, 50f 
};
offsetFromCoordAndHeadingInWorldCoords={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, vector) 
};
TASK::TASK_HELI_MISSION(pedLocal_90, veLocal_89, 0, 0, offsetFromCoordAndHeadingInWorldCoords, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
}}
if(bLocal_95) VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
return;
}