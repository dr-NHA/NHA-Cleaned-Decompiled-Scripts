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
int iLocal_43=0;
int iLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)) iLocal_43=5;
while (true){
SYSTEM::WAIT(0);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
switch (iLocal_43){
case 0:
func_9();
break;
case 1:
break;
case 2:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(DT_PoliceVehicleRequest, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_49, 0, 0)){
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(DT_PoliceVehicleRequest, uLocal_45, 2, 3f, &iLocal_49, 0, 0)){
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 3:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_7(PLAYER::PLAYER_ID(), false) && func_4(PLAYER::PLAYER_ID())==5 && Global_1968277){
if(Global_1968278==0) Global_1968278=1;
iLocal_43=5;
}
elseif(MISC::CREATE_INCIDENT_WITH_ENTITY(DT_AmbulanceDepartment, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_49, 0, 0)){
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(DT_AmbulanceDepartment, uLocal_45, 2, 3f, &iLocal_49, 0, 0)){
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 4:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(DT_FireDepartment, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_49, 0, 0)){
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(DT_FireDepartment, uLocal_45, 4, 3f, &iLocal_49, 0, 0)){
if(Global_97178.f_358==MISC::GET_HASH_KEY("AGENCY_PREP_1") || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && _IS_MISSION_REPEAT_ACTIVE(false)) Global_97178.f_358=MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
elseif(func_2(67) && !func_2(68)) Global_97108=1;
iLocal_48=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 5:
if(MISC::GET_GAME_TIMER() > iLocal_48 + 60000 || !MISC::IS_INCIDENT_VALID(iLocal_49)) func_1();
elseif(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))if(MISC::IS_INCIDENT_VALID(iLocal_49)) MISC::DELETE_INCIDENT(iLocal_49);
break;
}}}
return;
}


void func_1() // Position - 0x27A{
iLocal_43=0;
iLocal_44=0;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}
BOOL func_2(int iParam0) // Position - 0x28C{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2B8{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}

int func_4(Player plParam0) // Position - 0x2E0{
if(func_6(plParam0)==233) return func_5(plParam0);
return -1;
}

int func_5(Player plParam0) // Position - 0x2FD{
if(func_7(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}

int func_6(Player plParam0) // Position - 0x320{
if(func_7(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}
BOOL func_7(Player plParam0, BOOL bParam1) // Position - 0x343{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}


void func_8() // Position - 0x37E{
if(MISC::GET_GAME_TIMER() > iLocal_48 + 30000) iLocal_43=5;
return;
}


void func_9() // Position - 0x395{
var unk;
switch (iLocal_44){
case 0:
iLocal_44=1;
iLocal_48=MISC::GET_GAME_TIMER();
break;
case 1:
while (!func_19()){
SYSTEM::WAIT(0);
if(func_18()==3) iLocal_43=3;
if(func_18()==4) iLocal_43=4;
if(func_18()==5) iLocal_43=2;
if(MISC::GET_GAME_TIMER() > iLocal_48 + 30000){
iLocal_48=MISC::GET_GAME_TIMER();
func_12(0);
}}
if(iLocal_43==0) iLocal_43=5;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) func_10(PLAYER::PLAYER_PED_ID(), &uLocal_45, &unk);
iLocal_48=MISC::GET_GAME_TIMER();
break;
}
return;
}


void func_10(Ped pedParam0, Vector3* pvParam1, var uParam2) // Position - 0x42E{
int nthClosest;
int outNumLanes;
var unk;
var unk2;
var unk3;
var unk6;
float dx;
float num;
float headingFromVector2d;
float num2;
float outHeading;
float xOffset;
float num3;
int num4;
int shapeTestHandle;
int hit;
var surfaceNormal;
var endCoords;
var entityHit;
num3=5f;
nthClosest=1;
num4=0;
while (num4 < 2){
switch (num4){
case 0:
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), nthClosest, pvParam1, &outHeading, &outNumLanes, 5, 1077936128, 0);
PATHFIND::GET_CLOSEST_ROAD(*pvParam1, 1f, 1, &unk3, &unk6, &unk, &unk2, &num, false);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f) *pvParam1={
-3031.38f, 605.32f, 6.86f 
};
dx={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
headingFromVector2d=MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
num2=outHeading + 180f;
if(num2 > 360f) num2=num2 - 360f;
if(func_11(headingFromVector2d, outHeading, 90f)) *uParam2=outHeading;
else *uParam2=num2;
if(num < 0f){
xOffset=0f;
}elseif(PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*pvParam1, 1, 1, 1077936128, 0))){
xOffset=0f;
}else{
xOffset=num3 * SYSTEM::TO_FLOAT(outNumLanes / 2);
if(xOffset==0f) xOffset=xOffset + num3;
if(outNumLanes==5) xOffset=xOffset + num3;
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f) xOffset=xOffset + 5f;
else xOffset=xOffset + 3.75f;
xOffset=xOffset + (num / 2f);
}
if(SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, -xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) xOffset=-xOffset;
*pvParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f) 
};
shapeTestHandle=SHAPETEST::START_SHAPE_TEST_CAPSULE(*pvParam1 +{
pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f 
}
, *pvParam1 +{
4.5f, 0.5f, 0.5f 
}
, 2.5f, 1, 0, 4);
num4=num4 + 1;
break;
case 1:
if(nthClosest <=2){
if(SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit)==2){
if(hit !=0){
if(endCoords.f_2 > pvParam1->f_2 + 8.5f){
num4=num4 + 1;
}else{
nthClosest=nthClosest + 1;
num4=0;
}
}
else{
num4=num4 + 1;
}}}else{
num4=num4 + 1;
}
break;
case 2:
break;
}}
return;
}
BOOL func_11(float fParam0, float fParam1, float fParam2) // Position - 0x6D4{
float num;
float num2;
num2=fParam1 - fParam2;
if(num2 < 0f) num2=num2 + 360f;
num=fParam1 + fParam2;
if(num >=360f) num=num - 360f;
if(num > num2)if(fParam0 < num && fParam0 > num2) return true;
elseif(fParam0 < num || fParam0 > num2) return true;
return false;
}


void func_12(int iParam0) // Position - 0x749{
if(func_17()) return;
if(Global_20584)if(func_16()) func_14(true, true);
else func_14(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_13()) Global_20383.f_1=3;
return;
}
BOOL func_13() // Position - 0x7D3{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_14(BOOL bParam0, BOOL bParam1) // Position - 0x7FA{
if(bParam0){
if(func_15(0)){
Global_20584=true;
if(bParam1) MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==true){
Global_20584=false;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}
return;
}
BOOL func_15(int iParam0) // Position - 0x86E{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_16() // Position - 0x8C5{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_17() // Position - 0x8D3{
return IS_BIT_SET(Global_1962996, 19);
}

int func_18() // Position - 0x8E2{
return Global_22742;
}
BOOL func_19() // Position - 0x8ED{
if(Global_21725==0) return true;
return false;
}