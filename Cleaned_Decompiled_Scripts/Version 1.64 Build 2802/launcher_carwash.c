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
var uLocal_20=0;
char* sLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
float fLocal_35=0f;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
int iLocal_40=2;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=5;
var uLocal_51=1076887552;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=1135869952;
var uLocal_57=2;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
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
var uLocal_74=5;
var uLocal_75=1076887552;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=1135869952;
var uLocal_81=2;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=-1;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
BOOL bLocal_106=0;
var uLocal_107=2;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=2;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=2;
var uLocal_118=0;
var uLocal_119=0;
var uScriptParam_0=0;
var uScriptParam_1=5;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=5;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
var uScriptParam_22=0;
#endregion

void main() // Position - 0x0{
BOOL flag;
Vehicle vehiclePedIsIn;
var unk;
int i;
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
sLocal_21="NULL";
fLocal_24=0f;
fLocal_28=-0.0375f;
fLocal_29=0.17f;
fLocal_33=80f;
fLocal_34=140f;
fLocal_35=180f;
iLocal_38=3;
unk={
uScriptParam_0.f_1[0 /*3*/] 
};
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_carwash")) > 1) SCRIPT::TERMINATE_THIS_THREAD();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}elseif(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99)){
func_74();
}
if(Global_2883694){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-949873222)==0){
SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222)){
SYSTEM::WAIT(0);
}
SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &uScriptParam_0, 23, DEFAULT);
}
SCRIPT::TERMINATE_THIS_THREAD();
}
func_73(PLAYER::PLAYER_PED_ID());
func_65();
while (true){
func_73(PLAYER::PLAYER_PED_ID());
if(func_64(PLAYER::PLAYER_PED_ID(), unk, false) > 100f + 20f) func_74();
flag=false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
flag=func_60(vehiclePedIsIn) || func_59(vehiclePedIsIn);
bLocal_106=VEHICLE::DOES_VEHICLE_HAVE_ROOF(vehiclePedIsIn);
func_58(bLocal_106);
}
for (i=0;
i < iLocal_40;
i=i + 1){
func_57(i);
}
if(func_1(&iLocal_40, &uLocal_89, flag, false, true, DEFAULT)) func_74();
SYSTEM::WAIT(0);
}
return;
}
BOOL func_1(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, eStackSize essParam5) // Position - 0x196{
int i;
if(uParam1->f_10){
i=0;
for (i=0;
i < *uParam0;
i=i + 1){
func_52(&uParam0->[i /*24*/]);
}}
switch (uParam1->f_13){
case 0:
i=0;
if(func_45(uParam1->f_16)){
for (i=0;
i < *uParam0;
i=i + 1){
if(func_42(&uParam0->[i /*24*/]) && uParam0->[i /*24*/]){
uParam1->f_12=i;
if(uParam0->[i /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16==0) func_41(uParam1, 6);
elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) func_41(uParam1, 8);
elseif(bParam2) func_41(uParam1, 3);
elseif(uParam0->[i /*24*/].f_8) func_41(uParam1, 2);
elseif(func_30() < uParam0->[uParam1->f_12 /*24*/].f_9) func_41(uParam1, 1);
elseif(func_25()) func_41(uParam1, 7);
else func_41(uParam1, 4);
}}}else{
func_24(uParam1);
}
break;
case 2:
if(!uParam1->f_9) func_22(uParam1, uParam1->f_6);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || uParam0->[i /*24*/].f_8==0){
func_41(uParam1, 0);
return false;
}
break;
case 1:
if(!uParam1->f_9) func_13(uParam1, uParam1->f_2, uParam0->[uParam1->f_12 /*24*/].f_9);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || func_30() >=uParam0->[uParam1->f_12 /*24*/].f_9){
func_41(uParam1, 0);
return false;
}
break;
case 6:
if(!uParam1->f_9) func_22(uParam1, uParam1->f_1);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16)){
func_41(uParam1, 0);
return false;
}
break;
case 3:
if(!uParam1->f_9) func_22(uParam1, uParam1->f_3);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || bParam2==false || !func_45(uParam1->f_16)){
func_41(uParam1, 0);
return false;
}
break;
case 7:
if(!uParam1->f_9) func_22(uParam1, uParam1->f_5);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16)){
func_41(uParam1, 0);
return false;
}
break;
case 8:
if(!uParam1->f_9) func_22(uParam1, uParam1->f_4);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
func_41(uParam1, 0);
return false;
}
break;
case 9:
if(!uParam1->f_9)if(func_12()) func_22(uParam1, uParam1->f_7);
else func_22(uParam1, uParam1->f_8);
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || func_9(&uParam0->[uParam1->f_12 /*24*/])){
func_41(uParam1, 0);
return false;
}
break;
case 4:
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CONTEXT);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
func_8();
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_41(uParam1, 8);
return false;
}
if(uParam0->[uParam1->f_12 /*24*/].f_8){
func_41(uParam1, 2);
return false;
}
if(func_18(&uParam0->[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16)){
func_41(uParam1, 0);
return false;
}
if(Global_75693) return false;
if(func_5(true)) return false;
if(uParam0->[uParam1->f_12 /*24*/].f_6==1){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) !=-1){
func_41(uParam1, 0);
return false;
}}
if(uParam0->[uParam1->f_12 /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16==0){
func_41(uParam1, 6);
return false;
}
if(func_25()){
func_41(uParam1, 7);
return false;
}
if(func_30() < uParam0->[uParam1->f_12 /*24*/].f_9){
func_41(uParam1, 1);
return false;
}
if(!uParam1->f_9) func_13(uParam1, *uParam1, uParam0->[uParam1->f_12 /*24*/].f_9);
if(uParam0->[uParam1->f_12 /*24*/].f_6==1)if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) return false;
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) return false;
if(PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) return false;
if(PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) return false;
if(PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID())) return false;
if(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f) return false;
}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT) && uParam1->f_9==1)if(!func_9(&uParam0->[uParam1->f_12 /*24*/])) func_41(uParam1, 9);
else func_41(uParam1, 5);
break;
case 5:
func_24(uParam1);
uParam0->[uParam1->f_12 /*24*/].f_8=0;
if(!bParam4){
func_41(uParam1, 0);
return true;
}
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->[uParam1->f_12 /*24*/].f_5)){
SCRIPT::REQUEST_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5);
while (!SCRIPT::HAS_SCRIPT_LOADED(uParam0->[uParam1->f_12 /*24*/].f_5)){
func_8();
if(func_73(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78558){
func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, false, true, false);
VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
}}
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CONTEXT);
SCRIPT::REQUEST_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
SYSTEM::WAIT(0);
}
if(bParam3) CAM::DO_SCREEN_FADE_OUT(250);
if(SCRIPT::HAS_SCRIPT_LOADED(uParam0->[uParam1->f_12 /*24*/].f_5)){
if(bParam3){
while (!CAM::IS_SCREEN_FADED_OUT()){
if(func_73(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78558){
func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, false, true, false);
VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
}}
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CONTEXT);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
func_8();
SYSTEM::WAIT(0);
}}
SYSTEM::START_NEW_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5, essParam5);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(uParam0->[uParam1->f_12 /*24*/].f_5);
return true;
}}
break;
}
return false;
}

int func_2(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8D8{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);
if(bParam5) PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
}
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_3(veParam0);
if(MISC::GET_GAME_TIMER() - Global_29 > 500) VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false))if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <=iParam3) return 1;
return 0;
}


void func_3(Vehicle veParam0) // Position - 0xA70{
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false))if(VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0)) VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);
return;
}
int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0xA9C{
Vehicle vehiclePedIsIn;
int vehicleModelNumberOfSeats;
int i;
int seatIndex;
if(!PED::IS_PED_INJURED(ped)){
if(PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn)){
vehicleModelNumberOfSeats=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
if(vehicleModelNumberOfSeats==1){
seatIndex=-1;
return seatIndex;
}
for (i=0;
i < vehicleModelNumberOfSeats;
i=i + 1){
seatIndex=i - 1;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false)==ped) return seatIndex;
}}}}
return seatIndex;
}
BOOL func_5(BOOL bParam0) // Position - 0xB21{
if(bParam0)if(func_7()) return true;
if(func_6(14)) return true;
return false;
}
BOOL func_6(int iParam0) // Position - 0xB47{
return Global_43257==iParam0;
}
BOOL func_7() // Position - 0xB55{
if(Global_112593) return true;
if(!func_6(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0) return true;
return false;
}


void func_8() // Position - 0xB87{
Global_23131.f_6=1;
return;
}
BOOL func_9(var uParam0) // Position - 0xB95{
var entityRotation;
Ped vehiclePedIsIn;
Ped ped;
ped=PLAYER::PLAYER_PED_ID();
if(uParam0->f_15==360f) return 1;
if(_IS_NULL_VECTOR(uParam0->f_12)) return 1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(func_73(vehiclePedIsIn)){
entityRotation={
ENTITY::GET_ENTITY_ROTATION(vehiclePedIsIn, 2) 
};
if(entityRotation.f_1 > 45f || entityRotation.f_1 < -45f) return 0;
ped=vehiclePedIsIn;
}}
entityRotation={
ENTITY::GET_ENTITY_FORWARD_VECTOR(ped) 
};
if(func_10(uParam0->f_12, entityRotation) > SYSTEM::COS(uParam0->f_15)) return 1;
return 0;
}


float func_10(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xC3E{
return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1);
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xC55{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}
BOOL func_12() // Position - 0xC7F{
Vehicle vehiclePedIsIn;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
return ENTITY::IS_ENTITY_UPRIGHT(vehiclePedIsIn, 1119092736);
}
return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 1119092736);
}

int func_13(var uParam0, const char* sParam1, int iParam2) // Position - 0xCB9{
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) return 0;
if(func_15(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_14(sParam1, iParam2);
uParam0->f_14=sParam1;
uParam0->f_15=iParam2;
uParam0->f_9=1;
return 1;
}
return 0;
}


void func_14(const char* sParam0, int iParam1) // Position - 0xD05{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}
BOOL func_15(var uParam0) // Position - 0xD21{
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14)) return false;
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) return false;
if(MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14)) return func_17(uParam0->f_14, uParam0->f_15);
return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_14);
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0xD7B{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_17(const char* sParam0, int iParam1) // Position - 0xD8E{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_18(var uParam0) // Position - 0xDA7{
var unk;
unk=2;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return true;
}elseif(uParam0->f_6==1){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return true;
if(_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) !=-1) return true;
}
if(uParam0->f_11==0) return !func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10 + 2f, true);
unk={
func_19(uParam0->f_16, 2f) 
};
return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), unk[0 /*3*/], unk[1 /*3*/], unk.f_7, false, true, 0);
}


struct<8> func_19(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8) // Position - 0xE4B{
var unk;
var unk9;
unk=2;
unk9={
func_20(uParam0[1 /*3*/] - uParam0[0 /*3*/]) *{
fParam8, fParam8, fParam8 
}};
unk[0 /*3*/]={
uParam0[0 /*3*/] - unk9 
};
unk[1 /*3*/]={
uParam0[1 /*3*/] + unk9 
};
unk.f_7=uParam0.f_7 + (fParam8 * 2f);
return unk;
}


Vector3 func__20(float fParam0, var uParam1, var uParam2) // Position - 0xEAD{
float num;
float num2;
num=SYSTEM::VMAG(fParam0);
if(num !=0f){
num2=1f / num;
fParam0={
fParam0 *{
num2, num2, num2 
}};
}else{
fParam0=0f;
fParam0.f_1=0f;
fParam0.f_2=0f;
}
return fParam0;
}
BOOL func_21(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0xEEC{
return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), vParam1) <=fParam4 * fParam4;
}

int func_22(var uParam0, const char* sParam1) // Position - 0xF0A{
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) return 0;
if(func_15(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_23(sParam1);
uParam0->f_14=sParam1;
uParam0->f_15=0;
uParam0->f_9=1;
return 1;
}
return 0;
}


void func_23(const char* sParam0) // Position - 0xF53{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}


void func_24(var uParam0) // Position - 0xF69{
if(func_15(uParam0)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
uParam0->f_14=0;
uParam0->f_15=0;
if(uParam0->f_9==1) uParam0->f_9=0;
return;
}
BOOL func_25() // Position - 0xF96{
Vehicle vehiclePedIsIn;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return false;
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(FILES::GET_DLC_VEHICLE_FLAGS(vehiclePedIsIn)) return true;
if(func_29(vehiclePedIsIn)) return true;
if(func_26(vehiclePedIsIn, 3)) return true;
return !VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false);
}
BOOL func_26(Vehicle veParam0, int iParam1) // Position - 0xFEA{
int num;
if(func_27(veParam0)){
num=0;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 1, false)) return true;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 5, false)) return true;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 0, false)) num=num + 1;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 1, false)) num=num + 1;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 4, false)) num=num + 1;
if(VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 5, false)) num=num + 1;
if(num >=iParam1) return true;
}
return false;
}
BOOL func_27(Vehicle veParam0) // Position - 0x1086{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
return false;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x10B0{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
return false;
}
BOOL func_29(Vehicle veParam0) // Position - 0x10D1{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
else return true;
return false;
}

int func_30() // Position - 0x1114{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return func_38(PLAYER::PLAYER_ID());
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_TREVOR:
return func_31(2);
case CHAR_MICHAEL:
return func_31(0);
case CHAR_FRANKLIN:
return func_31(1);
default:
}
return 0;
}

int func_31(int iParam0) // Position - 0x1162{
return Global_60536[iParam0];
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1171{
func_33();
return Global_113648.f_2365.f_539.f_4321;
}


void func_33() // Position - 0x118A{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_34(character) && !func_6(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_34(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
Global_113648.f_2365.f_539.f_4323=character;
Global_113648.f_2365.f_539.f_4321=character;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=_CHAR_NULL) Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
return;
}
BOOL func_34(eCharacter echParam0) // Position - 0x1287{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1293{
eCharacter i;
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
for (i=CHAR_MICHAEL;
i <=CHAR_TREVOR;
i=i + 1){
if(_GET_CHARACTER_MODEL(i)==entityModel) return i;
}}
return _CHAR_NULL;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x12D0{
if(func_34(character)) return func_37(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_37(eCharacter echParam0) // Position - 0x12F5{
return Global_2028[echParam0 /*29*/];
}

int func_38(Player plParam0) // Position - 0x1304{
int num;
num=func_39(plParam0);
return num;
}

int func_39(Player plParam0) // Position - 0x1316{
if(plParam0 > -1)if(plParam0==PLAYER::PLAYER_ID()) return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
elseif(func_40(plParam0)) return Global_1853910[plParam0 /*862*/].f_205.f_3;
else return 0;
return 0;
}
BOOL func_40(Player plParam0) // Position - 0x1359{
if(plParam0==-1) return false;
else return IS_BIT_SET(Global_2672505.f_1, plParam0);
return true;
}


void func_41(var uParam0, int iParam1) // Position - 0x137B{
uParam0->f_13=iParam1;
func_24(uParam0);
return;
}
BOOL func_42(var uParam0) // Position - 0x138F{
func_73(PLAYER::PLAYER_PED_ID());
if(*uParam0==0) return false;
if(func_44(false)) return false;
if(func_43()) return false;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return false;
}elseif(uParam0->f_6==1){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return false;
if(_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) !=-1) return false;
}
if(uParam0->f_11==1) return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
return func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10, true);
}
BOOL func_43() // Position - 0x1448{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_44(BOOL bParam0) // Position - 0x145D{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}
BOOL func_45(int iParam0) // Position - 0x1486{
if(iParam0==0)if(func_51()) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE()) return false;
if(PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) return false;
if(func_43()) return false;
if(Global_63356) return false;
if(func_44(false)) return false;
if(func_50(0)) return false;
if(func_46(PLAYER::PLAYER_ID())) return false;
return true;
}
BOOL func_46(Player plParam0) // Position - 0x14F2{
if(func_49(plParam0)) return true;
if(func_47(plParam0)) return true;
return false;
}
BOOL func_47(Player plParam0) // Position - 0x1515{
Player player;
player=plParam0;
if(player !=-1) return func_48(plParam0, 9);
return false;
}
BOOL func_48(Player plParam0, int iParam1) // Position - 0x1533{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
BOOL func_49(Player plParam0) // Position - 0x154B{
Player player;
player=plParam0;
if(player !=-1) return IS_BIT_SET(Global_1894573[player /*608*/].f_1, 0);
return false;
}
BOOL func_50(int iParam0) // Position - 0x156E{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_51() // Position - 0x15C5{
if(Global_43257==15) return false;
return true;
}


void func_52(var uParam0) // Position - 0x15DA{
if(uParam0->f_11==1) func_54(&(uParam0->f_16), 255, 100, 0, 100);
else func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
return;
}


void func_53(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x160F{
int i;
float num;
float num2;
float num3;
float value;
num=360f / SYSTEM::TO_FLOAT(iParam8);
num2={
uParam0 
};
num3={
uParam0 
};
value=0f;
num2={
uParam0 
};
num2=num2 + (SYSTEM::SIN(value - num) * uParam3);
num2.f_1=num2.f_1 + (SYSTEM::COS(value - num) * uParam3);
for (i=0;
i <=iParam8;
i=i + 1){
num3={
uParam0 
};
num3=num3 + (SYSTEM::SIN(value) * uParam3);
num3.f_1=num3.f_1 + (SYSTEM::COS(value) * uParam3);
GRAPHICS::DRAW_DEBUG_LINE(num2, num3, iParam4, iParam5, iParam6, iParam7);
num2={
num3 
};
value=value + num;
}
return;
}


void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x16C4{
func_55(uParam0->[0 /*3*/], uParam0->[1 /*3*/], uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
return;
}


void func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x16EA{
var unk;
var unk4;
float num;
var unk7;
var unk10;
var unk13;
int i;
if(fParam6==0f) return;
unk={
func_20(uParam3 - uParam0) 
};
unk4={
func_56(unk, 0f, 0f, 1f) 
};
num=fParam6 / 2f;
unk13=8;
unk7={
uParam0 
};
unk10={
uParam3 
};
unk10.f_2=uParam0.f_2;
unk13[0 /*3*/]={
unk7 - (unk4 *{
num, num, num 
}
) 
};
unk13[1 /*3*/]={
unk7 + (unk4 *{
num, num, num 
}
) 
};
unk13[2 /*3*/]={
unk10 + (unk4 *{
num, num, num 
}
) 
};
unk13[3 /*3*/]={
unk10 - (unk4 *{
num, num, num 
}
) 
};
GRAPHICS::DRAW_DEBUG_LINE(unk13[0 /*3*/], unk13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[1 /*3*/], unk13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[2 /*3*/], unk13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[3 /*3*/], unk13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
for (i=0;
i <=3;
i=i + 1){
unk13[4 + i /*3*/]={
unk13[i /*3*/] 
};
unk13[4 + i /*3*/].f_2=uParam3.f_2;
}
GRAPHICS::DRAW_DEBUG_LINE(unk13[4 /*3*/], unk13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[5 /*3*/], unk13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[6 /*3*/], unk13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[7 /*3*/], unk13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[0 /*3*/], unk13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[1 /*3*/], unk13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[2 /*3*/], unk13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
GRAPHICS::DRAW_DEBUG_LINE(unk13[3 /*3*/], unk13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
return;
}


Vector3 func__56(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x18FA{
return (fParam0.f_1 * fParam3.f_2) - (fParam0.f_2 * fParam3.f_1), (fParam0.f_2 * fParam3) - (fParam0 * fParam3.f_2), (fParam0 * fParam3.f_1) - (fParam0.f_1 * fParam3);
}


void func_57(int iParam0) // Position - 0x1933{
int shapeTestResult;
Entity entityHit;
var endCoords;
var surfaceNormal;
int hit;
if(!func_42(&iLocal_40[iParam0 /*24*/])){
iLocal_40[iParam0 /*24*/].f_8=0;
uLocal_117[iParam0]=0;
return;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
iLocal_40[iParam0 /*24*/].f_8=0;
uLocal_117[iParam0]=0;
return;
}
if(uLocal_117[iParam0]==0){
if(MISC::GET_GAME_TIMER() > uLocal_114[iParam0]) uLocal_117[iParam0]=SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(uLocal_107[iParam0 /*3*/], uLocal_107[iParam0 /*3*/] +{
1f, 0f, 0f 
}
, 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
}else{
shapeTestResult=SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_117[iParam0], &hit, &endCoords, &surfaceNormal, &entityHit);
if(shapeTestResult==2){
iLocal_40[iParam0 /*24*/].f_8=0;
if(hit > 0)if(ENTITY::DOES_ENTITY_EXIST(entityHit))if(ENTITY::IS_ENTITY_A_VEHICLE(entityHit)) iLocal_40[iParam0 /*24*/].f_8=1;
uLocal_117[iParam0]=0;
}
if(shapeTestResult==0) uLocal_117[iParam0]=0;
uLocal_114[iParam0]=MISC::GET_GAME_TIMER() + 250;
}
return;
}


void func_58(BOOL bParam0) // Position - 0x1A24{
bParam0;
return;
}

int func_59(Vehicle veParam0) // Position - 0x1A31{
if(!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veParam0))) return 1;
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 0)) return 1;
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 1)) return 1;
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 2)) return 1;
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 3)) return 1;
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, true))if(VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0)==6) return 1;
return 0;
}

int func_60(Vehicle veParam0) // Position - 0x1A9C{
var minimum;
float maximum;
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0)) return 0;
if(!VEHICLE::DOES_VEHICLE_HAVE_ROOF(veParam0)) return 1;
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veParam0)) return 1;
if(!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veParam0))) return 1;
if(FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return 1;
if(func_63(veParam0, true)) return 1;
if(func_61(veParam0)) return 1;
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
if(ENTITY::GET_ENTITY_MODEL(veParam0) !=joaat("zeno"))if(MISC::ABSF(maximum - minimum) > 3.4f) return 1;
if(MISC::ABSF(maximum.f_2 - minimum.f_2) > 2.9f) return 1;
if(Global_78558)if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0)) return 0;
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(veParam0)) return 1;
if(!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(veParam0)) return 1;
if(ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("btype") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("btype3"))if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 3, false)) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 4, false)) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 5, false)) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 6, false)) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 7, false)) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 8, false))) return 1;
return 0;
}
BOOL func_61(Vehicle veParam0) // Position - 0x1C2D{
Hash entityModel;
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(func_62(entityModel)) return true;
if(entityModel==joaat("regina")){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2)) return true;
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4)) return true;
}
if(entityModel==joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(veParam0)) return true;
if(entityModel==joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1)) return true;
if(entityModel==joaat("ruiner")){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 7)) return false;
return true;
}
if(entityModel==joaat("yosemite3"))if(VEHICLE::GET_VEHICLE_MOD(veParam0, 5)==4) return true;
if(entityModel==joaat("rt3000") && VEHICLE::GET_VEHICLE_MOD(veParam0, 10)==3) return true;
if(entityModel==joaat("brioso3")){
switch (VEHICLE::GET_VEHICLE_MOD(veParam0, 10)){
case 1:
case 4:
case 7:
case 10:
return true;
default:
}}
if(entityModel==joaat("zr350") && VEHICLE::GET_VEHICLE_MOD(veParam0, 0) > 10) return true;
if(entityModel==joaat("krieger") && VEHICLE::GET_VEHICLE_MOD(veParam0, 0) > 0) return true;
if(entityModel==1748565021 && VEHICLE::GET_VEHICLE_MOD(veParam0, 10) >=0 && VEHICLE::GET_VEHICLE_MOD(veParam0, 10) <=4) return true;
if(entityModel==996383885 && VEHICLE::GET_VEHICLE_MOD(veParam0, 10)==0) return true;
return false;
}
BOOL func_62(Hash hParam0) // Position - 0x1E54{
if(!VEHICLE::IS_THIS_MODEL_A_CAR(hParam0)) return true;
switch (hParam0){
case joaat("ambulance"):
case joaat("armytrailer"):
case joaat("airtug"):
case joaat("bifta"):
case joaat("bison2"):
case joaat("bison3"):
case joaat("bodhi2"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("bulldozer"):
case joaat("caddy"):
case joaat("caddy2"):
case joaat("caddy3"):
case joaat("cutter"):
case joaat("dilettante2"):
case joaat("dubsta3"):
case joaat("dump"):
case joaat("dune"):
case joaat("dloader"):
case joaat("forklift"):
case joaat("guardian"):
case joaat("graintrailer"):
case joaat("handler"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("kalahari"):
case joaat("mesa3"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("mower"):
case joaat("packer"):
case joaat("pbus"):
case joaat("ratloader"):
case joaat("rentalbus"):
case joaat("rhino"):
case joaat("ripley"):
case joaat("riot"):
case joaat("sadler"):
case joaat("sadler2"):
case joaat("sandking"):
case joaat("sandking2"):
case joaat("scrap"):
case joaat("stockade"):
case joaat("stockade3"):
case joaat("technical"):
case joaat("tractor"):
case joaat("tractor2"):
case joaat("tornado4"):
case joaat("tourbus"):
case joaat("limo2"):
case joaat("raptor"):
case joaat("ratloader2"):
case joaat("dune3"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("vigilante"):
case joaat("deluxo"):
case joaat("caracara"):
case joaat("scramjet"):
case joaat("menacer"):
case joaat("caracara2"):
case joaat("locust"):
case joaat("jugular"):
case joaat("zorrusso"):
case joaat("formula"):
case joaat("everon"):
case joaat("zhaba"):
case joaat("outlaw"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("peyote3"):
case joaat("youga3"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("winky"):
case joaat("slamtruck"):
case joaat("veto"):
case joaat("veto2"):
case joaat("squaddie"):
case joaat("comet7"):
case joaat("sm722"):
case joaat("draugur"):
return true;
}
return false;
}
BOOL func_63(Vehicle veParam0, BOOL bParam1) // Position - 0x2071{
if(Global_78558)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", BOOL))if(DECORATOR::DECOR_EXIST_ON(veParam0, "TestDrive")) return unk_0x8FA309E9ECEE409A(veParam0, "TestDrive");
return false;
}


float func_64(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x20BF{
Vector3 entityCoords;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}


void func_65() // Position - 0x20F9{
func_71(&iLocal_40[0 /*24*/], 1, "Carwash1", func_72(156), 15, "", 0, 4f);
func_71(&iLocal_40[1 /*24*/], 1, "Carwash2", func_72(157), 15, "", 0, 4f);
func_69(&iLocal_40[0 /*24*/], -1f, 0f, 0f, 360f);
func_69(&iLocal_40[1 /*24*/], 0f, -1f, 0f, 360f);
func_66(&uLocal_89, 0);
uLocal_107[0 /*3*/]={
47.6f, -1392f, 29.4f 
};
uLocal_107[1 /*3*/]={
-700f, -925.3f, 19f 
};
return;
}


void func_66(var uParam0, int iParam1) // Position - 0x2188{
*uParam0="CWASH_RIDEHLP" /*Press ~INPUT_CONTEXT~ to use the Car Wash. The cost is $~1~.*/;
uParam0->f_1="";
uParam0->f_3="CWASH_NOWAY" /*This vehicle cannot be used with the Car Wash.*/;
uParam0->f_4="CWASH_WANTED" /*You can't use the Car Wash while Wanted.*/;
uParam0->f_5="CWASH_CARBROKE" /*This vehicle is too damaged to be used with the Car Wash.*/;
uParam0->f_6="CWASH_BLOCKED" /*The Car Wash is blocked. Please come back later.*/;
uParam0->f_7="CWASH_WRONGWAY" /*Your vehicle needs to be pointing towards the Car Wash.*/;
uParam0->f_8="CWASH_UPSIDEDO" /*Your vehicle needs to be upright to use the Car Wash.*/;
uParam0->f_16=iParam1;
if(!Global_78558){
uParam0->f_2="CWASH_NOMONEY" /*You do not have enough money. It costs $~1~ to use the Car Wash.*/;
return;
}
if(MISC::IS_PS3_VERSION() || func_68()) uParam0->f_2="CWASH_POOR_PSN" /*It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from PlayStation®Store in the Pause Menu.*/;
elseif(MISC::IS_XBOX360_VERSION() || func_67()) uParam0->f_2="CWASH_POOR_XBX" /*It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from the Xbox Store in the Pause Menu.*/;
else uParam0->f_2="CWASH_POOR_STD" /*It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from the Store in the Pause Menu.*/;
return;
}
BOOL func_67() // Position - 0x221C{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_68() // Position - 0x2232{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}


void func_69(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x2248{
uParam0->f_12={
func_20(fParam1 *{
5f, 5f, 5f 
}
) 
};
uParam0->f_15=func_70(fParam4, 0f, 360f);
return;
}


float func_70(float fParam0, float fParam1, float fParam2) // Position - 0x2271{
if(fParam0 > fParam2) return fParam2;
elseif(fParam0 < fParam1) return fParam1;
return fParam0;
}


void func_71(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, char* sParam7, int iParam8, float fParam9) // Position - 0x2298{
uParam0->f_5=sParam2;
uParam0->f_1={
uParam3 
};
uParam0->f_4=sParam7;
uParam0->f_9=iParam6;
uParam0->f_7=iParam8;
uParam0->f_6=iParam1;
uParam0->f_11=0;
*uParam0=1;
uParam0->f_12={
0f, 0f, 0f 
};
uParam0->f_15=360f;
if(iParam1==0) uParam0->f_10=2.75f;
else uParam0->f_10=2.75f * 2f;
if(fParam9 > 0f) uParam0->f_10=fParam9;
return;
}


Vector3 func__72(int iParam0) // Position - 0x230D{
int num;
num=iParam0;
return Global_32543[num /*23*/][0 /*3*/];
}
BOOL func_73(Vehicle veParam0) // Position - 0x2325{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return false;
return !ENTITY::IS_ENTITY_DEAD(veParam0, false);
}


void func_74() // Position - 0x2343{
func_75(&iLocal_40);
func_24(&uLocal_89);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_75(var uParam0) // Position - 0x235B{
int i;
i=0;
for (i=0;
i < *uParam0;
i=i + 1){
func_76(&uParam0->[i /*24*/]);
}
return;
}


void func_76(var uParam0) // Position - 0x2384{
*uParam0=0;
return;
}