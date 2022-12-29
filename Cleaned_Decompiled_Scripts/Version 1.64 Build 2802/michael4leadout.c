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
BOOL bLocal_20=0;
int iLocal_21=0;
Vehicle veLocal_22=0;
Ped pedLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
Interior inLocal_32=0;
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
func_232();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)) func_231();
while (iLocal_21 !=5){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
switch (iLocal_21){
case 0:
if(func_230()){
Global_78827=1;
iLocal_21=1;
}
func_232();
break;
case 1:
if(!func_230()){
Global_43806=1;
func_229(-1613.869f, -1054.958f, 12.0722f, -1082130432, 350, 1114636288, false);
CUTSCENE::REQUEST_CUTSCENE("SOL_5_MCS_2_P5", 8);
func_228(0, 1);
func_110(PLAYER::PLAYER_PED_ID(), 12, 35, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
SYSTEM::WAIT(500);
iLocal_21=2;
}
func_232();
break;
case 2:
if(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("SOL_5_MCS_2_P5") && func_109(0, 1) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID())){
CLOCK::SET_CLOCK_TIME(7, 5, 30);
unk_0xA86292DA3C45FD42("EXTRASUNNY");
MISC::CLEAR_WEATHER_TYPE_PERSIST();
MISC::CLEAR_AREA(-1590.055f, -1037.0665f, 12.0186f, 4f, true, false, false, false);
func_59(&veLocal_22, 0, -1590.055f, -1037.0665f, 12.0186f, 24.5062f, true, 1);
func_8(veLocal_22, -1590.055f, -1037.0665f, 12.0186f, 24.5062f, 24, false);
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
CUTSCENE::START_CUTSCENE(0);
iLocal_21=3;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
if(!bLocal_20){
pedLocal_23=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Michael", joaat("Player_Zero")));
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_23)){
if(!ENTITY::IS_ENTITY_DEAD(pedLocal_23, false)){
PED::CLEAR_PED_BLOOD_DAMAGE(pedLocal_23);
unk_0x76FC6570CC600E1F(pedLocal_23, 0, "ALL");
unk_0x76FC6570CC600E1F(pedLocal_23, 1, "ALL");
unk_0x76FC6570CC600E1F(pedLocal_23, 4, "ALL");
unk_0x76FC6570CC600E1F(pedLocal_23, 5, "ALL");
unk_0x76FC6570CC600E1F(pedLocal_23, 2, "ALL");
unk_0x76FC6570CC600E1F(pedLocal_23, 3, "ALL");
bLocal_20=true;
}}
}
if(!CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(800);
Global_78827=0;
}
}
else{
iLocal_21=4;
}}
break;
case 4:
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
func_7(Global_95719[0 /*10*/].f_7, 1, false);
func_6(0, &uLocal_24);
inLocal_32=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95719[0 /*10*/].f_3, &uLocal_24);
if(Global_100733.f_385==inLocal_32) Global_100733.f_385=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(inLocal_32 !=0) INTERIOR::UNPIN_INTERIOR(inLocal_32);
Global_100720=0;
func_4();
Global_43806=0;
func_3(30000);
func_1(0, 0);
iLocal_21=5;
}
break;
}}
SYSTEM::WAIT(0);
}
func_231();
return;
}


void func_1(int iParam0, int iParam1) // Position - 0x2BC{
if(!func_2(iParam0)) return;
Global_113648.f_2365.f_539.f_2332[iParam0]=iParam1;
return;
}
BOOL func_2(int iParam0) // Position - 0x2E4{
return iParam0 < 3;
}


void func_3(int iParam0) // Position - 0x2F0{
Global_43808=MISC::GET_GAME_TIMER() + iParam0;
return;
}

int func_4() // Position - 0x302{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x34D{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}
BOOL func_6(int iParam0, char* sParam1) // Position - 0x375{
TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
break;
case 2:
case 1:
if(STREAMING::IS_IPL_ACTIVE("TrevorsTrailer")) TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy")) TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash")) TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
break;
case 8:
case 7:
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
break;
}
return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}


void func_7(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x449{
int num;
BOOL flag;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(!bParam2){
flag=IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
if(flag==bParam1) return;
}
if(bParam1 !=IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 15);
}
if(!IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
HUD::REMOVE_BLIP(&(Global_32543[num /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
}}
return;
}


void func_8(Vehicle veParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x549{
var unk;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(iParam5 !=24 && iParam5 !=25) return;
if(iParam5==24)if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], false))if(Global_77348.f_484[25]==veParam0) return;
if(!bParam6)if(VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("tourbus")) return;
func_58(iParam5);
unk.f_9=49;
unk.f_59=2;
func_53(veParam0, &unk);
if(func_52(fParam1, 0f, 0f, 0f, false)){
fParam1={
ENTITY::GET_ENTITY_COORDS(veParam0, true) 
};
fParam4=ENTITY::GET_ENTITY_HEADING(veParam0);
}
if(iParam5==24)if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")) Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
func_45(iParam5, &unk, fParam1, fParam4, func_51(veParam0));
func_9(iParam5, veParam0, 0);
}
return;
}


void func_9(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x672{
Vehicle vehicle;
if(iParam0==-1) return;
if(!func_42(&Global_77348.f_555[0 /*21*/], iParam0)) return;
if(!IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))if(Global_77348.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(veParam1)) return;
if(Global_78255 !=-1 && Global_78255 !=iParam0) return;
if(ENTITY::DOES_ENTITY_EXIST(veParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
if(iParam0==24) Global_113648.f_32751.f_4801=func_31();
if(veParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
vehicle=func_30(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 !=vehicle) func_10(vehicle, 145);
}
Global_78254=veParam1;
Global_78255=iParam0;
Global_78256=iParam2;
}}}
return;
}


void func_10(Vehicle veParam0, int iParam1) // Position - 0x789{
Ped pedInVehicleSeat;
int i;
int j;
if(!func_11(veParam0)) return;
if(iParam1 !=0 && iParam1 !=1 && iParam1 !=2){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
if(!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat)) pedInVehicleSeat=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))if(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Zero")) iParam1=0;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_One")) iParam1=1;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Two")) iParam1=2;
if(iParam1 !=0 && iParam1 !=1 && iParam1 !=2) iParam1=Global_113648.f_2365.f_539.f_4321;
}
for (i=0;
i < 3;
i=i + 1){
for (j=0;
j < 2;
j=j + 1){
if(ENTITY::GET_ENTITY_MODEL(veParam0)==Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1))){
Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66=0;
Global_113648.f_32751.f_5592[i]=j;
}}}}}
for (i=0;
i < 3;
i=i + 1){
if(ENTITY::GET_ENTITY_MODEL(veParam0)==Global_113648.f_32751.f_5600[i /*78*/].f_66)if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1))) Global_113648.f_32751.f_5600[i /*78*/].f_66=0;
}
Global_113648.f_32751.f_5590=iParam1;
Global_78253=veParam0;
Global_113648.f_32751.f_5588=1;
func_53(veParam0, &(Global_113648.f_32751.f_5510));
return;
}
BOOL func_11(Vehicle veParam0) // Position - 0x98B{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_28(veParam0, 0, false) || func_28(veParam0, 1, false) || func_28(veParam0, 2, false) || func_51(veParam0) !=145 || func_27(veParam0) || func_26(veParam0) || func_25(veParam0) || func_24(veParam0) || !func_12(ENTITY::GET_ENTITY_MODEL(veParam0))){
func_26(veParam0);
func_26(veParam0);
func_28(veParam0, 0, false);
func_28(veParam0, 1, false);
func_28(veParam0, 2, false);
func_51(veParam0) !=145;
return false;
}
return true;
}
BOOL func_12(Hash hParam0) // Position - 0xA68{
if(hParam0==0) return false;
if(!func_13(hParam0, false, -1)) return false;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0)) return false;
switch (hParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return false;
}
return true;
}
BOOL func_13(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xC1A{
int i;
Hash outData;
if(hParam0==0) return false;
if(!STREAMING::IS_MODEL_A_VEHICLE(hParam0)) return false;
if(hParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("blimp2") || hParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!_IS_EXCLUSIVE_CONTENT_UNLOCKED()) return false;
}else{
for (i=0;
i < FILES::GET_NUM_DLC_VEHICLES();
i=i + 1){
if(FILES::GET_DLC_VEHICLE_DATA(i, &outData))if(hParam0==outData.f_1)if(FILES::IS_CONTENT_ITEM_LOCKED(outData)) return false;
}}
if(hParam0==joaat("blimp"))if(!func_22() && !func_21() && !func_20() && !func_19() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED()) return false;
if(hParam0==joaat("hotknife") || hParam0==joaat("carbonrs") || hParam0==joaat("khamelion")){
if(func_18() || MISC::IS_PC_VERSION() || func_17()){
}elseif(!func_20()){
return false;
}}
if(bParam1)if(!func_16(hParam0, iParam2)) return false;
if(!func_14(hParam0)) return false;
return true;
}
BOOL func_14(Hash hParam0) // Position - 0xD9C{
int num;
var unk;
var unk2;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) return true;
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);
if(num==4) return true;
switch (hParam0){
case joaat("dune4"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return true;
}
if(!unk_0x0E4605546F88E7A3(&unk2)) return false;
return true;
}
BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xE64{
if(MISC::IS_PC_VERSION()) return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
return false;
}
BOOL func_16(Hash hParam0, int iParam1) // Position - 0xE7B{
BOOL num;
int cloudTimeAsInt;
if(!Global_2764242 && iParam1 >=0 && iParam1 <=415)if(IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)) return true;
if(Global_2764241) return true;
num=1;
cloudTimeAsInt=NETWORK::GET_CLOUD_TIME_AS_INT();
if(hParam0==joaat("btype3"))if(!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398) num=0;
if(hParam0==joaat("faction3"))if(!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749) num=0;
elseif(hParam0==joaat("virgo3") || hParam0==joaat("virgo2"))if(!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745) num=0;
elseif(hParam0==joaat("sabregt2"))if(!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746) num=0;
elseif(hParam0==joaat("tornado5"))if(!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747) num=0;
elseif(hParam0==joaat("minivan2"))if(!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748) num=0;
elseif(hParam0==joaat("slamvan3"))if(!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750) num=0;
if(hParam0==joaat("prototipo"))if(!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742) num=0;
elseif(hParam0==joaat("seven70"))if(!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743) num=0;
elseif(hParam0==joaat("pfister811"))if(!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744) num=0;
if(hParam0==joaat("bf400"))if(!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278) num=0;
elseif(hParam0==joaat("brioso"))if(!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273) num=0;
elseif(hParam0==joaat("cliffhanger"))if(!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277) num=0;
elseif(hParam0==joaat("contender"))if(!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276) num=0;
elseif(hParam0==joaat("le7b"))if(!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270) num=0;
elseif(hParam0==joaat("omnis"))if(!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271) num=0;
elseif(hParam0==joaat("trophytruck"))if(!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274) num=0;
elseif(hParam0==joaat("trophytruck2"))if(!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275) num=0;
elseif(hParam0==joaat("tropos"))if(!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272) num=0;
elseif(hParam0==joaat("gargoyle"))if(!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280) num=0;
elseif(hParam0==joaat("rallytruck"))if(!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281) num=0;
elseif(hParam0==joaat("tampa2"))if(!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269) num=0;
elseif(hParam0==joaat("tyrus"))if(!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268) num=0;
elseif(hParam0==joaat("sheava"))if(!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267) num=0;
elseif(hParam0==joaat("lynx"))if(!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279) num=0;
elseif(hParam0==joaat("stalion2"))if(!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282) num=0;
elseif(hParam0==joaat("gauntlet2"))if(!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283) num=0;
elseif(hParam0==joaat("dominator2"))if(!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284) num=0;
elseif(hParam0==joaat("buffalo3"))if(!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285) num=0;
if(hParam0==joaat("defiler"))if(!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496) num=0;
elseif(hParam0==joaat("nightblade"))if(!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497) num=0;
elseif(hParam0==joaat("zombiea"))if(!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498) num=0;
elseif(hParam0==joaat("esskey"))if(!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499) num=0;
elseif(hParam0==joaat("avarus"))if(!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500) num=0;
elseif(hParam0==joaat("zombieb"))if(!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501) num=0;
elseif(hParam0==joaat("hakuchou2"))if(!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502) num=0;
elseif(hParam0==joaat("vortex"))if(!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503) num=0;
elseif(hParam0==joaat("shotaro"))if(!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504) num=0;
elseif(hParam0==joaat("chimera"))if(!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505) num=0;
elseif(hParam0==joaat("raptor"))if(!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506) num=0;
elseif(hParam0==joaat("daemon2"))if(!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507) num=0;
elseif(hParam0==joaat("blazer4"))if(!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508) num=0;
elseif(hParam0==joaat("tornado6"))if(!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515) num=0;
elseif(hParam0==joaat("youga2"))if(!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511) num=0;
elseif(hParam0==joaat("wolfsbane"))if(!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512) num=0;
elseif(hParam0==joaat("faggio3"))if(!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513) num=0;
elseif(hParam0==joaat("faggio"))if(!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514) num=0;
elseif(hParam0==joaat("bagger"))if(!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516) num=0;
elseif(hParam0==joaat("sanctus"))if(!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509) num=0;
elseif(hParam0==joaat("manchez"))if(!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510) num=0;
elseif(hParam0==joaat("ratbike"))if(!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517) num=0;
if(hParam0==joaat("voltic2"))if(!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228) num=0;
elseif(hParam0==joaat("ruiner2"))if(!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229) num=0;
elseif(hParam0==joaat("dune4"))if(!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230) num=0;
elseif(hParam0==joaat("dune5"))if(!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231) num=0;
elseif(hParam0==joaat("phantom2"))if(!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232) num=0;
elseif(hParam0==joaat("technical2"))if(!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233) num=0;
elseif(hParam0==joaat("boxville5"))if(!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234) num=0;
elseif(hParam0==joaat("wastelander"))if(!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235) num=0;
elseif(hParam0==joaat("blazer5"))if(!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236) num=0;
elseif(hParam0==joaat("comet2"))if(!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237) num=0;
elseif(hParam0==joaat("comet3"))if(!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238) num=0;
elseif(hParam0==joaat("diablous"))if(!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239) num=0;
elseif(hParam0==joaat("diablous2"))if(!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240) num=0;
elseif(hParam0==joaat("elegy"))if(!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241) num=0;
elseif(hParam0==joaat("elegy2"))if(!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242) num=0;
elseif(hParam0==joaat("fcr"))if(!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243) num=0;
elseif(hParam0==joaat("fcr2"))if(!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244) num=0;
elseif(hParam0==joaat("italigtb"))if(!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245) num=0;
elseif(hParam0==joaat("italigtb2"))if(!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246) num=0;
elseif(hParam0==joaat("nero"))if(!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247) num=0;
elseif(hParam0==joaat("nero2"))if(!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248) num=0;
elseif(hParam0==joaat("penetrator"))if(!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249) num=0;
elseif(hParam0==joaat("specter"))if(!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250) num=0;
elseif(hParam0==joaat("specter2"))if(!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251) num=0;
elseif(hParam0==joaat("tempesta"))if(!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252) num=0;
if(hParam0==joaat("gp1"))if(!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208) num=0;
elseif(hParam0==joaat("infernus2"))if(!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209) num=0;
elseif(hParam0==joaat("ruston"))if(!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210) num=0;
elseif(hParam0==joaat("turismo2"))if(!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211) num=0;
if(hParam0==joaat("xa21"))if(!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102) num=0;
elseif(hParam0==joaat("cheetah2"))if(!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103) num=0;
elseif(hParam0==joaat("torero"))if(!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104) num=0;
elseif(hParam0==joaat("vagner"))if(!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105) num=0;
elseif(hParam0==joaat("ardent"))if(!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106) num=0;
elseif(hParam0==joaat("nightshark"))if(!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107) num=0;
if(hParam0==joaat("microlight"))if(!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913) num=0;
elseif(hParam0==joaat("mogul"))if(!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925) num=0;
elseif(hParam0==joaat("rogue"))if(!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916) num=0;
elseif(hParam0==joaat("starling"))if(!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926) num=0;
elseif(hParam0==joaat("seabreeze"))if(!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914) num=0;
elseif(hParam0==joaat("tula"))if(!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930) num=0;
elseif(hParam0==joaat("pyro"))if(!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928) num=0;
elseif(hParam0==joaat("molotok"))if(!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929) num=0;
elseif(hParam0==joaat("nokota"))if(!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924) num=0;
elseif(hParam0==joaat("bombushka"))if(!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931) num=0;
elseif(hParam0==joaat("hunter"))if(!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927) num=0;
elseif(hParam0==joaat("havok"))if(!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923) num=0;
elseif(hParam0==joaat("howard"))if(!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915) num=0;
elseif(hParam0==joaat("alphaz1"))if(!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917) num=0;
elseif(hParam0==joaat("cyclone"))if(!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918) num=0;
elseif(hParam0==joaat("visione"))if(!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919) num=0;
elseif(hParam0==joaat("vigilante"))if(!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920) num=0;
elseif(hParam0==joaat("retinue"))if(!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921) num=0;
elseif(hParam0==joaat("rapidgt3"))if(!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922) num=0;
if(hParam0==joaat("deluxo"))if(!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889) num=0;
elseif(hParam0==joaat("stromberg"))if(!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890) num=0;
elseif(hParam0==joaat("riot2"))if(!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891) num=0;
elseif(hParam0==joaat("chernobog"))if(!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892) num=0;
elseif(hParam0==joaat("khanjali"))if(!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893) num=0;
elseif(hParam0==joaat("akula"))if(!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894) num=0;
elseif(hParam0==joaat("thruster"))if(!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895) num=0;
elseif(hParam0==joaat("barrage"))if(!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896) num=0;
elseif(hParam0==joaat("volatol"))if(!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897) num=0;
elseif(hParam0==joaat("comet4"))if(!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898) num=0;
elseif(hParam0==joaat("neon"))if(!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899) num=0;
elseif(hParam0==joaat("streiter"))if(!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900) num=0;
elseif(hParam0==joaat("sentinel3"))if(!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901) num=0;
elseif(hParam0==joaat("yosemite"))if(!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902) num=0;
elseif(hParam0==joaat("sc1"))if(!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903) num=0;
elseif(hParam0==joaat("autarch"))if(!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904) num=0;
elseif(hParam0==joaat("gt500"))if(!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905) num=0;
elseif(hParam0==joaat("hustler"))if(!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906) num=0;
elseif(hParam0==joaat("revolter"))if(!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907) num=0;
elseif(hParam0==joaat("pariah"))if(!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908) num=0;
elseif(hParam0==joaat("raiden"))if(!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909) num=0;
elseif(hParam0==joaat("savestra"))if(!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910) num=0;
elseif(hParam0==joaat("riata"))if(!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911) num=0;
elseif(hParam0==joaat("hermes"))if(!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912) num=0;
elseif(hParam0==joaat("comet5"))if(!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913) num=0;
elseif(hParam0==joaat("z190"))if(!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914) num=0;
elseif(hParam0==joaat("viseris"))if(!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915) num=0;
elseif(hParam0==joaat("kamacho"))if(!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916) num=0;
if(hParam0==joaat("gb200"))if(!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097) num=0;
elseif(hParam0==joaat("fagaloa"))if(!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098) num=0;
elseif(hParam0==joaat("ellie"))if(!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102) num=0;
elseif(hParam0==joaat("issi3"))if(!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105) num=0;
elseif(hParam0==joaat("michelli"))if(!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110) num=0;
elseif(hParam0==joaat("flashgt"))if(!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104) num=0;
elseif(hParam0==joaat("hotring"))if(!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096) num=0;
elseif(hParam0==joaat("tezeract"))if(!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103) num=0;
elseif(hParam0==joaat("tyrant"))if(!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109) num=0;
elseif(hParam0==joaat("dominator3"))if(!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108) num=0;
elseif(hParam0==joaat("taipan"))if(!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099) num=0;
elseif(hParam0==joaat("entity2"))if(!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101) num=0;
elseif(hParam0==joaat("jester3"))if(!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111) num=0;
elseif(hParam0==joaat("cheburek"))if(!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107) num=0;
elseif(hParam0==joaat("caracara"))if(!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100) num=0;
elseif(hParam0==joaat("seasparrow"))if(!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106) num=0;
if(hParam0==joaat("terbyte"))if(!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158) num=0;
elseif(hParam0==joaat("pbus2"))if(!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159) num=0;
elseif(hParam0==joaat("mule4"))if(!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164) num=0;
elseif(hParam0==joaat("pounder2"))if(!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163) num=0;
elseif(hParam0==joaat("swinger"))if(!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161) num=0;
elseif(hParam0==joaat("menacer"))if(!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167) num=0;
elseif(hParam0==joaat("scramjet"))if(!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169) num=0;
elseif(hParam0==joaat("strikeforce"))if(!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170) num=0;
elseif(hParam0==joaat("oppressor2"))if(!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168) num=0;
elseif(hParam0==joaat("patriot2"))if(!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160) num=0;
elseif(hParam0==joaat("stafford"))if(!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162) num=0;
elseif(hParam0==joaat("freecrawler"))if(!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166) num=0;
elseif(hParam0==joaat("blimp3"))if(!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165) num=0;
if(hParam0==joaat("monster3")){}elseif(hParam0==joaat("cerberus")){}elseif(hParam0==joaat("cerberus2")){}elseif(hParam0==joaat("cerberus3")){}elseif(hParam0==joaat("brutus")){}elseif(hParam0==joaat("brutus2")){}elseif(hParam0==joaat("brutus3")){}elseif(hParam0==joaat("scarab")){}elseif(hParam0==joaat("scarab2")){}elseif(hParam0==joaat("scarab3")){}elseif(hParam0==joaat("imperator")){}elseif(hParam0==joaat("imperator2")){}elseif(hParam0==joaat("imperator3")){}elseif(hParam0==joaat("zr380")){}elseif(hParam0==joaat("zr3802")){}elseif(hParam0==joaat("zr3803")){}elseif(hParam0==joaat("impaler")){}elseif(hParam0==joaat("deveste")){
if(!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770) num=0;
}elseif(hParam0==joaat("toros")){
if(!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774) num=0;
}elseif(hParam0==joaat("clique")){
if(!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775) num=0;
}elseif(hParam0==joaat("italigto")){
if(!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776) num=0;
}elseif(hParam0==joaat("deviant")){
if(!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777) num=0;
}elseif(hParam0==joaat("vamos")){
if(!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771) num=0;
}elseif(hParam0==joaat("tulip")){
if(!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778) num=0;
}elseif(hParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779) num=0;
}elseif(hParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780) num=0;
}elseif(hParam0==joaat("thrax")){
if(!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813) num=0;
}elseif(hParam0==joaat("drafter")){
if(!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814) num=0;
}elseif(hParam0==joaat("locust")){
if(!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815) num=0;
}elseif(hParam0==joaat("novak")){
if(!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816) num=0;
}elseif(hParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817) num=0;
}elseif(hParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818) num=0;
}elseif(hParam0==joaat("issi7")){
if(!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819) num=0;
}elseif(hParam0==joaat("zion3")){
if(!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820) num=0;
}elseif(hParam0==joaat("nebula")){
if(!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821) num=0;
}elseif(hParam0==joaat("hellion")){
if(!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822) num=0;
}elseif(hParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823) num=0;
}elseif(hParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824) num=0;
}elseif(hParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825) num=0;
}elseif(hParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826) num=0;
}elseif(hParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827) num=0;
}elseif(hParam0==joaat("jugular")){
if(!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828) num=0;
}elseif(hParam0==joaat("s80")){
if(!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829) num=0;
}elseif(hParam0==joaat("krieger")){
if(!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830) num=0;
}elseif(hParam0==joaat("emerus")){
if(!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831) num=0;
}elseif(hParam0==joaat("neo")){
if(!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832) num=0;
}elseif(hParam0==joaat("paragon")){
if(!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833) num=0;
}elseif(hParam0==joaat("asbo")){
if(!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634) num=0;
}elseif(hParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635) num=0;
}elseif(hParam0==joaat("everon")){
if(!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636) num=0;
}elseif(hParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637) num=0;
}elseif(hParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638) num=0;
}elseif(hParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639) num=0;
}elseif(hParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640) num=0;
}elseif(hParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641) num=0;
}elseif(hParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642) num=0;
}elseif(hParam0==joaat("komoda")){
if(!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643) num=0;
}elseif(hParam0==joaat("stryder")){
if(!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644) num=0;
}elseif(hParam0==joaat("furia")){
if(!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645) num=0;
}elseif(hParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646) num=0;
}elseif(hParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647) num=0;
}elseif(hParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648) num=0;
}elseif(hParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649) num=0;
}elseif(hParam0==joaat("boxville")){
if(!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650) num=0;
}elseif(hParam0==joaat("stockade")){
if(!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651) num=0;
}elseif(hParam0==joaat("minitank")){
if(!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652) num=0;
}elseif(hParam0==joaat("lguard")){
if(!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653) num=0;
}elseif(hParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654) num=0;
}elseif(hParam0==joaat("formula")){
if(!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611) num=0;
}elseif(hParam0==joaat("formula2")){
if(!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612) num=0;
}elseif(hParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667) num=0;
}elseif(hParam0==joaat("rebla")){
if(!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668) num=0;
}elseif(hParam0==joaat("vstr")){
if(!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669) num=0;
}elseif(hParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347) num=0;
}elseif(hParam0==joaat("club")){
if(!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354) num=0;
}elseif(hParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340) num=0;
}elseif(hParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348) num=0;
}elseif(hParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349) num=0;
}elseif(hParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346) num=0;
}elseif(hParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355) num=0;
}elseif(hParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345) num=0;
}elseif(hParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343) num=0;
}elseif(hParam0==joaat("tigon")){
if(!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350) num=0;
}elseif(hParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351) num=0;
}elseif(hParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352) num=0;
}elseif(hParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353) num=0;
}elseif(hParam0==joaat("manana2")){
if(!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342) num=0;
}elseif(hParam0==joaat("youga3")){
if(!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344) num=0;
}elseif(hParam0==joaat("toreador")){
if(!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124) num=0;
}elseif(hParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125) num=0;
}elseif(hParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126) num=0;
}elseif(hParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127) num=0;
}elseif(hParam0==joaat("longfin")){
if(!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128) num=0;
}elseif(hParam0==joaat("winky")){
if(!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129) num=0;
}elseif(hParam0==joaat("veto")){
if(!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130) num=0;
}elseif(hParam0==joaat("veto2")){
if(!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131) num=0;
}elseif(hParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132) num=0;
}elseif(hParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133){
num=0;
}}elseif(hParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134) num=0;
}elseif(hParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135) num=0;
}elseif(hParam0==joaat("vetir")){
if(!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136) num=0;
}elseif(hParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137) num=0;
}elseif(hParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138){
num=0;
}}elseif(hParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139) num=0;
}elseif(hParam0==joaat("verus")){
if(!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140) num=0;
}elseif(hParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992) num=0;
}elseif(hParam0==joaat("euros")){
if(!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993) num=0;
}elseif(hParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994) num=0;
}elseif(hParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995) num=0;
}elseif(hParam0==joaat("vectre")){
if(!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996) num=0;
}elseif(hParam0==joaat("zr350")){
if(!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997) num=0;
}elseif(hParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998) num=0;
}elseif(hParam0==joaat("calico")){
if(!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999) num=0;
}elseif(hParam0==joaat("remus")){
if(!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000) num=0;
}elseif(hParam0==joaat("cypher")){
if(!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001) num=0;
}elseif(hParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002) num=0;
}elseif(hParam0==joaat("jester4")){
if(!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003) num=0;
}elseif(hParam0==joaat("futo2")){
if(!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004) num=0;
}elseif(hParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005) num=0;
}elseif(hParam0==joaat("previon")){
if(!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006) num=0;
}elseif(hParam0==joaat("growler")){
if(!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007) num=0;
}elseif(hParam0==joaat("comet6")){
if(!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008) num=0;
}elseif(hParam0==joaat("champion")){
if(!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874) num=0;
}elseif(hParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875) num=0;
}elseif(hParam0==joaat("deity")){
if(!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876) num=0;
}elseif(hParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877) num=0;
}elseif(hParam0==joaat("ignus")){
if(!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878) num=0;
}elseif(hParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879) num=0;
}elseif(hParam0==joaat("astron")){
if(!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880) num=0;
}elseif(hParam0==joaat("comet7")){
if(!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881) num=0;
}elseif(hParam0==joaat("zeno")){
if(!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882) num=0;
}elseif(hParam0==joaat("reever")){
if(!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883) num=0;
}elseif(hParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884) num=0;
}elseif(hParam0==joaat("granger2")){
if(!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885) num=0;
}elseif(hParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886) num=0;
}elseif(hParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887) num=0;
}elseif(hParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888){
num=0;
}}elseif(hParam0==joaat("brioso3")){
if(!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112) num=0;
}elseif(hParam0==joaat("corsita")){
if(!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106) num=0;
}elseif(hParam0==joaat("draugur")){
if(!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110) num=0;
}elseif(hParam0==joaat("greenwood")){
if(!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104) num=0;
}elseif(hParam0==joaat("kanjosj")){
if(!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115) num=0;
}elseif(hParam0==joaat("lm87")){
if(!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107) num=0;
}elseif(hParam0==joaat("postlude")){
if(!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116) num=0;
}elseif(hParam0==joaat("rhinehart")){
if(!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118) num=0;
}elseif(hParam0==joaat("sm722")){
if(!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109) num=0;
}elseif(hParam0==joaat("tenf")){
if(!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117) num=0;
}elseif(hParam0==joaat("tenf2")){
if(!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120) num=0;
}elseif(hParam0==joaat("torero2")){
if(!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105) num=0;
}elseif(hParam0==joaat("vigero2")){
if(!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113) num=0;
}elseif(hParam0==joaat("weevil2")){
if(!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119) num=0;
}elseif(hParam0==joaat("ruiner4")){
if(!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111) num=0;
}elseif(hParam0==joaat("sentinel4")){
if(!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121) num=0;
}elseif(hParam0==joaat("conada")){
if(!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108) num=0;
}elseif(hParam0==joaat("omnisegt")){
if(!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103) num=0;
}elseif(hParam0==1384502824){
if(!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946) num=0;
}elseif(hParam0==-1576586413){
if(!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946) num=0;
}elseif(hParam0==-1249788006){
if(!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954) num=0;
}elseif(hParam0==-1386336041){
if(!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949) num=0;
}elseif(hParam0==-1627077503){
if(!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943) num=0;
}elseif(hParam0==-1035489563){
if(!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944) num=0;
}elseif(hParam0==1748565021){
if(!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941) num=0;
}elseif(hParam0==2100457220){
if(!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952) num=0;
}elseif(hParam0==996383885){
if(!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956) num=0;
}elseif(hParam0==-131348178){
if(!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953) num=0;
}elseif(hParam0==268758436){
if(!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942) num=0;
}elseif(hParam0==1076201208){
if(!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945) num=0;
}elseif(hParam0==669204833){
if(!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955) num=0;
}elseif(hParam0==1550581940){
if(!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950) num=0;
}elseif(hParam0==-1933242328){
if(!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951) num=0;
}elseif(hParam0==-461850249){
if(!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948) num=0;
}elseif(hParam0==joaat("taxi")){
if(!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947) num=0;
}
return num;
}
BOOL func_17() // Position - 0x44B0{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_18() // Position - 0x44C6{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_19() // Position - 0x44DC{
return false;
}
BOOL func_20() // Position - 0x44E5{
return true;
}
BOOL func_21() // Position - 0x44EE{
return true;
}
BOOL func_22() // Position - 0x44F7{
if(DLC::IS_DLC_PRESENT(-1226939934)) return true;
return false;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x4510{
int profileSetting;
if(Global_152523==2) return true;
elseif(Global_152523==3) return false;
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(unk_0x8BD41D5945F5762B()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
MISC::SET_BIT(&profileSetting, 2);
MISC::SET_BIT(&profileSetting, 4);
MISC::SET_BIT(&profileSetting, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&profileSetting, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
}
return true;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID())if(IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)) return true;
return false;
}
BOOL func_24(Vehicle veParam0) // Position - 0x45C8{
Hash entityModel;
const char* vehicleNumberPlateText;
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
vehicleNumberPlateText=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);
if(entityModel==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G ")) return true;
if(!func_13(entityModel, false, -1)) return true;
return false;
}
BOOL func_25(Vehicle veParam0) // Position - 0x460F{
int i;
for (i=0;
i < 3;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))if(Global_98042[i]==veParam0) return true;
}
return false;
}
BOOL func_26(Vehicle veParam0) // Position - 0x464A{
int i;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))if(Global_98012[i]==veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i])==ENTITY::GET_ENTITY_MODEL(veParam0)) return true;
}}
return false;
}
BOOL func_27(Vehicle veParam0) // Position - 0x46C6{
int i;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))if(veParam0==Global_77348.f_484[24]) return false;
for (i=0;
i < 68;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))if(i !=24 && i !=21 && i !=22 && i !=23 && i !=27 && i !=30 && i !=33 && i !=28 && i !=31 && i !=34 && i !=26 && i !=29 && i !=32)if(veParam0==Global_77348.f_484[i]) return true;
}
return false;
}
BOOL func_28(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x47AE{
int i;
var garageName;
int num;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
for (i=0;
func_29(iParam1, i, &garageName, &num);
i=i + 1){
if(!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0)) return true;
}
return false;
}
BOOL func_29(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x481C{
TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return true;
}
break;
case 1:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return true;
}
break;
case 2:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
*uParam3=3;
return true;
}elseif(iParam1==2){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return true;
}
break;
}
return false;
}
Vehicle func_30(int iParam0) // Position - 0x48F4{
if(iParam0==-1) return 0;
return Global_77348.f_139[iParam0];
}


var func__31() // Position - 0x4910{
var unk;
func_41(&unk, CLOCK::GET_CLOCK_SECONDS());
func_40(&unk, CLOCK::GET_CLOCK_MINUTES());
func_39(&unk, CLOCK::GET_CLOCK_HOURS());
func_34(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_33(&unk, CLOCK::GET_CLOCK_MONTH());
func_32(&unk, CLOCK::GET_CLOCK_YEAR());
return unk;
}


void func_32(var uParam0, int iParam1) // Position - 0x4956{
if(iParam1 <=0) return;
if(iParam1 > 2043 || iParam1 < 1979) return;
*uParam0=*uParam0 - *uParam0 & 2080374784;
if(iParam1 < 2011){
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
*uParam0=*uParam0 | -2147483648;
}else{
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
*uParam0=*uParam0 - *uParam0 & -2147483648;
}
return;
}


void func_33(var uParam0, int iParam1) // Position - 0x49DC{
if(iParam1 < 0 || iParam1 > 11) return;
*uParam0=*uParam0 - *uParam0 & 15;
*uParam0=*uParam0 || iParam1;
return;
}


void func_34(var uParam0, int iParam1) // Position - 0x4A0F{
int num;
int num2;
num=func_38(*uParam0);
num2=func_36(*uParam0);
if(iParam1 < 1 || iParam1 > func_35(num, num2)) return;
*uParam0=*uParam0 - *uParam0 & 496;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
return;
}

int func_35(int iParam0, int iParam1) // Position - 0x4A60{
if(iParam1 < 0) iParam1=0;
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
case 3:
case 5:
case 8:
case 10:
return 30;
case 1:
if(iParam1 % 4==0)if(iParam1 % 100 !=0) return 29;
elseif(iParam1 % 400==0) return 29;
return 28;
}
return 30;
}

int func_36(int iParam0) // Position - 0x4B02{
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 :
1) + 2011;
}


var func__37(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4B24{
if(bParam0) return uParam1;
return uParam2;
}

int func_38(int iParam0) // Position - 0x4B3B{
return iParam0 & 15;
}


void func_39(var uParam0, int iParam1) // Position - 0x4B48{
if(iParam1 < 0 || iParam1 > 24) return;
*uParam0=*uParam0 - *uParam0 & 15872;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
return;
}


void func_40(var uParam0, int iParam1) // Position - 0x4B82{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 1032192;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
return;
}


void func_41(var uParam0, int iParam1) // Position - 0x4BBD{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 66060288;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
return;
}
BOOL func_42(var uParam0, int iParam1) // Position - 0x4BF9{
BOOL num;
int num2;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831.8538f, 172.1154f, 69.9058f 
};
uParam0->f_3=157.5705f;
uParam0->f_4=func_43(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 1:
*uParam0={
1970.9434f, 3801.6838f, 31.1396f 
};
uParam0->f_3=301.3964f;
uParam0->f_4=func_43(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 2:
*uParam0={
-22.6297f, -1439.1368f, 29.6549f 
};
uParam0->f_3=180.0808f;
uParam0->f_4=func_43(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 3:
*uParam0={
-22.5229f, -1434.6986f, 29.6552f 
};
uParam0->f_3=141.6114f;
uParam0->f_4=func_43(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 4:
*uParam0={
10.9281f, 545.669f, 174.7951f 
};
uParam0->f_3=61.392f;
uParam0->f_4=func_43(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 5:
*uParam0={
6.1093f, 544.9742f, 174.2835f 
};
uParam0->f_3=92.1548f;
uParam0->f_4=func_43(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 6:
*uParam0={
1981.4163f, 3808.1313f, 31.1384f 
};
uParam0->f_3=117.2557f;
uParam0->f_4=func_43(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 7:
*uParam0={
-1158.4875f, -1529.3673f, 3.8995f 
};
uParam0->f_3=35.7505f;
uParam0->f_4=func_43(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 8:
*uParam0={
148.2868f, -1270.5695f, 28.2252f 
};
uParam0->f_3=208.4685f;
uParam0->f_4=func_43(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 9:
*uParam0={
1459.5085f, -1380.45f, 78.3259f 
};
uParam0->f_3=99.6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 10:
*uParam0={
-1518.947f, -1387.8655f, -0.5134f 
};
uParam0->f_3=98.3867f;
uParam0->f_4=joaat("seashark");
num=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353.0926f, 3577.5925f, 32.351f 
};
uParam0->f_3=16.6205f;
uParam0->f_4=joaat("duster");
num=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652.0043f, -3142.3484f, 12.9921f 
};
uParam0->f_3=329.1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271.6487f, -3380.6853f, 12.9451f 
};
uParam0->f_3=329.5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735.5863f, 3294.5305f, 40.1651f 
};
uParam0->f_3=194.9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846.27f, -1363.19f, 0.22f 
};
uParam0->f_3=108.78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849.47f, -1354.99f, 0.24f 
};
uParam0->f_3=109.84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852.47f, -1346.2f, 0.21f 
};
uParam0->f_3=108.76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745.857f, -1433.9036f, 4.0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756.2952f, -1441.6093f, 2.9184f 
};
uParam0->f_18={
-738.0606f, -1423.0676f, 8.2835f 
};
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761.8486f, -1453.8293f, 4.0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772.8158f, -1459.9572f, 3.2894f 
};
uParam0->f_18={
-754.3353f, -1440.836f, 8.3334f 
};
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769.3f, 3244f, 41.1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 26:
case 27:
case 28:
num2=iParam1 - 26;
uParam0->f_14=12 + num2;
*uParam0={
196.2794f, -1020.4791f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 29:
case 30:
case 31:
num2=iParam1 - 29;
uParam0->f_14=15 + num2;
*uParam0={
199.8872f, -1020.048f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 32:
case 33:
case 34:
num2=iParam1 - 32;
uParam0->f_14=18 + num2;
*uParam0={
203.6006f, -1019.7762f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
num=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723.2515f, -632.0496f, 27.1484f 
};
uParam0->f_3=12.9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
num=1;
break;
case 35:
*uParam0={
-51.23f, 3111.9f, 24.95f 
};
uParam0->f_3=46.78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 36:
*uParam0={
-55.7984f, -1096.5856f, 25.4223f 
};
uParam0->f_3=308.0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
num=1;
break;
case 37:
*uParam0={
-2892.93f, 3192.37f, 11.66f 
};
uParam0->f_3=-132.35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
num=1;
break;
case 38:
*uParam0={
1744.3083f, 3270.673f, 40.2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 39:
*uParam0={
1751.4397f, 3322.643f, 42.1855f 
};
uParam0->f_3=268.134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
num=1;
break;
case 41:
*uParam0={
1377.1045f, -2076.2f, 52f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 40:
*uParam0={
1380.42f, -2072.7695f, 51.7607f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 42:
*uParam0={
1359.3892f, 3618.4407f, 33.8907f 
};
uParam0->f_3=108.2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 43:
*uParam0={
693.1154f, -1018.1551f, 21.6387f 
};
uParam0->f_3=177.6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 44:
*uParam0={
-73.6963f, 495.124f, 143.5226f 
};
uParam0->f_3=155.5994f;
uParam0->f_4=joaat("vacca");
num=1;
break;
case 45:
*uParam0={
-67.6314f, 891.8266f, 234.5348f 
};
uParam0->f_3=294.993f;
uParam0->f_4=joaat("surano");
num=1;
break;
case 46:
*uParam0={
533.9048f, -169.2469f, 53.7005f 
};
uParam0->f_3=1.2998f;
uParam0->f_4=joaat("tornado2");
num=1;
break;
case 47:
*uParam0={
-726.8914f, -408.6952f, 34.0416f 
};
uParam0->f_3=267.7392f;
uParam0->f_4=joaat("superd");
num=1;
break;
case 48:
*uParam0={
-1321.5186f, 261.3993f, 61.5709f 
};
uParam0->f_3=350.7697f;
uParam0->f_4=joaat("double");
num=1;
break;
case 49:
*uParam0={
-1267.9991f, 451.6463f, 93.7071f 
};
uParam0->f_3=48.9311f;
uParam0->f_4=joaat("double");
num=1;
break;
case 50:
*uParam0={
-1062.0762f, -226.7637f, 37.157f 
};
uParam0->f_3=234.2767f;
uParam0->f_4=joaat("double");
num=1;
break;
case 51:
*uParam0={
68.16914f, -1558.9581f, 29.469042f 
};
uParam0->f_3=49.905754f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 52:
*uParam0={
589.4399f, 2736.7078f, 42.033165f 
};
uParam0->f_3=-175.7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 53:
*uParam0={
-488.77396f, -344.57205f, 34.363564f 
};
uParam0->f_3=82.4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 54:
*uParam0={
288.88083f, -585.47284f, 43.15428f 
};
uParam0->f_3=-20.807068f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 55:
*uParam0={
304.82938f, -1383.6742f, 31.677443f 
};
uParam0->f_3=-41.116028f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 56:
*uParam0={
1126.1943f, -1481.486f, 34.701603f 
};
uParam0->f_3=-91.43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 57:
*uParam0={
-1598.36f, 5252.84f, 0f 
};
uParam0->f_3=28.14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 58:
*uParam0={
-1602.62f, 5260.37f, 0.86f 
};
uParam0->f_3=25.32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 59:
*uParam0={
2116.571f, 4763.2793f, 40.1596f 
};
uParam0->f_3=198.723f;
uParam0->f_4=joaat("bfinjection");
num=1;
break;
case 60:
*uParam0={
1133.21f, 120.2f, 80.9f 
};
uParam0->f_3=134.4f;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()) uParam0->f_4=joaat("blimp2");
else uParam0->f_4=joaat("blimp");
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
num=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()) uParam0->f_4=joaat("blimp2");
else uParam0->f_4=joaat("blimp");
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
num=1;
break;
case 62:
*uParam0={
1985.85f, 3828.96f, 31.98f 
};
uParam0->f_3=-16.58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 63:
*uParam0={
3870.75f, 4464.67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
num=1;
break;
case 64:
*uParam0={
1257.7295f, -2564.474f, 41.717f 
};
uParam0->f_3=284.5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 65:
*uParam0={
643.2823f, 3014.152f, 42.2733f 
};
uParam0->f_3=128.0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 66:
*uParam0={
38.9368f, 850.8677f, 196.3f 
};
uParam0->f_3=311.6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 67:
*uParam0={
1333.8752f, 4262.2256f, 30.78f 
};
uParam0->f_3=262.5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
}
if(IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra") || uParam0->f_4==joaat("luxor") || uParam0->f_4==joaat("shamal") || uParam0->f_4==joaat("titan") || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_52(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false)) *uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f) uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}
if(IS_BIT_SET(uParam0->f_9, 19)){
if(!func_52(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(IS_BIT_SET(uParam0->f_9, 20)){
if(!func_52(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return num;
}
Hash func_43(int iParam0, int iParam1) // Position - 0x62E7{
Hash num;
if(func_2(iParam0)){
num.f_11=12;
num.f_31=49;
num.f_81=2;
func_44(iParam0, &num, iParam1);
return num;
}else{
iParam0 !=145;
}
return 0;
}


void func_44(int iParam0, var uParam1, int iParam2) // Position - 0x6329{
int num;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (iParam0){
case 0:
num=joaat("tailgater");
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]) num=joaat("premier");
switch (num){
case joaat("tailgater"):
*uParam1=num;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=num;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
num=joaat("bodhi2");
switch (num){
case joaat("bodhi2"):
*uParam1=num;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113648.f_9087.f_99.f_58[119]) uParam1->f_11[1]=1;
break;
}
break;
case 1:
if(iParam2==1) num=joaat("buffalo2");
elseif(iParam2==2) num=joaat("bagger");
elseif(Global_113648.f_9087.f_99.f_58[118]) num=joaat("bagger");
else num=joaat("buffalo2");
switch (num){
case joaat("bagger"):
*uParam1=num;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=num;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}
return;
}


void func_45(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0x6585{
if(func_42(&Global_77348.f_555[0 /*21*/], iParam0)){
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_50(iParam0);
func_49(uParam1, &Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]);
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 11)){
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
uParam2 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=fParam5;
}else{
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=-1f;
}
Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14]=iParam6 + 1;
func_46(iParam0, true);
}}
return;
}


void func_46(int iParam0, BOOL bParam1) // Position - 0x667E{
if(iParam0==-1) return;
if(bParam1){
if(!func_48(iParam0, 0)){
func_47(iParam0, 1, false);
func_47(iParam0, 2, false);
func_47(iParam0, 3, false);
func_47(iParam0, 4, false);
func_47(iParam0, 0, true);
Global_77348[iParam0]=1;
}}else{
func_47(iParam0, 0, false);
}
return;
}


void func_47(int iParam0, int iParam1, BOOL bParam2) // Position - 0x66DB{
if(iParam0==-1) return;
if(bParam2) MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
else MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);
return;
}
BOOL func_48(int iParam0, int iParam1) // Position - 0x6716{
if(iParam0==-1) return false;
return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_49(var uParam0, var uParam1) // Position - 0x6736{
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
return;
}


void func_50(int iParam0) // Position - 0x6802{
if(iParam0==-1) return;
if(func_42(&Global_77348.f_555[0 /*21*/], iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77348.f_139[iParam0]);
Global_77348.f_139[iParam0]=0;
}
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)) func_46(iParam0, false);
}
return;
}

int func_51(Vehicle veParam0) // Position - 0x6879{
int i;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return 145;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return 145;
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))if(Global_98012[i]==veParam0) return Global_98022[i];
}
return 145;
}
BOOL func_52(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x68DC{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_53(Vehicle veParam0, var uParam1) // Position - 0x6923{
int i;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
func_57(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(veParam0);
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(veParam0);
uParam1->f_69=unk_0xA79BA8CFAAB28820(veParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2)) MISC::SET_BIT(&(uParam1->f_77), 28);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3)) MISC::SET_BIT(&(uParam1->f_77), 29);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0)) MISC::SET_BIT(&(uParam1->f_77), 30);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1)) MISC::SET_BIT(&(uParam1->f_77), 31);
if(uParam1->f_65==-1 && !func_56(uParam1->f_66)) uParam1->f_65=0;
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false)) uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 9);
if(VEHICLE::IS_VEHICLE_STOLEN(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 10);
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 12);
func_55(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
for (i=0;
i <=11;
i=i + 1){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1)) MISC::SET_BIT(&(uParam1->f_77), func_54(i + 1));
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0)) MISC::SET_BIT(&(uParam1->f_77), 11);
else MISC::CLEAR_BIT(&(uParam1->f_77), 11);
if(DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave")) MISC::SET_BIT(&(uParam1->f_77), 27);
else MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}
return;
}

int func_54(int iParam0) // Position - 0x6BCE{
switch (iParam0){
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
case 6:
return 5;
case 7:
return 6;
case 8:
return 7;
case 9:
return 8;
case 10:
return 24;
case 11:
return 25;
case 12:
return 26;
}
return 0;
}

int func_55(var uParam0, var uParam1, var uParam2) // Position - 0x6C7E{
int i;
int modType;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false)) return 0;
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0) return 0;
for (i=0;
i < *uParam1;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21){
uParam1->[i]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType)) uParam1->[i]=1;
}elseif(modType==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0)){
case 255:
uParam1->[i]=1;
break;
case 0:
uParam1->[i]=2;
break;
case 1:
uParam1->[i]=3;
break;
case 2:
uParam1->[i]=4;
break;
case 3:
uParam1->[i]=5;
break;
case 4:
uParam1->[i]=6;
break;
case 5:
uParam1->[i]=7;
break;
case 6:
uParam1->[i]=8;
break;
case 7:
uParam1->[i]=9;
break;
case 8:
uParam1->[i]=10;
break;
case 9:
uParam1->[i]=11;
break;
case 10:
uParam1->[i]=12;
break;
case 11:
uParam1->[i]=13;
break;
case 12:
uParam1->[i]=14;
break;
case 13:
uParam1->[i]=15;
break;
}}else{
uParam1->[i]=0;
}}else{
uParam1->[i]=VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
if(i==23) uParam2->[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
elseif(i==24) uParam2->[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
}}
return 1;
}
BOOL func_56(int iParam0) // Position - 0x6E71{
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return true;
default:
}
return false;
}


void func_57(var uParam0) // Position - 0x6E91{
int i;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
for (i=0;
i < 49;
i=i + 1){
uParam0->f_9[i]=0;
}
for (i=0;
i < 2;
i=i + 1){
uParam0->f_59[i]=0;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
return;
}


void func_58(int iParam0) // Position - 0x6F41{
iParam0 !=24 && iParam0 !=25;
func_50(iParam0);
func_46(iParam0, false);
return;
}

int func_59(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, int iParam7) // Position - 0x6F68{
int plateIndex;
var plateText;
Hash model;
int i;
int j;
BOOL flag;
var plateText2;
int k;
if(func_2(iParam1)){
model.f_11=12;
model.f_31=49;
model.f_81=2;
func_44(iParam1, &model, iParam7);
if(model==0) return 1;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::GET_ENTITY_MODEL(*uParam0) !=model;
return 1;
}
if(iParam1==0 && !Global_113648.f_2365.f_539.f_4316 && Global_113648.f_9087.f_99.f_58[131]) Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==model){
STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*uParam0=VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/], fParam2, fParam5, false, false, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
model.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
for (i=0;
i < 12;
i=i + 1){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, i + 1, !Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[i]);
}
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24) VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
if(func_108(&plateText, &plateIndex)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0) VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6) VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
else VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
func_101(uParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
if(iParam1==2)if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("bodhi2")) func_99(uParam0);
if(bParam6) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
func_98(*uParam0, iParam1);
return 1;
}}elseif(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==model){
STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*uParam0=VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/], fParam2, fParam5, false, false, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
model.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
for (j=0;
j < 12;
j=j + 1){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, j + 1, !Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[j]);
}
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24) VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
if(func_108(&plateText, &plateIndex)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0) VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6) VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
else VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
func_101(uParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
if(iParam1==2)if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("bodhi2")) func_99(uParam0);
if(bParam6) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
func_98(*uParam0, iParam1);
return 1;
}}else{
STREAMING::REQUEST_MODEL(model);
if(STREAMING::HAS_MODEL_LOADED(model)){
flag=true;
*uParam0=VEHICLE::CREATE_VEHICLE(model, fParam2, fParam5, true, true, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
TEXT_LABEL_ASSIGN_STRING(&plateText2, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0), 16);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
model.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*uParam0, model.f_5, model.f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, model.f_7, model.f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
for (k=0;
k < 12;
k=k + 1){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, k + 1, !model.f_11[k]);
}
if(model.f_24) VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, model.f_24);
if(func_108(&plateText, &plateIndex)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(model.f_27));
if(model.f_26 >=0 && model.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, model.f_26);
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, model.f_84, model.f_85, model.f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, model.f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, model.f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, model.f_93, model.f_94, model.f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(model.f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(model.f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(model.f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(model.f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && model.f_89 >=0) VEHICLE::SET_VEHICLE_LIVERY(*uParam0, model.f_89);
if(model.f_90 > -1)if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))if(model.f_90==6) VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, model.f_90);
else VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, model.f_90);
func_101(uParam0, &(model.f_31), &(model.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("bagger") && !Global_113648.f_9087.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText2);
flag=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("bodhi2")) func_99(uParam0);
}elseif(iParam1==0 && !Global_113648.f_2365.f_539.f_4316 && Global_113648.f_9087.f_99.f_58[131] && ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("tailgater")){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 6, 1, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 14, 7, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 11, 2, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 2, 3, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 7, 5, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 0, 0, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 3, 3, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 1, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 4, 3, false);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 12, 2, false);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, 22, true);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, 2);
VEHICLE::SET_VEHICLE_MOD(*uParam0, 23, 11, false);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, 2);
Global_113648.f_2365.f_539.f_4316=1;
func_60(iParam1, uParam0, 0, true);
}
if(bParam6) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
if(flag) func_98(*uParam0, iParam1);
return 1;
}}}
return 0;
}


void func_60(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x7D88{
var unk;
Entity trailer;
int convertibleRoofState;
int num;
int paintType;
var unk2;
var pearlescentColor;
if(func_2(iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false)){
if(iParam2 > Global_113648.f_2365.f_539.f_2407) return;
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_10(*uParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*uParam1) !=0) VEHICLE::SET_VEHICLE_MOD_KIT(*uParam1, 0);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*uParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam1, &trailer)) Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(trailer);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*uParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*uParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 2);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 3);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 4);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 5);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 6);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 7);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 8);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 9);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 10);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 11);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam1, false)){
convertibleRoofState=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*uParam1);
if(convertibleRoofState==0 || convertibleRoofState==5) Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
else Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}else{
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam1), 16);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam1);
VEHICLE::GET_VEHICLE_COLOURS(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*uParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*uParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*uParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=unk_0xA79BA8CFAAB28820(*uParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 2)) MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
else MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 3)) MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
else MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 0)) MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
else MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 1)) MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
else MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
Global_113648.f_2365.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*uParam1) >=0 && func_64(*uParam1, false, &unk)){
func_55(uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113648.f_20120[iParam0 /*43*/].f_40=1;
Global_113648.f_20120[iParam0 /*43*/]=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113648.f_20120[iParam0 /*43*/].f_3=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113648.f_20120[iParam0 /*43*/].f_4=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113648.f_20120[iParam0 /*43*/].f_5=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113648.f_20120[iParam0 /*43*/].f_6=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113648.f_20120[iParam0 /*43*/].f_10=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113648.f_20120[iParam0 /*43*/].f_16=!Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113648.f_20120[iParam0 /*43*/].f_19={
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113648.f_20120[iParam0 /*43*/].f_23=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113648.f_20120[iParam0 /*43*/].f_7=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113648.f_20120[iParam0 /*43*/].f_8=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113648.f_20120[iParam0 /*43*/].f_9=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113648.f_20120[iParam0 /*43*/].f_11=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113648.f_20120[iParam0 /*43*/].f_12=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113648.f_20120[iParam0 /*43*/].f_13=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113648.f_20120[iParam0 /*43*/].f_14=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113648.f_20120[iParam0 /*43*/].f_15=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113648.f_20120[iParam0 /*43*/].f_18=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113648.f_20120[iParam0 /*43*/].f_17=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113648.f_20120[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 11) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 12) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 4) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 23) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 14) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 16) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 15) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*uParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*uParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 0);
Global_113648.f_20120[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 1);
Global_113648.f_20120[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 2);
Global_113648.f_20120[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 3);
Global_113648.f_20120[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*uParam1);
Global_113648.f_20120[iParam0 /*43*/].f_31=func_63(*uParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*uParam1);
VEHICLE::GET_VEHICLE_MOD_COLOR_1(*uParam1, &paintType, &unk2, &pearlescentColor);
if(paintType==0) num=0;
elseif(paintType==1) num=1;
elseif(paintType==3) num=2;
elseif(paintType==4) num=3;
elseif(paintType==5) num=4;
else num=-1;
func_61(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, num, true, &(Global_113648.f_20120[iParam0 /*43*/].f_1));
VEHICLE::GET_VEHICLE_MOD_COLOR_2(*uParam1, &paintType, &unk2);
if(paintType==0) num=0;
elseif(paintType==1) num=1;
elseif(paintType==3) num=2;
elseif(paintType==4) num=3;
elseif(paintType==5) num=4;
else num=-1;
func_61(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, num, false, &(Global_113648.f_20120[iParam0 /*43*/].f_2));
}}}
return;
}

int func_61(int iParam0, int iParam1, int iParam2, BOOL bParam3, var uParam4) // Position - 0x899D{
int i;
int num;
var unk;
int num2;
int num3;
for (i=0;
func_62(i, &unk, &num, &num2, &num3);
i=i + 1){
if(iParam0==num2 && !bParam3 || iParam1==num3 && iParam2==num || iParam2==-1 || iParam2==255){
*uParam4=i;
return 1;
}}
iParam0=-1;
iParam1=-1;
*uParam4=-1;
return 0;
}
BOOL func_62(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0x8A10{
*uParam2=-1;
*uParam3=-1;
*uParam4=-1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BR BLACK_STEEL" /*Brushed Black Steel*/, 16);
*uParam2=3;
*uParam3=118;
*uParam4=3;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
*uParam2=0;
*uParam3=147;
*uParam4=4;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
*uParam2=1;
*uParam3=96;
*uParam4=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
*uParam2=0;
*uParam3=71;
*uParam4=145;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
*uParam2=0;
*uParam3=135;
*uParam4=135;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
*uParam2=0;
*uParam3=29;
*uParam4=28;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
*uParam2=0;
*uParam3=64;
*uParam4=68;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
*uParam2=1;
*uParam3=70;
*uParam4=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
*uParam2=1;
*uParam3=50;
*uParam4=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
*uParam2=2;
*uParam3=55;
*uParam4=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
*uParam2=1;
*uParam3=89;
*uParam4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
*uParam2=1;
*uParam3=38;
*uParam4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
*uParam2=0;
*uParam3=37;
*uParam4=106;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
*uParam2=0;
*uParam3=4;
*uParam4=111;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CHROME" /*Chrome*/, 16);
*uParam2=4;
*uParam3=120;
*uParam4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
*uParam2=1;
*uParam3=111;
*uParam4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
*uParam2=0;
*uParam3=0;
*uParam4=10;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
*uParam2=0;
*uParam3=1;
*uParam4=5;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
*uParam2=0;
*uParam3=11;
*uParam4=2;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
*uParam2=0;
*uParam3=2;
*uParam4=5;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
*uParam2=0;
*uParam3=3;
*uParam4=6;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
*uParam2=0;
*uParam3=5;
*uParam4=111;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
*uParam2=0;
*uParam3=6;
*uParam4=4;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
*uParam2=0;
*uParam3=7;
*uParam4=5;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
*uParam2=0;
*uParam3=8;
*uParam4=5;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
*uParam2=0;
*uParam3=9;
*uParam4=7;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
*uParam2=0;
*uParam3=10;
*uParam4=7;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
*uParam2=0;
*uParam3=27;
*uParam4=36;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
*uParam2=0;
*uParam3=28;
*uParam4=28;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
*uParam2=0;
*uParam3=150;
*uParam4=42;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
*uParam2=0;
*uParam3=30;
*uParam4=36;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
*uParam2=0;
*uParam3=31;
*uParam4=27;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
*uParam2=0;
*uParam3=32;
*uParam4=25;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
*uParam2=0;
*uParam3=33;
*uParam4=47;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
*uParam2=0;
*uParam3=34;
*uParam4=47;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
*uParam2=0;
*uParam3=143;
*uParam4=31;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
*uParam2=0;
*uParam3=35;
*uParam4=25;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
*uParam2=0;
*uParam3=137;
*uParam4=3;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
*uParam2=0;
*uParam3=136;
*uParam4=5;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
*uParam2=0;
*uParam3=36;
*uParam4=26;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
*uParam2=0;
*uParam3=38;
*uParam4=37;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
*uParam2=0;
*uParam3=138;
*uParam4=89;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
*uParam2=0;
*uParam3=90;
*uParam4=102;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
*uParam2=0;
*uParam3=88;
*uParam4=88;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
*uParam2=0;
*uParam3=89;
*uParam4=88;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
*uParam2=0;
*uParam3=91;
*uParam4=91;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
*uParam2=0;
*uParam3=49;
*uParam4=52;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
*uParam2=0;
*uParam3=50;
*uParam4=53;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
*uParam2=0;
*uParam3=51;
*uParam4=66;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
*uParam2=0;
*uParam3=52;
*uParam4=59;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
*uParam2=0;
*uParam3=53;
*uParam4=59;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
*uParam2=0;
*uParam3=54;
*uParam4=60;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
*uParam2=0;
*uParam3=92;
*uParam4=92;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
*uParam2=0;
*uParam3=141;
*uParam4=73;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
*uParam2=0;
*uParam3=61;
*uParam4=63;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
*uParam2=0;
*uParam3=62;
*uParam4=68;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
*uParam2=0;
*uParam3=63;
*uParam4=87;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
*uParam2=0;
*uParam3=65;
*uParam4=87;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
*uParam2=0;
*uParam3=66;
*uParam4=60;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
*uParam2=0;
*uParam3=67;
*uParam4=67;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
*uParam2=0;
*uParam3=68;
*uParam4=68;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
*uParam2=0;
*uParam3=69;
*uParam4=74;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
*uParam2=0;
*uParam3=73;
*uParam4=73;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
*uParam2=0;
*uParam3=70;
*uParam4=70;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
*uParam2=0;
*uParam3=74;
*uParam4=74;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
*uParam2=0;
*uParam3=96;
*uParam4=95;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
*uParam2=0;
*uParam3=101;
*uParam4=95;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
*uParam2=0;
*uParam3=95;
*uParam4=97;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
*uParam2=0;
*uParam3=94;
*uParam4=104;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
*uParam2=0;
*uParam3=97;
*uParam4=98;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
*uParam2=0;
*uParam3=103;
*uParam4=104;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
*uParam2=0;
*uParam3=104;
*uParam4=104;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
*uParam2=0;
*uParam3=98;
*uParam4=95;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
*uParam2=0;
*uParam3=100;
*uParam4=100;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
*uParam2=0;
*uParam3=102;
*uParam4=105;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
*uParam2=0;
*uParam3=99;
*uParam4=106;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
*uParam2=0;
*uParam3=105;
*uParam4=105;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
*uParam2=0;
*uParam3=106;
*uParam4=106;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
*uParam2=0;
*uParam3=72;
*uParam4=64;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
*uParam2=0;
*uParam3=146;
*uParam4=145;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
*uParam2=0;
*uParam3=145;
*uParam4=74;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
*uParam2=0;
*uParam3=107;
*uParam4=107;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
*uParam2=0;
*uParam3=111;
*uParam4=0;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
*uParam2=0;
*uParam3=112;
*uParam4=0;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
*uParam2=1;
*uParam3=0;
*uParam4=0;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
*uParam2=1;
*uParam3=147;
*uParam4=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
*uParam2=1;
*uParam3=1;
*uParam4=0;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
*uParam2=1;
*uParam3=11;
*uParam4=0;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
*uParam2=1;
*uParam3=2;
*uParam4=0;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
*uParam2=1;
*uParam3=3;
*uParam4=2;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
*uParam2=1;
*uParam3=4;
*uParam4=4;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
*uParam2=1;
*uParam3=5;
*uParam4=5;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
*uParam2=1;
*uParam3=6;
*uParam4=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
*uParam2=1;
*uParam3=7;
*uParam4=0;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
*uParam2=1;
*uParam3=8;
*uParam4=0;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
*uParam2=1;
*uParam3=9;
*uParam4=0;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
*uParam2=1;
*uParam3=10;
*uParam4=0;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
*uParam2=1;
*uParam3=27;
*uParam4=0;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
*uParam2=1;
*uParam3=28;
*uParam4=0;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
*uParam2=1;
*uParam3=29;
*uParam4=0;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
*uParam2=1;
*uParam3=150;
*uParam4=0;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
*uParam2=1;
*uParam3=30;
*uParam4=0;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
*uParam2=1;
*uParam3=31;
*uParam4=0;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
*uParam2=1;
*uParam3=32;
*uParam4=0;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
*uParam2=1;
*uParam3=33;
*uParam4=0;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
*uParam2=1;
*uParam3=34;
*uParam4=0;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
*uParam2=1;
*uParam3=143;
*uParam4=0;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
*uParam2=1;
*uParam3=35;
*uParam4=0;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
*uParam2=1;
*uParam3=135;
*uParam4=0;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
*uParam2=1;
*uParam3=137;
*uParam4=0;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
*uParam2=1;
*uParam3=136;
*uParam4=0;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
*uParam2=1;
*uParam3=36;
*uParam4=0;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
*uParam2=1;
*uParam3=138;
*uParam4=0;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
*uParam2=1;
*uParam3=99;
*uParam4=99;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
*uParam2=1;
*uParam3=90;
*uParam4=102;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
*uParam2=1;
*uParam3=88;
*uParam4=0;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
*uParam2=1;
*uParam3=91;
*uParam4=0;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
*uParam2=1;
*uParam3=49;
*uParam4=0;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
*uParam2=1;
*uParam3=51;
*uParam4=0;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
*uParam2=1;
*uParam3=52;
*uParam4=0;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
*uParam2=1;
*uParam3=53;
*uParam4=0;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
*uParam2=1;
*uParam3=54;
*uParam4=0;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
*uParam2=1;
*uParam3=92;
*uParam4=0;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
*uParam2=1;
*uParam3=141;
*uParam4=0;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
*uParam2=1;
*uParam3=61;
*uParam4=0;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
*uParam2=1;
*uParam3=62;
*uParam4=0;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
*uParam2=1;
*uParam3=63;
*uParam4=0;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
*uParam2=1;
*uParam3=64;
*uParam4=0;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
*uParam2=1;
*uParam3=65;
*uParam4=0;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
*uParam2=1;
*uParam3=66;
*uParam4=0;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
*uParam2=1;
*uParam3=67;
*uParam4=0;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
*uParam2=1;
*uParam3=68;
*uParam4=0;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
*uParam2=1;
*uParam3=69;
*uParam4=0;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
*uParam2=1;
*uParam3=73;
*uParam4=0;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
*uParam2=1;
*uParam3=74;
*uParam4=0;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
*uParam2=1;
*uParam3=101;
*uParam4=0;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
*uParam2=1;
*uParam3=95;
*uParam4=0;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
*uParam2=1;
*uParam3=94;
*uParam4=0;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
*uParam2=1;
*uParam3=97;
*uParam4=0;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
*uParam2=1;
*uParam3=103;
*uParam4=0;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
*uParam2=1;
*uParam3=104;
*uParam4=0;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
*uParam2=1;
*uParam3=98;
*uParam4=0;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
*uParam2=1;
*uParam3=100;
*uParam4=0;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
*uParam2=1;
*uParam3=102;
*uParam4=0;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
*uParam2=1;
*uParam3=99;
*uParam4=0;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
*uParam2=1;
*uParam3=105;
*uParam4=0;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
*uParam2=1;
*uParam3=106;
*uParam4=0;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
*uParam2=1;
*uParam3=71;
*uParam4=0;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
*uParam2=1;
*uParam3=72;
*uParam4=0;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
*uParam2=1;
*uParam3=142;
*uParam4=0;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
*uParam2=1;
*uParam3=145;
*uParam4=0;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
*uParam2=1;
*uParam3=107;
*uParam4=0;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
*uParam2=1;
*uParam3=112;
*uParam4=0;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
*uParam2=2;
*uParam3=12;
*uParam4=0;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GREY" /*Gray*/, 16);
*uParam2=2;
*uParam3=13;
*uParam4=0;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_GREY" /*Light Gray*/, 16);
*uParam2=2;
*uParam3=14;
*uParam4=0;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
*uParam2=2;
*uParam3=131;
*uParam4=0;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
*uParam2=2;
*uParam3=83;
*uParam4=0;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
*uParam2=2;
*uParam3=82;
*uParam4=0;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
*uParam2=2;
*uParam3=84;
*uParam4=0;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
*uParam2=2;
*uParam3=149;
*uParam4=0;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(sParam1, "Purple" /*Schafter Purple*/, 16);
*uParam2=2;
*uParam3=148;
*uParam4=0;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
*uParam2=2;
*uParam3=39;
*uParam4=0;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_RED" /*Dark Red*/, 16);
*uParam2=2;
*uParam3=40;
*uParam4=0;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
*uParam2=2;
*uParam3=41;
*uParam4=0;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
*uParam2=2;
*uParam3=42;
*uParam4=0;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GREEN" /*Green*/, 16);
*uParam2=2;
*uParam3=128;
*uParam4=0;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOR" /*Forest Green*/, 16);
*uParam2=2;
*uParam3=151;
*uParam4=0;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOIL" /*Foliage Green*/, 16);
*uParam2=2;
*uParam3=155;
*uParam4=0;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_OD" /*Olive Drab*/, 16);
*uParam2=2;
*uParam3=152;
*uParam4=0;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DIRT" /*Dark Earth*/, 16);
*uParam2=2;
*uParam3=153;
*uParam4=0;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DESERT" /*Desert Tan*/, 16);
*uParam2=2;
*uParam3=154;
*uParam4=0;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_STEEL" /*Brushed Steel*/, 16);
*uParam2=3;
*uParam3=117;
*uParam4=18;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_ALUMINIUM" /*Brushed Aluminum*/, 16);
*uParam2=3;
*uParam3=119;
*uParam4=5;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_P" /*Pure Gold*/, 16);
*uParam2=3;
*uParam3=158;
*uParam4=160;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_S" /*Brushed Gold*/, 16);
*uParam2=3;
*uParam3=159;
*uParam4=160;
break;
}
return *uParam2 !=-1;
}


float func_63(Vehicle veParam0) // Position - 0x9F02{
int num;
int num2;
int num3;
int num4;
int value;
int value2;
float num5;
num=100000;
num2=65000;
num3=50000;
num4=20000;
value=20000;
value2=value;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >=0)if(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0)==3) value2=num;
elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0)==1) value2=num2;
elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0)==2) value2=num3;
elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0)==0)if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0))) value2=num4;
else value2=value;
num5=SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value);
return num5;
}
BOOL func_64(Vehicle veParam0, BOOL bParam1, var uParam2) // Position - 0x9FB2{
Hash entityModel;
BOOL flag;
*uParam2=0;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return false;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
if(!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(veParam0))) return false;
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(!func_96(entityModel, bParam1, uParam2) && !func_95(PLAYER::PLAYER_ID()) && !func_76(veParam0)) return false;
if(func_95(PLAYER::PLAYER_ID()))if(func_74(entityModel)) return true;
else return false;
flag=false;
if(func_73(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(entityModel) || VEHICLE::IS_THIS_MODEL_A_PLANE(entityModel)) flag=true;
if(VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_70(veParam0) && !flag && !(func_69(ENTITY::GET_ENTITY_MODEL(veParam0)) && func_65(PLAYER::PLAYER_ID()))){
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
*uParam2=16;
break;
default:
*uParam2=2;
break;
}
return false;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_25(veParam0) && ENTITY::GET_ENTITY_MODEL(veParam0) !=joaat("sentinel2") && ENTITY::GET_ENTITY_MODEL(veParam0) !=joaat("issi2")){
*uParam2=2;
return false;
}}
return true;
}
BOOL func_65(Player plParam0) // Position - 0xA120{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==11;
return false;
}

int func_66(int iParam0) // Position - 0xA167{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
case 81:
return 5;
case 82:
return 6;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
case 88:
return 8;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
case 101:
return 10;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
case 117:
return 12;
case 122:
return 13;
case 123:
return 14;
case 124:
return 15;
case 125:
return 16;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
case 145:
return 18;
case 146:
return 19;
case 147:
return 20;
case 148:
return 21;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
case 154:
return 23;
case 155:
case 156:
case 157:
case 158:
return 24;
case 159:
return 25;
case 160:
return 26;
case 161:
return 27;
}
return -1;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xA61B{
Player player;
player=player;
if(player !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(bIsPlaying)if(!PLAYER::IS_PLAYER_PLAYING(player)) return false;
if(bUnk)if(player==Global_2672505.f_3) return Global_2672505.f_2;
elseif(Global_2657589[player /*466*/] !=4) return false;
return true;
}}
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0xA67B{
return -1;
}
BOOL func_69(Hash hParam0) // Position - 0xA684{
if(hParam0==joaat("mule4") || hParam0==joaat("pounder2") || hParam0==joaat("speedo4") || hParam0==joaat("terbyte")) return true;
return false;
}
BOOL func_70(Vehicle veParam0) // Position - 0xA6C6{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("halftrack"):
case joaat("phantom3"):
case joaat("hauler2"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("bruiser"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("bruiser2"):
case joaat("bruiser3"):
return true;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_72(PLAYER::PLAYER_ID())) return true;
break;
case joaat("minitank"):
case joaat("burrito2"):
return true;
case -1576586413:
if(func_71(PLAYER::PLAYER_ID())) return true;
break;
case -1627077503:
return true;
}
return false;
}
BOOL func_71(Player plParam0) // Position - 0xA78E{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==26;
return false;
}
BOOL func_72(Player plParam0) // Position - 0xA7D5{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==13;
return false;
}
BOOL func_73(Player plParam0) // Position - 0xA81C{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==7;
return false;
}
BOOL func_74(Hash hParam0) // Position - 0xA862{
if(hParam0==joaat("oppressor2")) return false;
if(!func_75(PLAYER::PLAYER_ID()) && hParam0 !=joaat("thruster") && hParam0 !=joaat("avenger")) return false;
return true;
}
BOOL func_75(Player plParam0) // Position - 0xA8A3{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_307, 2);
return false;
}
BOOL func_76(Vehicle veParam0) // Position - 0xA8C9{
if(func_94(PLAYER::PLAYER_ID()) || func_93(PLAYER::PLAYER_ID()))if(func_77(veParam0)) return true;
return false;
}
BOOL func_77(Vehicle veParam0) // Position - 0xA8F8{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || ENTITY::IS_ENTITY_DEAD(veParam0, false)) return false;
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0))) return false;
if(func_81(veParam0, false)) return true;
if(func_80(PLAYER::PLAYER_ID()) && !func_74(ENTITY::GET_ENTITY_MODEL(veParam0)) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("thruster"))) return false;
if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))if(DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))if(!func_78(veParam0)) return true;
return false;
}
BOOL func_78(Vehicle veParam0) // Position - 0xA9A9{
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_70(veParam0) || func_79(entityModel)) return true;
switch (entityModel){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return true;
}}
return false;
}
BOOL func_79(Hash hParam0) // Position - 0xAA20{
switch (hParam0){
case joaat("mule"):
case joaat("mule2"):
case joaat("mule3"):
case joaat("brickade"):
case joaat("dune"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("boxville4"):
case joaat("boxville5"):
return true;
default:
}
return false;
}
BOOL func_80(Player plParam0) // Position - 0xAA70{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(func_95(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_81(Vehicle veParam0, BOOL bParam1) // Position - 0xAAA9{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_83(ENTITY::GET_ENTITY_MODEL(veParam0), 0))if(Global_2793044.f_304==veParam0) return true;
elseif(func_82(veParam0) !=-1 && !bParam1) return true;
break;
}
return false;
}

int func_82(Vehicle veParam0) // Position - 0xAB04{
int i;
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
for (i=0;
i < 32;
i=i + 1){
if(Global_2672505.f_220[i]==veParam0) return i;
}}
return -1;
}
BOOL func_83(Hash hParam0, int iParam1) // Position - 0xAB3D{
if(iParam1==0)if(func_92(hParam0, 0)) return true;
switch (hParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_91();
case joaat("sabregt"):
if(Global_262145.f_14734) return func_90();
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14735) return func_90();
break;
case joaat("virgo3"):
if(Global_262145.f_14733) return func_90();
break;
case joaat("minivan"):
if(Global_262145.f_14736) return func_90();
break;
case joaat("slamvan"):
if(Global_262145.f_14738) return func_90();
break;
case joaat("sultan"):
case joaat("banshee"):
return func_89();
case joaat("comet2"):
if(Global_262145.f_19141) return func_88();
break;
case joaat("diablous"):
if(Global_262145.f_19143) return func_88();
break;
case joaat("fcr"):
if(Global_262145.f_19147) return func_88();
break;
case joaat("elegy2"):
if(Global_262145.f_19144) return func_88();
break;
case joaat("nero"):
if(Global_262145.f_19151) return func_88();
break;
case joaat("italigtb"):
if(Global_262145.f_19149) return func_88();
break;
case joaat("specter"):
if(Global_262145.f_19154) return func_88();
break;
case joaat("technical"):
if(Global_262145.f_21100) return func_87();
break;
case joaat("insurgent"):
if(Global_262145.f_21101) return func_87();
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_86();
case joaat("glendale"):
if(func_86() || func_85()) return true;
break;
case joaat("impaler"):
return func_86();
case joaat("issi3"):
return func_86();
case joaat("gargoyle"):
return func_86();
case joaat("dominator"):
return func_86();
case joaat("dominator2"):
return func_86();
case joaat("imperator"):
return func_86();
case joaat("imperator2"):
return func_86();
case joaat("imperator3"):
return func_86();
case joaat("deathbike"):
return func_86();
case joaat("deathbike2"):
return func_86();
case joaat("deathbike3"):
return func_86();
case joaat("impaler2"):
case joaat("brutus"):
case joaat("bruiser"):
case joaat("slamvan4"):
case joaat("issi4"):
case joaat("monster3"):
case joaat("scarab"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
return func_86();
case joaat("youga2"):
if(Global_262145.f_29332) return func_85();
break;
case joaat("gauntlet3"):
if(Global_262145.f_29682) return func_85();
break;
case joaat("manana"):
if(Global_262145.f_29331) return func_85();
break;
case joaat("peyote"):
if(Global_262145.f_29681) return func_85();
break;
case joaat("yosemite"):
if(Global_262145.f_29680) return func_85();
break;
}
switch (hParam0){
case joaat("tenf"):
if(*Global_262145.f_33139) return func_84();
break;
case joaat("weevil"):
if(*Global_262145.f_33138) return func_84();
break;
case joaat("brioso2"):
if(*Global_262145.f_33131) return func_84();
break;
case joaat("sentinel3"):
if(*Global_262145.f_33140) return func_84();
break;
}
return false;
}
BOOL func_84() // Position - 0xAFBC{
return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}
BOOL func_85() // Position - 0xAFCD{
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}
BOOL func_86() // Position - 0xAFDE{
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}
BOOL func_87() // Position - 0xAFEF{
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}
BOOL func_88() // Position - 0xB000{
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}
BOOL func_89() // Position - 0xB011{
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}
BOOL func_90() // Position - 0xB022{
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}
BOOL func_91() // Position - 0xB033{
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}
BOOL func_92(Hash hParam0, int iParam1) // Position - 0xB044{
switch (hParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return true;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("sabregt2"):
if(!Global_262145.f_14734) return false;
else return true;
break;
case joaat("tornado5"):
if(!Global_262145.f_14735) return false;
else return true;
break;
case joaat("virgo2"):
if(!Global_262145.f_14733) return false;
else return true;
break;
case joaat("minivan2"):
if(!Global_262145.f_14736) return false;
else return true;
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738) return false;
else return true;
break;
case joaat("faction3"):
if(!Global_262145.f_14737) return false;
else return true;
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return true;
}
return false;
}
BOOL func_93(Player plParam0) // Position - 0xB423{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==5;
return false;
}
BOOL func_94(Player plParam0) // Position - 0xB482{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==8;
return false;
}
BOOL func_95(Player plParam0) // Position - 0xB4E2{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_66(Global_2657589[plParam0 /*466*/].f_321.f_7)==9;
return false;
}
BOOL func_96(Hash hParam0, BOOL bParam1, var uParam2) // Position - 0xB529{
BOOL flag;
if(!bParam1){
if(hParam0==joaat("police") || hParam0==joaat("policeold1") || hParam0==joaat("policeold2") || hParam0==joaat("police2") || hParam0==joaat("police3") || hParam0==joaat("police4") || hParam0==joaat("fbi") || hParam0==joaat("fbi2") || hParam0==joaat("polmav") || hParam0==joaat("policeb") || hParam0==joaat("policet") || hParam0==joaat("riot") || hParam0==joaat("sheriff") || hParam0==joaat("pranger") || hParam0==joaat("sheriff2")){
*uParam2=1;
return false;
}}
if(hParam0==joaat("ambulance") || hParam0==joaat("firetruk") || hParam0==joaat("taxi") || hParam0==joaat("lguard") || hParam0==joaat("ripley") || hParam0==joaat("dilettante2") || hParam0==joaat("airbus") || hParam0==joaat("airtug")){
*uParam2=2;
return false;
}
if(hParam0==joaat("burrito") || hParam0==joaat("rumpo2") || hParam0==joaat("speedo") || hParam0==joaat("speedo2")){
*uParam2=2;
return false;
}
if(hParam0==joaat("scorcher") || hParam0==joaat("bmx") || hParam0==joaat("cruiser") || hParam0==joaat("fixter")){
*uParam2=2;
return false;
}
if(hParam0==joaat("caddy") || hParam0==joaat("forklift") || hParam0==joaat("caddy2") || hParam0==joaat("crusader") || hParam0==joaat("tribike") || hParam0==joaat("tribike2") || hParam0==joaat("tribike3") || hParam0==joaat("tractor") || hParam0==joaat("tractor2") || hParam0==joaat("mower") || hParam0==joaat("tornado4") || hParam0==joaat("docktug") || hParam0==joaat("stretch") || hParam0==joaat("bison2") || hParam0==joaat("bison3") || hParam0==joaat("benson") || hParam0==joaat("pounder") || hParam0==joaat("submersible") || hParam0==joaat("emperor3") || hParam0==joaat("dune2")){
*uParam2=2;
return false;
}
flag=false;
if(func_73(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0)) flag=true;
if(!VEHICLE::IS_THIS_MODEL_A_CAR(hParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) && hParam0 !=joaat("blazer") && hParam0 !=joaat("blazer2") && hParam0 !=joaat("blazer3") && hParam0 !=joaat("blazer4") && hParam0 !=joaat("blazer5") && hParam0 !=joaat("chimera") && hParam0 !=joaat("trailerlarge") && hParam0 !=joaat("trailersmall2") && hParam0 !=joaat("rrocket") && hParam0 !=joaat("stryder") && hParam0 !=joaat("verus") && !flag){
*uParam2=2;
return false;
}
if(hParam0==joaat("monster")){
*uParam2=2;
return false;
}
if(hParam0==joaat("insurgent") || hParam0==joaat("technical") || hParam0==joaat("limo2")){
*uParam2=2;
return false;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_97(hParam0)){
*uParam2=2;
return false;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(hParam0==joaat("insurgent") || hParam0==joaat("insurgent2")) *uParam2=2;
return true;
}
BOOL func_97(Hash hParam0) // Position - 0xB975{
switch (hParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return true;
}
return false;
}


void func_98(Entity eParam0, int iParam1) // Position - 0xB99E{
int i;
for (i=0;
i < 9;
i=i + 1){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98012[i])){
Global_98012[i]=eParam0;
Global_98022[i]=iParam1;
Global_98032[i]=ENTITY::GET_ENTITY_MODEL(eParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_98032[i])) Global_98060[iParam1 /*3*/][0]=-1;
else Global_98060[iParam1 /*3*/][1]=-1;
i=9;
}
i==8;
}
return;
}


void func_99(var uParam0) // Position - 0xBA20{
if(!func_100(*uParam0)) VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113648.f_9087.f_99.f_58[119]);
return;
}
BOOL func_100(Vehicle veParam0) // Position - 0xBA4B{
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 5);
}

int func_101(var uParam0, var uParam1, var uParam2) // Position - 0xBA5A{
int i;
int modType;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false)) return 0;
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0) return 0;
VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
for (i=0;
i < *uParam1;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
}elseif(modType==22){
if(uParam1->[i] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
if(uParam1->[i]==1) VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
else VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) !=uParam1->[i] - 1){
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
if(uParam1->[i] > 0){
if(modType==23){
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
}elseif(modType==24){
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
}elseif(func_106(*uParam0, modType, uParam1->[i] - 1)){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
}}}}
if(func_92(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_104(*uParam0, uParam1->[38] - 1)) VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_104(*uParam0, uParam1->[38] - 1), false);
func_103(uParam0);
if(func_102(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
}
return 1;
}
BOOL func_102(Vehicle veParam0) // Position - 0xBC34{
int i;
int modType;
Hash hashKey;
var unk;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
for (i=0;
i < 49;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21 || modType==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(veParam0, modType) !=-1){
TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
hashKey=MISC::GET_HASH_KEY(&unk);
if(hashKey !=0)if(hashKey==MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey==MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/)) return true;
}}}
return false;
}


void func_103(var uParam0) // Position - 0xBD10{
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0) VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
else VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}
return;
}

int func_104(Vehicle veParam0, int iParam1) // Position - 0xBD67{
int value;
int value2;
float num;
int num2;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("tornado5"):
switch (iParam1){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 4;
}
break;
case joaat("faction3"):
return 3;
}
value=func_105(veParam0, 38) + 1;
value2=func_105(veParam0, 24) + 1;
num=SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
num2=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
if(num2 < 0) num2=0;
if(num2 >=value) num2=value - 1;
return num2;
}
return 0;
}

int func_105(Vehicle veParam0, int iParam1) // Position - 0xBE50{
int i;
if(STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536==iParam1) return Global_152537;
for (i=VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1;
i >=0 && func_106(veParam0, iParam1, i);
i=i - 1){}
return i;
}
BOOL func_106(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xBEB2{
if(!func_107() && PED::APPLY_PED_BLOOD_SPECIFIC(veParam0, iParam1, iParam2)) return true;
return false;
}
BOOL func_107() // Position - 0xBED6{
return false;
}
BOOL func_108(var uParam0, var uParam1) // Position - 0xBEDF{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113648.f_20120.f_261){
*uParam0={
Global_113648.f_20120.f_267 
};
*uParam1=Global_113648.f_20120.f_271;
return true;
}
return false;
}
BOOL func_109(int iParam0, int iParam1) // Position - 0xBF20{
if(func_2(iParam0)) return STREAMING::HAS_MODEL_LOADED(func_43(iParam0, iParam1));
else iParam0 !=145;
return false;
}

int func_110(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xBF4B{
int i;
int j;
int k;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
Hash entityModel;
var unk;
var unk18;
var unk28;
var unk45;
var unk59;
if(PED::IS_PED_INJURED(pedParam0) || iParam2==-99) return 0;
Global_78339=Global_78339 + 1;
num3=-99;
num4=-99;
num5=-99;
num6=-99;
num7=-99;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
if(iParam5==0){
Global_78341[1 /*14*/]={
func_163(entityModel, iParam1, iParam2, -1) 
};
if(!func_162(iParam3)){
Global_78339=Global_78339 - 1;
return 0;
}
func_154(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(entityModel==joaat("Player_One")){
num3=func_152(pedParam0, 8);
if(num3 !=9) num3=-99;
}
num4=func_152(pedParam0, 9);
if(entityModel==joaat("Player_Zero")){
if(num4 >=9 && num4 <=14){
}else{
num4=-99;
}}elseif(entityModel==joaat("Player_One")){
if(num4 >=5 && num4 <=10){
}else{
num4=-99;
}}elseif(entityModel==joaat("Player_Two")){
if(num4 >=9 && num4 <=14 || num4 >=15 && num4 <=16){
}else{
num4=-99;
}}
num5=func_151(pedParam0, PV_COMP_BERD);
if(!func_150(entityModel, 14, num5, -1)) num5=-99;
num6=func_151(pedParam0, PV_COMP_HEAD);
if(!func_149(entityModel, 14, num6, -1) && !func_148(entityModel, 14, num6, -1)) num6=-99;
if(entityModel==joaat("Player_One")) num7=func_151(pedParam0, PV_COMP_HAIR);
}
PED::CLEAR_ALL_PED_PROPS(pedParam0, 1);
unk=15;
if(iParam5==1) unk={
Global_78384 
};
else unk={
func_144(entityModel, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99){
Global_78341[1 /*14*/]={
func_163(entityModel, i, unk[i], -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
if(i==13){
unk18=9;
if(iParam5==1) unk18={
Global_78401 
};
else unk18={
func_141(entityModel, unk[i]) 
};
for (j=0;
j <=8;
j=j + 1){
Global_78341[1 /*14*/]={
func_163(entityModel, 14, unk18[j], -1) 
};
func_131(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_154(14);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_123(pedParam0, entityModel, 14, unk18[j], k, 0);
if(num !=-99) func_110(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
}}elseif(i !=14 && i !=12){
if(entityModel==joaat("Player_One") && i==2 && unk[i]==20) func_122(entityModel, 2, 20, &num2);
if(iParam4==-1) PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_121(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_121(i)));
else PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_121(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
func_154(i);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_123(pedParam0, entityModel, i, unk[i], k, 0);
if(num !=-99) func_110(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}}}elseif(i !=12 && i !=14){
Global_78341[1 /*14*/]={
func_163(entityModel, i, func_120(pedParam0, i, PV_COMP_INVALID), -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
if(i==2){
if(entityModel==joaat("Player_One"))if(func_119(pedParam0, entityModel, &num2, 1)) func_110(pedParam0, 2, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}else{
unk28={
func_144(entityModel, 0) 
};
func_110(pedParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}
if(iParam7==1){
unk45={
func_163(entityModel, 8, num3, -1) 
};
if(num3 !=-99)if(func_117(entityModel, iParam2, 8, num3, &unk, &unk45)) func_110(pedParam0, 8, num3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_163(entityModel, 9, num4, -1) 
};
if(num4 !=-99)if(func_117(entityModel, iParam2, 9, num4, &unk, &unk45)) func_110(pedParam0, 9, num4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_163(entityModel, 14, num5, -1) 
};
if(num5 !=-99)if(func_117(entityModel, iParam2, 14, num5, &unk, &unk45)) func_110(pedParam0, 14, num5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_163(entityModel, 14, num6, -1) 
};
if(num6 !=-99)if(func_117(entityModel, iParam2, 14, num6, &unk, &unk45)) func_110(pedParam0, 14, num6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_163(entityModel, 14, num7, -1) 
};
if(num7 !=-99)if(func_117(entityModel, iParam2, 14, num7, &unk, &unk45)) func_110(pedParam0, 14, num7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}elseif(iParam1==13){
unk59={
func_141(entityModel, iParam2) 
};
for (j=0;
j <=8;
j=j + 1){
Global_78341[1 /*14*/]={
func_163(entityModel, 14, unk59[j], -1) 
};
func_131(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_154(14);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_123(pedParam0, entityModel, 14, unk59[j], k, 0);
if(num !=-99) func_110(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==14){
func_131(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_154(iParam1);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_123(pedParam0, entityModel, iParam1, iParam2, k, 0);
if(num !=-99) func_110(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}else{
if(iParam4==-1) PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_121(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_121(iParam1)));
else PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_121(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_123(pedParam0, entityModel, iParam1, iParam2, k, 0);
if(num !=-99) func_110(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iParam6==0) func_114(entityModel, iParam1, iParam2);
}
if(Global_78339==1){
if(func_119(pedParam0, entityModel, &num2, 0)) func_110(pedParam0, 2, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
if(func_111(pedParam0, entityModel, &num2)) func_110(pedParam0, 1, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78339=Global_78339 - 1;
return 1;
}
BOOL func_111(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xC75E{
int num;
num=func_113(hParam1);
if(Global_113648.f_2365.f_539[num /*65*/].f_63 !=-99){
if(!func_112(pedParam0, Global_113648.f_2365.f_539[num /*65*/].f_64, Global_113648.f_2365.f_539[num /*65*/].f_63)){
*uParam2=Global_113648.f_2365.f_539[num /*65*/].f_62;
Global_113648.f_2365.f_539[num /*65*/].f_63=-99;
Global_113648.f_2365.f_539[num /*65*/].f_64=1;
return true;
}}
return false;
}
BOOL func_112(Ped pedParam0, int iParam1, int iParam2) // Position - 0xC7EA{
Hash entityModel;
int num;
int i;
ePedComponentType j;
int k;
var unk;
var unk18;
int l;
var unk28;
if(PED::IS_PED_INJURED(pedParam0)) return false;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
Global_78341[1 /*14*/]={
func_163(entityModel, iParam1, iParam2, -1) 
};
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(iParam1==12){
unk={
func_144(entityModel, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99 && i !=12 && i !=14){
if(!func_112(pedParam0, i, unk[i])){
if(i==13){
unk18={
func_141(entityModel, unk[i]) 
};
for (j=0;
j <=8;
j=j + 1){
if(!func_112(pedParam0, 14, unk18[j])){
for (k=0;
k <=19;
k=k + 1){
Global_78341[2 /*14*/]={
func_163(entityModel, 14, k, -1) 
};
if(Global_78341[2 /*14*/].f_12==j)if(func_112(pedParam0, 14, k))if(!func_117(entityModel, iParam2, 14, k, &unk, &Global_78341[2 /*14*/])) return false;
}}
}}else{
num=func_152(pedParam0, i);
Global_78341[2 /*14*/]={
func_163(entityModel, i, num, -1) 
};
if(!func_117(entityModel, iParam2, i, num, &unk, &Global_78341[2 /*14*/])) return false;
}}}}
return true;
}elseif(iParam1==13){
unk28={
func_141(entityModel, iParam2) 
};
for (l=0;
l <=8;
l=l + 1){
if(!func_112(pedParam0, 14, unk28[l])) return false;
}
return true;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1) return true;
}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_121(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_121(iParam1))){
return true;
}
return false;
}

int func_113(Hash hParam0) // Position - 0xCA43{
switch (hParam0){
case joaat("Player_Zero"):
return 0;
case joaat("Player_One"):
return 1;
case joaat("Player_Two"):
return 2;
default:
break;
}
return 145;
}


void func_114(Hash hParam0, int iParam1, int iParam2) // Position - 0xCA7E{
int num;
int num2;
if(hParam0==joaat("Player_Zero")) num=5;
elseif(hParam0==joaat("Player_One")) num=2;
elseif(hParam0==joaat("Player_Two")) num=4;
if(func_116(hParam0, 12, num)){
if(func_115(hParam0, iParam1, iParam2)){
num2=func_113(hParam0);
if(iParam1==3) Global_113648.f_2365.f_539.f_196[num2]=iParam2;
elseif(iParam1==4) Global_113648.f_2365.f_539.f_200[num2]=iParam2;
}}
return;
}
BOOL func_115(Hash hParam0, int iParam1, int iParam2) // Position - 0xCB08{
if(hParam0==joaat("Player_Zero"))if(iParam1==4)if(iParam2 >=47 && iParam2 <=54) return true;
elseif(iParam1==3)if(iParam2 >=77 && iParam2 <=84) return true;
elseif(hParam0==joaat("Player_One"))if(iParam1==4)if(iParam2 >=14 && iParam2 <=21) return true;
elseif(iParam1==3)if(iParam2 >=41 && iParam2 <=56) return true;
elseif(hParam0==joaat("Player_Two"))if(iParam1==4)if(iParam2 >=18 && iParam2 <=29) return true;
elseif(iParam1==3)if(iParam2 >=54 && iParam2 <=69) return true;
return false;
}
BOOL func_116(Hash hParam0, int iParam1, int iParam2) // Position - 0xCBE6{
Global_78341[1 /*14*/]={
func_163(hParam0, iParam1, iParam2, -1) 
};
return IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}
BOOL func_117(Hash hParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0xCC0E{
var unk;
int i;
if(uParam4->[iParam2]==iParam3) return true;
if(uParam4->[iParam2]==-99 && iParam2 !=14 && iParam2 !=13) return true;
if(iParam2==13 || iParam2==14 && uParam4->[13]==31)if(iParam3==0 || iParam3==1 || iParam3==2 || iParam3==3 || iParam3==4 || iParam3==5 || iParam3==6 || iParam3==7 || iParam3==8) return true;
if(iParam3==-99 || iParam5->f_1==-1) return true;
if(iParam2==14){
unk={
func_141(hParam0, uParam4->[13]) 
};
for (i=0;
i <=8;
i=i + 1){
if(unk[i]==iParam3) return true;
}}
if(func_118(hParam0, iParam2, iParam3)) return true;
if(hParam0==joaat("Player_Zero")){
if(func_150(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==18 || iParam1==50) return false;
return true;
}elseif(func_149(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
if(iParam2==8)if(uParam4->[8] !=0) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_148(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
return true;
}}elseif(hParam0==joaat("Player_One")){
if(func_150(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==5 || iParam1==7) return false;
return true;
}elseif(func_149(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==5 || iParam1==7 || iParam1==8 || iParam1==21)if(iParam2==8)if(iParam3==9)if(iParam1==8 || iParam1==21) return true;
else return false;
else return false;
if(iParam2==8){
if(uParam4->[8] !=26) return false;
}elseif(iParam2==9){
if(uParam4->[9] !=0) return false;
if(iParam1==43 || iParam1==44 || iParam1==45 || iParam1==46)if(iParam3 >=5 && iParam3 <=10) return false;
}elseif(iParam2==14){
if(iParam1==43 || iParam1==44 || iParam1==45 || iParam1==46)if(iParam3 >=26 && iParam3 <=39) return false;
}
return true;
}elseif(func_148(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==3 || iParam1==5 || iParam1==7 || iParam1==8 || iParam1==21) return false;
return true;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174) return true;
}}elseif(hParam0==joaat("Player_Two")){
if(iParam1==2)if(iParam2==14 && iParam3==0) return true;
if(func_150(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==6 || iParam1==8 || iParam1==45 || iParam1==12) return false;
return true;
}elseif(func_149(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==45 || iParam1==12) return false;
if(iParam2==8)if(uParam4->[8] !=15) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_148(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==12) return false;
return true;
}}
return false;
}
BOOL func_118(Hash hParam0, int iParam1, int iParam2) // Position - 0xD212{
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 8:
if(iParam2==15) return true;
break;
case 9:
if(iParam2==6) return true;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10) return true;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 8:
if(iParam2==4) return true;
break;
}
break;
}
return false;
}
BOOL func_119(Ped pedParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xD2AB{
int num;
num=func_113(hParam1);
if(num >=3 || num < 0) return false;
if(Global_113648.f_2365.f_539[num /*65*/].f_60 !=-99){
if(!func_112(pedParam0, Global_113648.f_2365.f_539[num /*65*/].f_61, Global_113648.f_2365.f_539[num /*65*/].f_60) || iParam3==1){
*uParam2=Global_113648.f_2365.f_539[num /*65*/].f_59;
Global_113648.f_2365.f_539[num /*65*/].f_60=-99;
Global_113648.f_2365.f_539[num /*65*/].f_61=2;
return true;
}}
return false;
}

int func_120(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xD356{
int i;
int j;
if(!PED::IS_PED_INJURED(pedParam0)){
if(iParam1==12){
for (i=0;
i <=53;
i=i + 1){
if(func_112(pedParam0, iParam1, i)) return i;
}}elseif(iParam1==13){
for (j=0;
j <=19;
j=j + 1){
if(func_112(pedParam0, iParam1, j)) return j;
}
return 31;
}elseif(iParam1==14){
if(epctParam2==PV_COMP_INVALID){
}else{
return func_151(pedParam0, epctParam2);
}}else{
return func_152(pedParam0, iParam1);
}}
return -99;
}
ePedComponentType func_121(int iParam0) // Position - 0xD3F7{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}

int func_122(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0xD4A7{
int num;
*uParam3=-99;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 8:
if(iParam2==7 || iParam2==23) *uParam3=1;
break;
case 9:
if(iParam2==8 || iParam2 >=9 && iParam2 <=14) *uParam3=1;
break;
case 10:
if(iParam2 >=44 && iParam2 <=47) *uParam3=1;
break;
case 14:
if(iParam2 >=31 && iParam2 <=32 || iParam2 >=33 && iParam2 <=34 || iParam2 >=35 && iParam2 <=36 || iParam2==37 || iParam2 >=40 && iParam2 <=41 || iParam2==46) *uParam3=1;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 2:
if(iParam2==20) *uParam3=20;
break;
case 8:
if(iParam2==4) *uParam3=19;
break;
case 9:
if(iParam2 >=5 && iParam2 <=10) *uParam3=19;
break;
case 10:
if(iParam2 >=47 && iParam2 <=50) *uParam3=19;
break;
case 14:
if(iParam2 >=26 && iParam2 <=27 || iParam2 >=28 && iParam2 <=29 || iParam2 >=30 && iParam2 <=31 || iParam2==32 || iParam2 >=35 && iParam2 <=36) *uParam3=19;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 8:
if(iParam2==7) *uParam3=2;
break;
case 9:
if(iParam2 >=9 && iParam2 <=14 || iParam2 >=15 && iParam2 <=16) *uParam3=2;
break;
case 10:
if(iParam2 >=29 && iParam2 <=32) *uParam3=2;
break;
case 14:
if(iParam2 >=47 && iParam2 <=48 || iParam2 >=49 && iParam2 <=50 || iParam2 >=51 && iParam2 <=52 || iParam2==53 || iParam2 >=56 && iParam2 <=57 || iParam2==62) *uParam3=2;
break;
}
break;
}
if(*uParam3 !=-99){
num=func_113(hParam0);
Global_113648.f_2365.f_539[num /*65*/].f_60=iParam2;
Global_113648.f_2365.f_539[num /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_123(Ped pedParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xD7AE{
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
num=-99;
if(iParam4==0){
switch (iParam2){
case 2:
num2=func_152(pedParam0, 1);
num=func_130(hParam1, iParam3, num2);
break;
case 1:
num3=func_152(pedParam0, 2);
num=func_130(hParam1, num3, iParam3);
break;
}}elseif(iParam4==2){
func_122(hParam1, iParam2, iParam3, &num);
}elseif(iParam4==1){
func_129(hParam1, iParam2, iParam3, &num);
}elseif(iParam4==6){
if(iParam2==4) func_128(hParam1, iParam3, &num);
}else{
switch (hParam1){
case joaat("Player_Zero"):
switch (iParam4){
case 3:
switch (iParam2){
case 10:
switch (iParam3){
case 36:
num=17;
break;
case 37:
num=17;
break;
case 38:
num=18;
break;
case 39:
num=18;
break;
case 40:
num=19;
break;
case 41:
num=19;
break;
case 42:
num=20;
break;
case 43:
num=20;
break;
}
break;
case 11:
if(iParam3 >=2 && iParam3 <=7)if(!func_127(pedParam0, 3, 44, 59)) num=44;
elseif(iParam3 >=8 && iParam3 <=17 || iParam3 >=18 && iParam3 <=27 || iParam3 >=28 && iParam3 <=43)if(!func_127(pedParam0, 3, 135, 150)) num=func_126(hParam1, 3, 135, 150);
break;
}
break;
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 63:
num=4;
break;
case 61:
num=3;
break;
case 16:
num=1;
break;
case 114:
num=15;
break;
case 115:
num=17;
break;
case 116:
num=16;
break;
case 117:
num=18;
break;
case 118:
num=20;
break;
case 119:
num=19;
break;
case 125:
num=21;
break;
case 120:
num=22;
break;
case 124:
num=23;
break;
case 126:
num=24;
break;
case 121:
num=25;
break;
case 127:
num=26;
break;
case 128:
num=27;
break;
case 85:
num=6;
break;
case 77:
num=7;
break;
case 78:
num=8;
break;
case 79:
num=9;
break;
case 80:
num=10;
break;
case 81:
num=11;
break;
case 82:
num=12;
break;
case 83:
num=13;
break;
case 84:
num=14;
break;
case 21:
num=31;
break;
case 22:
num=30;
break;
case 23:
num=29;
break;
case 24:
num=28;
break;
case 25:
num=33;
break;
case 26:
num=35;
break;
case 27:
num=34;
break;
case 28:
num=32;
break;
default:
if(iParam3 >=17 && iParam3 <=20){
}
else{
num=0;
}
break;
}
break;
case 11:
if(iParam3 !=0) num=0;
break;
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=44 && iParam3 <=59 || iParam3 >=135 && iParam3 <=150){
}else{
num=0;
}
}
elseif(iParam2==10){
if(iParam3 >=36 && iParam3 <=43) num=0;
}
break;
}
break;
case joaat("Player_One"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 17:
num=2;
break;
case 90:
num=1;
break;
case 268:
num=3;
break;
case 269:
num=5;
break;
case 270:
num=4;
break;
case 271:
num=6;
break;
case 272:
num=8;
break;
case 273:
num=7;
break;
case 279:
num=9;
break;
case 274:
num=10;
break;
case 278:
num=11;
break;
case 280:
num=12;
break;
case 275:
num=13;
break;
case 281:
num=14;
break;
case 282:
num=15;
break;
case 107:
num=16;
break;
case 108:
num=17;
break;
case 109:
num=18;
break;
case 110:
num=19;
break;
case 111:
num=20;
break;
case 112:
num=21;
break;
case 113:
num=22;
break;
case 114:
num=23;
break;
case 115:
num=24;
break;
case 116:
num=25;
break;
case 117:
num=52;
break;
case 118:
num=27;
break;
case 119:
num=28;
break;
case 120:
num=29;
break;
case 121:
num=30;
break;
case 122:
num=31;
break;
case 296:
num=32;
break;
case 297:
num=33;
break;
case 298:
num=34;
break;
case 299:
num=35;
break;
case 300:
num=36;
break;
case 301:
num=37;
break;
case 302:
num=38;
break;
case 309:
num=39;
break;
case 310:
num=40;
break;
case 311:
num=41;
break;
case 312:
num=42;
break;
case 313:
num=43;
break;
case 314:
num=44;
break;
case 315:
num=45;
break;
case 316:
num=46;
break;
case 317:
num=51;
break;
default:
num=0;
break;
}
break;
case 11:
if(iParam3 !=0) num=0;
break;
}
break;
case 3:
switch (iParam2){
case 11:
if(iParam3 >=47 && iParam3 <=62)if(!func_127(pedParam0, 3, 209, 222)) num=func_126(hParam1, 3, 209, 222);
elseif(iParam3 >=1 && iParam3 <=4 || iParam3 >=5 && iParam3 <=8)if(!func_127(pedParam0, 3, 243, 258))if(iParam3==1 || iParam3==5) num=func_126(hParam1, 3, 243, 246);
elseif(iParam3==2 || iParam3==6) num=func_126(hParam1, 3, 247, 250);
elseif(iParam3==3 || iParam3==7) num=func_126(hParam1, 3, 251, 254);
elseif(iParam3==4 || iParam3==8) num=func_126(hParam1, 3, 255, 258);
elseif(iParam3==41 || iParam3==42)if(!func_127(pedParam0, 3, 176, 191) && !func_127(pedParam0, 3, 227, 242)) num=func_126(hParam1, 3, 176, 191);
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
num6=iParam3;
num5=func_152(pedParam0, 3);
}elseif(iParam2==3){
num5=iParam3;
num6=func_152(pedParam0, 11);
num6=func_125(hParam1, num5, num6, 0);
}
num4=func_152(pedParam0, 8);
if(num6 >=5 && num6 <=8 || num6 >=25 && num6 <=40 || num6 >=42 && num6 <=43)if(!func_124(joaat("Player_One"), num4, num6, num5, &num7))if(num7 !=-99) num=num7;
elseif(num4 >=27 && num4 <=42 || num4 >=43 && num4 <=58 || num4 >=59 && num4 <=74) num=26;
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=209 && iParam3 <=222){
}elseif(iParam3 >=176 && iParam3 <=191 || iParam3 >=227 && iParam3 <=242 || iParam3 >=243 && iParam3 <=258){
num8=func_152(pedParam0, 8);
num9=func_152(pedParam0, 11);
if(num8 >=27 && num8 <=42 || num8 >=43 && num8 <=58 || num8 >=59 && num8 <=74) num=func_125(hParam1, iParam3, num9, 0);
else num=func_125(hParam1, iParam3, num9, 1);
}elseif(iParam3 >=41 && iParam3 <=56){
num=45;
}elseif(iParam3 >=223 && iParam3 <=226){
num=44;
}else{
num=0;
}
}
elseif(iParam2==8){
if(iParam3 >=27 && iParam3 <=42 || iParam3 >=43 && iParam3 <=58 || iParam3 >=59 && iParam3 <=74){
num10=func_152(pedParam0, 11);
num=func_125(hParam1, -99, num10, 0);
}
}
break;
}
break;
case joaat("Player_Two"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 50:
num=3;
break;
case 81:
num=5;
break;
case 82:
num=6;
break;
case 83:
num=7;
break;
case 84:
num=10;
break;
case 85:
num=9;
break;
case 86:
num=8;
break;
case 92:
num=22;
break;
case 87:
num=23;
break;
case 91:
num=24;
break;
case 93:
num=25;
break;
case 88:
num=26;
break;
case 94:
num=27;
break;
case 120:
num=11;
break;
case 121:
num=13;
break;
case 122:
num=14;
break;
case 124:
num=12;
break;
case 126:
num=18;
break;
case 128:
num=17;
break;
case 130:
num=19;
break;
case 131:
num=16;
break;
case 134:
num=15;
break;
case 135:
num=20;
break;
default:
num=0;
break;
}
break;
}
break;
}
break;
}}
return num;
}
BOOL func_124(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xE361{
int num;
switch (iParam0){
case joaat("Player_Zero"):
break;
case joaat("Player_One"):
*uParam4=0;
if(iParam1 >=27 && iParam1 <=42){
if(iParam2 !=-99){
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
}else{
if(iParam2 >=42 && iParam2 <=43){
if(iParam3 >=176 && iParam3 <=191){
num=iParam1 - 27;
*uParam4=59 + num;
}elseif(iParam3 >=227 && iParam3 <=242){
num=iParam1 - 27;
*uParam4=43 + num;
}
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242 || iParam3 >=176 && iParam3 <=191 || iParam3 >=243 && iParam3 <=258){
}else{
return false;
}}}elseif(iParam1 >=43 && iParam1 <=58){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 43;
*uParam4=27 + num;
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242){
}else{
if(iParam3 >=176 && iParam3 <=191){
if(iParam2 >=42 && iParam2 <=43){
num=iParam1 - 43;
*uParam4=59 + num;
}
}
return false;
}}}elseif(iParam1 >=59 && iParam1 <=74){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 59;
*uParam4=27 + num;
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=176 && iParam3 <=191){
}else{
if(iParam3 >=227 && iParam3 <=242){
if(iParam2 >=42 && iParam2 <=43){
num=iParam1 - 59;
*uParam4=43 + num;
}
}
elseif(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 59;
*uParam4=27 + num;
}
return false;
}}}
break;
case joaat("Player_Two"):
if(iParam1==12)if(iParam3 !=241) return false;
break;
}
return true;
}

int func_125(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE645{
int num;
if(iParam1 >=243 && iParam1 <=246){
if(iParam3==1) return 1;
else return 5;
}elseif(iParam1 >=247 && iParam1 <=250){
if(iParam3==1) return 2;
else return 6;
}elseif(iParam1 >=251 && iParam1 <=254){
if(iParam3==1) return 3;
else return 7;
}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1) return 4;
else return 8;
}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1) return 4;
else return 8;
}elseif(iParam1 >=176 && iParam1 <=191 || iParam1 >=227 && iParam1 <=242){
if(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 9;
iParam2=25 + num;
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
num=iParam2 - 25;
iParam2=9 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1) return 41;
else return 42;
}else{
if(iParam3==1) iParam2=func_126(hParam0, 11, 9, 24);
else iParam2=func_126(hParam0, 11, 25, 40);
if(iParam2==-99)if(iParam3==1) return 41;
else return 42;
else return iParam2;
}}elseif(iParam2 >=1 && iParam2 <=4){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 1;
iParam2=5 + num;
return iParam2;
}}elseif(iParam2 >=5 && iParam2 <=8){
if(iParam3==1){
num=iParam2 - 5;
iParam2=1 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 9;
iParam2=25 + num;
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
num=iParam2 - 25;
iParam2=9 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1) return 41;
else return 42;
}
return -99;
}

int func_126(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE90C{
int i;
int num;
for (i=iParam2;
i <=iParam3 - 1;
i=i + 1){
num=i;
if(func_116(hParam0, iParam1, num)) return num;
}
return -99;
}
BOOL func_127(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE943{
int num;
num=func_152(pedParam0, iParam1);
if(num >=iParam2 && num <=iParam3) return true;
return false;
}
BOOL func_128(Hash hParam0, int iParam1, var uParam2) // Position - 0xE96C{
*uParam2=-99;
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==16 || iParam1==17 || iParam1==21 || iParam1==22 || iParam1==32 || iParam1 >=34 && iParam1 <=39 || iParam1 >=41 && iParam1 <=45 || iParam1==46 || iParam1 >=47 && iParam1 <=54 || iParam1 >=55 && iParam1 <=70 || iParam1 >=72 && iParam1 <=79 || iParam1==80 || iParam1 >=81 && iParam1 <=83 || iParam1 >=84 && iParam1 <=87 || iParam1==88 || iParam1 >=89 && iParam1 <=91 || iParam1==95 || iParam1 >=96 && iParam1 <=111 || iParam1==112){
*uParam2=6;
return true;
}
break;
case joaat("Player_One"):
if(iParam1==12 || iParam1 >=14 && iParam1 <=21 || iParam1==32 || iParam1==52 || iParam1 >=69 && iParam1 <=70 || iParam1==71 || iParam1 >=72 && iParam1 <=77){
*uParam2=17;
return true;
}
break;
case joaat("Player_Two"):
if(iParam1==4 || iParam1==5 || iParam1==6 || iParam1==7 || iParam1==14 || iParam1 >=18 && iParam1 <=29 || iParam1==31 || iParam1==32 || iParam1==33 || iParam1==34 || iParam1 >=35 && iParam1 <=42 || iParam1 >=43 && iParam1 <=53 || iParam1 >=54 && iParam1 <=61 || iParam1 >=71 && iParam1 <=80 || iParam1 >=81 && iParam1 <=90 || iParam1 >=94 && iParam1 <=103){
*uParam2=8;
return true;
}
break;
}
return false;
}

int func_129(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0xEC36{
int num;
*uParam3=-99;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 10:
if(iParam2 >=44 && iParam2 <=47) *uParam3=0;
break;
case 14:
if(iParam2 >=31 && iParam2 <=32 || iParam2 >=33 && iParam2 <=34 || iParam2 >=35 && iParam2 <=36 || iParam2==37 || iParam2 >=38 && iParam2 <=39 || iParam2 >=40 && iParam2 <=41 || iParam2 >=42 && iParam2 <=44) *uParam3=0;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 10:
if(iParam2 >=47 && iParam2 <=50) *uParam3=0;
break;
case 14:
if(iParam2 >=26 && iParam2 <=27 || iParam2 >=28 && iParam2 <=29 || iParam2 >=30 && iParam2 <=31 || iParam2==32 || iParam2 >=35 && iParam2 <=36) *uParam3=0;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 9:
if(iParam2 >=15 && iParam2 <=16) *uParam3=0;
break;
case 10:
if(iParam2 >=29 && iParam2 <=32) *uParam3=0;
break;
case 14:
if(iParam2 >=47 && iParam2 <=48 || iParam2 >=49 && iParam2 <=50 || iParam2 >=51 && iParam2 <=52 || iParam2==53 || iParam2 >=54 && iParam2 <=55 || iParam2 >=56 && iParam2 <=57 || iParam2 >=58 && iParam2 <=60) *uParam3=0;
break;
}
break;
}
if(*uParam3 !=-99){
num=func_113(hParam0);
Global_113648.f_2365.f_539[num /*65*/].f_63=iParam2;
Global_113648.f_2365.f_539[num /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_130(Hash hParam0, int iParam1, int iParam2) // Position - 0xEEC0{
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==1)if(iParam2==0) return 1;
elseif(iParam2==4) return 5;
else return 3;
elseif(iParam2==0) return 0;
elseif(iParam2==4) return 4;
else return 2;
break;
case joaat("Player_One"):
if(iParam1 >=0 && iParam1 <=15)if(iParam2==0) return 0;
else return 3;
elseif(iParam1 >=16 && iParam1 <=17)if(iParam2==0) return 2;
else return 5;
elseif(iParam1==18)if(iParam2==0) return 6;
else return 7;
elseif(iParam1==19)if(iParam2==0) return 1;
else return 4;
elseif(iParam2==0) return 1;
else return 4;
break;
case joaat("Player_Two"):
if(iParam1==2)if(iParam2==0) return 2;
else return 3;
elseif(iParam1==3)if(iParam2==0) return 4;
else return 6;
elseif(iParam1==8) return 5;
elseif(iParam2==0) return 0;
else return 1;
break;
}
return -99;
}


void func_131(Ped pedParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0xF017{
int num;
if(iParam2==-1){
PED::CLEAR_PED_PROP(pedParam0, epctParam1, 1);
if(epctParam1==PV_COMP_HEAD){
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
}}else{
PED::SET_PED_PROP_INDEX(pedParam0, epctParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
if(epctParam1==PV_COMP_HEAD){
num=func_136(pedParam0, iParam2, iParam3, epctParam1);
if(func_132(ENTITY::GET_ENTITY_MODEL(pedParam0), 14, num, FILES::GET_HASH_NAME_FOR_PROP(pedParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, true);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, true);
}else{
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
}}}
return;
}
BOOL func_132(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xF0B1{
switch (hParam0){
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 14:
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 3);
if(iParam2 >=131 && iParam2 <=154 || iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1)) return true;
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 14:
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 4);
if(iParam2 >=131 && iParam2 <=154 || iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1)) return true;
break;
}
break;
}
return false;
}
Hash func_133(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xF17F{
var outProp;
int componentId;
int num;
var outComponent;
int componentId2;
int num2;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - func_135(hParam0);
if(componentId < 0) return -1;
num=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
if(num <=componentId) return -1;
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
return outProp.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
componentId2=iParam1 - func_134(hParam0, func_121(iParam2));
if(componentId2 < 0) return -1;
if(hParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2] && Global_78491.f_13[iParam2] !=0) return Global_78491.f_13[iParam2];
num2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_121(iParam2));
if(num2 <=componentId2) return -1;
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_78491.f_13[iParam2]=outComponent.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=hParam0;
return outComponent.f_1;
}
return -1;
}

int func_134(Hash hParam0, ePedComponentType epctParam1) // Position - 0xF299{
switch (hParam0){
case joaat("Player_Zero"):
switch (epctParam1){
case PV_COMP_HEAD:
return 7;
case PV_COMP_BERD:
return 5;
case PV_COMP_HAIR:
return 6;
case PV_COMP_UPPR:
return 181;
case PV_COMP_LOWR:
return 113;
case PV_COMP_HAND:
return 14;
case PV_COMP_FEET:
return 99;
case PV_COMP_TEEF:
return 1;
case PV_COMP_ACCS:
return 24;
case PV_COMP_TASK:
return 20;
case PV_COMP_DECL:
return 48;
case PV_COMP_JBIB:
return 45;
}
break;
case joaat("Player_One"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 5;
case PV_COMP_HAIR:
return 21;
case PV_COMP_UPPR:
return 318;
case PV_COMP_LOWR:
return 117;
case PV_COMP_HAND:
return 7;
case PV_COMP_FEET:
return 134;
case PV_COMP_TEEF:
return 1;
case PV_COMP_ACCS:
return 77;
case PV_COMP_TASK:
return 12;
case PV_COMP_DECL:
return 53;
case PV_COMP_JBIB:
return 63;
}
break;
case joaat("Player_Two"):
switch (epctParam1){
case PV_COMP_HEAD:
return 7;
case PV_COMP_BERD:
return 6;
case PV_COMP_HAIR:
return 9;
case PV_COMP_UPPR:
return 242;
case PV_COMP_LOWR:
return 104;
case PV_COMP_HAND:
return 7;
case PV_COMP_FEET:
return 84;
case PV_COMP_TEEF:
return 1;
case PV_COMP_ACCS:
return 18;
case PV_COMP_TASK:
return 17;
case PV_COMP_DECL:
return 33;
case PV_COMP_JBIB:
return 1;
}
break;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 0;
case PV_COMP_BERD:
return 26;
case PV_COMP_HAIR:
return 91;
case PV_COMP_UPPR:
return 16;
case PV_COMP_LOWR:
return 256;
case PV_COMP_HAND:
return 9;
case PV_COMP_FEET:
return 256;
case PV_COMP_TEEF:
return 92;
case PV_COMP_ACCS:
return 241;
case PV_COMP_TASK:
return 46;
case PV_COMP_DECL:
return 7;
case PV_COMP_JBIB:
return 237;
}
break;
case joaat("MP_F_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 0;
case PV_COMP_BERD:
return 26;
case PV_COMP_HAIR:
return 92;
case PV_COMP_UPPR:
return 16;
case PV_COMP_LOWR:
return 256;
case PV_COMP_HAND:
return 9;
case PV_COMP_FEET:
return 256;
case PV_COMP_TEEF:
return 55;
case PV_COMP_ACCS:
return 136;
case PV_COMP_TASK:
return 36;
case PV_COMP_DECL:
return 6;
case PV_COMP_JBIB:
return 256;
}
break;
}
return -99;
}

int func_135(Hash hParam0) // Position - 0xF640{
switch (hParam0){
case joaat("Player_Zero"):
return 113;
case joaat("Player_One"):
return 175;
case joaat("Player_Two"):
return 155;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
return 327;
case joaat("MP_F_Freemode_01"):
return 327;
}
return -99;
}

int func_136(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3) // Position - 0xF6A1{
Hash entityModel;
Hash hashNameForProp;
int numberOfPedPropDrawableVariations;
int num;
int i;
int j;
int numberOfPedPropTextureVariations;
if(iParam1==-1) return func_140(epctParam3);
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
hashNameForProp=FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);
if(hashNameForProp !=-1 && hashNameForProp !=0)if(entityModel==joaat("MP_M_Freemode_01")) return func_138(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
elseif(entityModel==joaat("MP_F_Freemode_01")) return func_138(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);
numberOfPedPropDrawableVariations=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);
for (i=0;
i <=numberOfPedPropDrawableVariations - 1;
i=i + 1){
numberOfPedPropTextureVariations=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
if(i !=iParam1){
num=num + numberOfPedPropTextureVariations;
}else{
for (j=0;
j <=numberOfPedPropTextureVariations - 1;
j=j + 1){
if(i==iParam1 && j==iParam2){
num=num + func_137(pedParam0, epctParam3);
return num;
}else{
num=num + 1;
}}}}
return func_140(epctParam3);
}

int func_137(Ped pedParam0, ePedComponentType epctParam1) // Position - 0xF79D{
Hash entityModel;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
switch (entityModel){
case joaat("Player_Zero"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 58;
case PV_COMP_HAIR:
return 112;
}
break;
case joaat("Player_One"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 82;
case PV_COMP_HAIR:
return 158;
}
break;
case joaat("Player_Two"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 88;
case PV_COMP_HAIR:
return 154;
}
break;
case joaat("MP_M_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 155;
case PV_COMP_FEET:
return 319;
}
break;
case joaat("MP_F_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 155;
case PV_COMP_FEET:
return 319;
}
break;
}
return -99;
}

int func_138(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xF8DB{
var unk;
Ped i;
Ped ped;
int shopPedQueryPropIndex;
int shopPedQueryComponentIndex;
if(iParam2==12){
ped=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
for (i=0;
i < ped;
i=i + 1){
PED::APPLY_PED_BLOOD_BY_ZONE(i, &unk);
if(unk.f_1==hParam1) return func_139(hParam0) + i;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
shopPedQueryPropIndex=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
if(shopPedQueryPropIndex !=-1) return func_135(hParam0) + shopPedQueryPropIndex;
}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_121(iParam2));
shopPedQueryComponentIndex=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
if(shopPedQueryComponentIndex !=-1) return func_134(hParam0, func_121(iParam2)) + shopPedQueryComponentIndex;
}
return -99;
}

int func_139(Hash hParam0) // Position - 0xF996{
switch (hParam0){
case joaat("Player_Zero"):
return 53;
case joaat("Player_One"):
return 47;
case joaat("Player_Two"):
return 48;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
return 26;
case joaat("MP_F_Freemode_01"):
return 28;
}
return -99;
}

int func_140(ePedComponentType epctParam0) // Position - 0xF9F5{
switch (epctParam0){
case PV_COMP_HEAD:
return 0;
case PV_COMP_BERD:
return 1;
case PV_COMP_HAIR:
return 2;
case PV_COMP_UPPR:
return 3;
case PV_COMP_LOWR:
return 4;
case PV_COMP_HAND:
return 5;
case PV_COMP_FEET:
return 6;
case PV_COMP_TEEF:
return 7;
case PV_COMP_ACCS:
return 8;
}
return 0;
}


struct<10> func_141(Hash hParam0, int iParam1) // Position - 0xFA7B{
int i;
var unk;
unk=9;
for (i=0;
i <=8;
i=i + 1){
unk[i]=-99;
}
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 31:
func_143(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_143(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_143(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_143(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_143(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_143(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_143(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_143(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_143(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_143(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_143(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_142(&unk, hParam0, iParam1, 10);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 31:
func_143(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_143(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_143(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_143(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_143(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_143(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_143(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_143(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_143(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_143(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_142(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 31:
func_143(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_143(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_143(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_143(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_143(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_143(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_143(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_143(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_143(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_143(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_142(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 31:
func_143(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_143(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_143(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_143(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_143(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_143(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_143(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_143(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_143(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_143(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_143(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_143(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_143(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_143(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_143(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_143(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_143(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_143(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_143(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_143(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_143(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_143(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_143(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_143(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_143(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_143(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_142(&unk, hParam0, iParam1, 25);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 31:
func_143(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_143(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_143(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_143(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_143(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_143(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_143(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_143(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_143(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_143(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_143(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_143(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_143(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_143(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_143(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_143(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_143(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_143(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_143(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_143(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_143(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_143(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_143(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_143(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_143(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_142(&unk, hParam0, iParam1, 25);
break;
}
break;
}
return unk;
}


void func_142(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x103AB{
int num;
Hash itemHash;
Hash outPropVariant;
int i;
if(iParam2 !=0 && iParam2 !=-99){
uParam0->[0]=0;
uParam0->[1]=1;
uParam0->[2]=2;
uParam0->[3]=3;
uParam0->[4]=4;
uParam0->[5]=5;
uParam0->[6]=6;
uParam0->[7]=7;
uParam0->[8]=8;
num=0;
if(hParam1==joaat("Player_Zero")) num=0;
elseif(hParam1==joaat("Player_One")) num=1;
elseif(hParam1==joaat("Player_Two")) num=2;
elseif(hParam1==joaat("MP_M_Freemode_01")) num=3;
elseif(hParam1==joaat("MP_F_Freemode_01")) num=4;
FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_3;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 !=-1)if(outPropVariant !=0 && outPropVariant !=-1 && outPropVariant !=joaat("0")) uParam0->[outPropVariant.f_2]=func_138(hParam1, outPropVariant, 14, num);
elseif(outPropVariant.f_1 !=-1) uParam0->[outPropVariant.f_2]=outPropVariant.f_1;
}}}
return;
}


void func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x104D5{
uParam0->[0]=iParam1;
uParam0->[1]=iParam2;
uParam0->[2]=iParam3;
uParam0->[3]=iParam4;
uParam0->[4]=iParam5;
uParam0->[5]=iParam6;
uParam0->[6]=iParam7;
uParam0->[7]=iParam8;
uParam0->[8]=iParam9;
return;
}
struct<17> func_144(Hash hParam0, int iParam1) // Position - 0x1051D{
int i;
var unk;
unk=15;
for (i=0;
i <=14;
i=i + 1){
unk[i]=-99;
}
unk.f_16=0;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]) func_147(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
else func_147(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_147(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_147(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_147(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_147(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_147(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_147(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_147(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_147(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_147(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_147(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_147(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_147(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_147(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_147(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_147(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_147(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_147(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_147(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_147(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_147(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_147(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_147(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_147(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_147(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_147(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_147(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_147(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_147(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_147(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_147(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_147(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_147(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_147(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_147(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_147(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_147(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_147(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_147(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_147(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_147(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_147(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_147(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_147(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_147(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_147(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_147(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_147(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_147(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_147(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_147(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_147(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_147(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_145(&unk, hParam0, iParam1, 53);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
func_147(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_147(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_147(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_147(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_147(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_147(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_147(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_147(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_147(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_147(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_147(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_147(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_147(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_147(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_147(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_147(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_147(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_147(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_147(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_147(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_147(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_147(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_147(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_147(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_147(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_147(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_147(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_147(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_147(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_147(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_147(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_147(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_147(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_147(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_147(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_147(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_147(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_147(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_147(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_147(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_147(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_147(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_147(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_147(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_147(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_147(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_147(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_145(&unk, hParam0, iParam1, 47);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
func_147(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_147(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_147(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_147(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_147(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_147(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_147(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_147(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_147(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_147(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_147(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_147(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_147(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_147(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_147(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_147(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_147(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_147(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_147(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_147(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_147(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_147(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_147(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_147(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_147(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_147(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_147(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_147(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_147(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_147(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_147(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_147(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_147(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_147(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_147(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_147(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_147(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_147(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_147(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_147(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_147(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_147(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_147(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_147(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_147(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_147(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_147(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_147(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_145(&unk, hParam0, iParam1, 48);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
func_147(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_147(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_147(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_147(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_147(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_147(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_147(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_147(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_147(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_147(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_147(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_147(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_147(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_147(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_147(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_147(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_147(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_147(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_147(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_147(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_147(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_147(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_147(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_147(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_147(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_147(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_145(&unk, hParam0, iParam1, 26);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
func_147(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_147(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_147(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_147(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_147(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_147(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_147(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_147(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_147(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_147(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_147(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_147(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_147(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_147(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_147(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_147(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_147(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_147(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_147(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_147(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_147(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_147(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_147(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_147(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_147(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_147(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_147(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_147(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_145(&unk, hParam0, iParam1, 28);
break;
}
break;
}
return unk;
}


void func_145(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x12365{
int num;
Hash itemHash;
Hash outComponentVariant;
var outComponent;
int i;
uParam0->[0]=0;
uParam0->[2]=-99;
uParam0->[3]=0;
uParam0->[4]=0;
uParam0->[6]=0;
uParam0->[5]=0;
uParam0->[8]=0;
uParam0->[9]=0;
uParam0->[10]=0;
uParam0->[1]=0;
uParam0->[7]=0;
uParam0->[11]=0;
uParam0->[13]=-99;
uParam0->[14]=-99;
uParam0->f_16=0;
num=0;
if(hParam1==joaat("Player_Zero")){
num=0;
uParam0->[13]=10 + (iParam2 - iParam3);
}elseif(hParam1==joaat("Player_One")){
num=1;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(hParam1==joaat("Player_Two")){
num=2;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(hParam1==joaat("MP_M_Freemode_01")){
num=3;
}elseif(hParam1==joaat("MP_F_Freemode_01")){
num=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
PED::APPLY_PED_BLOOD_BY_ZONE(iParam2 - iParam3, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_4;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(itemHash.f_1, i, &outComponentVariant)){
if(outComponentVariant !=0 && outComponentVariant !=-1 && outComponentVariant !=joaat("0")){
if(outComponentVariant.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
if(outComponentVariant !=outComponent.f_1) uParam0->f_16=1;
}
if(outComponentVariant.f_2==10 && uParam0->f_16){
uParam0->[func_146(outComponentVariant.f_2)]=outComponentVariant;
uParam0->f_16=1;
}else{
uParam0->[func_146(outComponentVariant.f_2)]=func_138(hParam1, outComponentVariant, func_146(outComponentVariant.f_2), num);
}}elseif(outComponentVariant.f_1 !=-1){
uParam0->[func_146(outComponentVariant.f_2)]=outComponentVariant.f_1;
}}}
if(itemHash.f_3==0) uParam0->[13]=-99;
else uParam0->[13]=itemHash.f_1;
}
return;
}

int func_146(int iParam0) // Position - 0x1254F{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}


void func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x125FF{
uParam0->[0]=iParam1;
uParam0->[2]=iParam2;
uParam0->[3]=iParam3;
uParam0->[4]=iParam4;
uParam0->[6]=iParam5;
uParam0->[5]=iParam6;
uParam0->[8]=iParam7;
uParam0->[9]=iParam8;
uParam0->[10]=iParam9;
uParam0->[1]=iParam10;
uParam0->[7]=iParam11;
uParam0->[11]=iParam12;
uParam0->[13]=iParam13;
uParam0->[14]=-99;
return;
}
BOOL func_148(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x12670{
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 14:
if(iParam2==16) return true;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 14:
if(iParam2==40 || iParam2 >=41 && iParam2 <=56 || iParam2 >=64 && iParam2 <=79) return true;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 14:
if(iParam2 >=17 && iParam2 <=18 || iParam2 >=71 && iParam2 <=86) return true;
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return true;
}elseif(iParam2 >=10 && iParam2 <=17){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_133(hParam0, iParam2, 14, 3), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 1, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_133(hParam0, iParam2, 1, 3), -1842686353, 0);
}
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return true;
}elseif(iParam2 >=10 && iParam2 <=17){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_133(hParam0, iParam2, 14, 4), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 1, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_133(hParam0, iParam2, 1, 4), -1842686353, 0);
}
break;
}
break;
}
return false;
}
BOOL func_149(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x128ED{
if(hParam0==joaat("Player_Zero")){
if(iParam1==6)if(iParam2==10) return true;
elseif(iParam1==8)if(iParam2==9 || iParam2==7 || iParam2==23) return true;
elseif(iParam1==9)if(iParam2 >=9 && iParam2 <=14) return true;
elseif(iParam1==14)if(iParam2==12 || iParam2==59 || iParam2==60 || iParam2==31 || iParam2==32 || iParam2==33 || iParam2==34 || iParam2==35 || iParam2==36 || iParam2==37 || iParam2==38 || iParam2==39 || iParam2==40 || iParam2==41 || iParam2 >=42 && iParam2 <=44 || iParam2==54 || iParam2==55) return true;
}elseif(hParam0==joaat("Player_One")){
if(iParam1==2)if(iParam2==20) return true;
elseif(iParam1==8)if(iParam2==3 || iParam2==5 || iParam2==9) return true;
elseif(iParam1==9)if(iParam2 >=5 && iParam2 <=10) return true;
elseif(iParam1==14)if(iParam2==82 || iParam2==10 || iParam2==26 || iParam2==27 || iParam2==28 || iParam2==29 || iParam2==30 || iParam2==31 || iParam2==32 || iParam2==33 || iParam2==34 || iParam2==35 || iParam2==36 || iParam2 >=37 && iParam2 <=39) return true;
}elseif(hParam0==joaat("Player_Two")){
if(iParam1==8)if(iParam2==14 || iParam2==7) return true;
elseif(iParam1==9)if(iParam2==8 || iParam2 >=9 && iParam2 <=14 || iParam2==15 || iParam2==16) return true;
elseif(iParam1==14)if(iParam2==88 || iParam2==12 || iParam2==47 || iParam2==48 || iParam2==49 || iParam2==50 || iParam2==51 || iParam2==52 || iParam2==53 || iParam2==54 || iParam2==55 || iParam2==56 || iParam2==57 || iParam2 >=58 && iParam2 <=60) return true;
}elseif(hParam0==joaat("MP_M_Freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 1, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}elseif(hParam0==joaat("MP_F_Freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 1, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}
return false;
}
BOOL func_150(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x12D12{
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==14)if(iParam2==58 || iParam2==61 || iParam2 >=62 && iParam2 <=69 || iParam2 >=70 && iParam2 <=79 || iParam2 >=80 && iParam2 <=89 || iParam2==90 || iParam2 >=91 && iParam2 <=102 || iParam2 >=103 && iParam2 <=110 || iParam2==111) return true;
break;
case joaat("Player_One"):
if(iParam1==14)if(iParam2 >=83 && iParam2 <=92 || iParam2==93 || iParam2==94 || iParam2 >=95 && iParam2 <=101 || iParam2 >=102 && iParam2 <=111 || iParam2 >=112 && iParam2 <=121 || iParam2 >=122 && iParam2 <=131 || iParam2 >=132 && iParam2 <=139 || iParam2 >=140 && iParam2 <=149 || iParam2 >=150 && iParam2 <=156 || iParam2==157) return true;
break;
case joaat("Player_Two"):
if(iParam1==14)if(iParam2==89 || iParam2 >=90 && iParam2 <=99 || iParam2 >=100 && iParam2 <=109 || iParam2==111 || iParam2==112 || iParam2 >=113 && iParam2 <=122 || iParam2 >=123 && iParam2 <=132 || iParam2 >=133 && iParam2 <=142 || iParam2 >=143 && iParam2 <=152 || iParam2==153) return true;
break;
case joaat("MP_M_Freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
case joaat("MP_F_Freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_133(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
}
return false;
}

int func_151(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x13005{
int pedPropIndex;
int pedPropTextureIndex;
if(PED::IS_PED_INJURED(pedParam0)) return -99;
pedPropIndex=PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
if(pedPropIndex==-1) return func_140(epctParam1);
pedPropTextureIndex=PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
return func_136(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

int func_152(Ped pedParam0, int iParam1) // Position - 0x1304C{
ePedComponentType componentId;
int pedDrawableVariation;
int pedTextureVariation;
if(iParam1==12 || iParam1==13 || iParam1==14 || PED::IS_PED_INJURED(pedParam0)) return -99;
componentId=func_121(iParam1);
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
return func_153(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_153(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x130AC{
ePedComponentType componentId;
int numberOfPedDrawableVariations;
int num;
int i;
componentId=func_121(iParam3);
numberOfPedDrawableVariations=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);
for (i=0;
i <=numberOfPedDrawableVariations - 1;
i=i + 1){
if(i !=iParam1){
num=num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
}else{
num=num + iParam2;
return num;
}}
return -99;
}


void func_154(int iParam0) // Position - 0x13103{
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) func_161(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_155(Global_2883588, 2, true, true, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_155(Global_2883588, 2, true, true, -1);
}else{
func_155(Global_2883588, 2, true, true, -1);
}}
return;
}


void func_155(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x131AF{
int num;
int offset;
eMPStat stat;
int address;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_160(hParam0, iParam1, &stat, &offset, bParam2, bParam3)){
address=_MPCHAR_STAT_GET_INT(stat, num, 0);
MISC::SET_BIT(&address, offset);
_MPCHAR_STAT_SET_INT(stat, address, num, true, false);
}
return;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x131F9{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_157(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}

int func_157(int iParam0) // Position - 0x13229{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_158();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_158() // Position - 0x1325D{
return Global_1574918;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x13269{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_157(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_160(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x132A6{
int fmMaleShopPedApparelItemIndex;
*uParam2=14192;
if(bParam4 && Global_4539485 || !bParam4 && bParam5){
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}else{
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}
fmMaleShopPedApparelItemIndex=-1;
if(bParam4)if(Global_4539485) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
elseif(bParam5) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
if(fmMaleShopPedApparelItemIndex==-1) return false;
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=fmMaleShopPedApparelItemIndex % 32;
return *uParam2 !=14192;
}
BOOL func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x15C3D{
if(iParam0==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
}elseif(iParam0==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
}elseif(iParam0==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
}elseif(iParam2==6){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
}elseif(iParam2==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
}elseif(iParam2==8){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
}elseif(iParam2==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
}}elseif(iParam0==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
}}elseif(iParam0==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
}}elseif(iParam0==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
}}elseif(iParam0==13){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
}}
return false;
}
BOOL func_162(int iParam0) // Position - 0x16AE0{
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(iParam0==1){
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)) return false;
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2)) return false;
}
return true;
}
struct<14> func_163(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16B28{
func_227();
if(hParam0==joaat("Player_Zero")) func_209(iParam1, iParam2);
elseif(hParam0==joaat("Player_One")) func_190(iParam1, iParam2);
elseif(hParam0==joaat("Player_Two")) func_164(iParam1, iParam2);
return Global_78341[0 /*14*/];
}


void func_164(int iParam0, int iParam1) // Position - 0x16B7A{
switch (iParam0){
case 0:
func_189(iParam1);
break;
case 2:
func_188(iParam1);
break;
case 3:
func_185(iParam1);
break;
case 4:
func_184(iParam1);
break;
case 6:
func_183(iParam1);
break;
case 5:
func_182(iParam1);
break;
case 8:
func_181(iParam1);
break;
case 9:
func_180(iParam1);
break;
case 10:
func_179(iParam1);
break;
case 1:
func_178(iParam1);
break;
case 7:
func_177(iParam1);
break;
case 11:
func_176(iParam1);
break;
case 12:
func_175(iParam1);
break;
case 13:
func_174(iParam1);
break;
case 14:
func_165(iParam1);
break;
}
return;
}


void func_165(int iParam0) // Position - 0x16C6A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
num2=1;
num3=0;
num=45;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
num2=2;
num3=1;
num=50;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
num2=2;
num3=2;
num=55;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
num2=2;
num3=3;
num=52;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
num2=2;
num3=4;
num=54;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
num2=2;
num3=5;
num=54;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
num2=2;
num3=6;
num=55;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
num2=2;
num3=7;
num=55;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
num2=2;
num3=8;
num=58;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
num2=2;
num3=9;
num=58;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
num2=3;
num3=0;
num=75;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
num2=3;
num3=1;
num=75;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
num2=3;
num3=2;
num=75;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
num2=3;
num3=3;
num=75;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
num2=3;
num3=4;
num=75;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
num2=3;
num3=5;
num=75;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
num2=3;
num3=6;
num=75;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
num2=3;
num3=7;
num=75;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
num2=3;
num3=8;
num=75;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
num2=3;
num3=9;
num=75;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
num2=7;
num3=0;
num=60;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
num2=7;
num3=1;
num=50;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
num2=7;
num3=2;
num=50;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
num2=7;
num3=3;
num=59;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
num2=7;
num3=4;
num=55;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
num2=7;
num3=5;
num=55;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
num2=7;
num3=6;
num=65;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
num2=7;
num3=7;
num=59;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
num2=7;
num3=8;
num=79;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
num2=7;
num3=9;
num=79;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
num2=8;
num3=0;
num=150;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
num2=8;
num3=1;
num=150;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
num2=8;
num3=2;
num=170;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
num2=8;
num3=3;
num=175;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
num2=8;
num3=4;
num=180;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
num2=8;
num3=5;
num=185;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
num2=8;
num3=6;
num=189;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
num2=8;
num3=7;
num=195;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
num2=8;
num3=8;
num=210;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
num2=8;
num3=9;
num=215;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
num2=9;
num3=1;
num=165;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
num2=9;
num3=2;
num=169;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
num2=9;
num3=3;
num=169;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
num2=9;
num3=5;
num=175;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
num2=9;
num3=6;
num=175;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
num2=9;
num3=7;
num=189;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
num2=9;
num3=8;
num=195;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
num2=9;
num3=9;
num=195;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
num2=10;
num3=0;
num=49;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
num2=10;
num3=1;
num=50;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
num2=10;
num3=2;
num=52;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
num2=10;
num3=3;
num=55;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
num2=10;
num3=4;
num=60;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
num2=10;
num3=5;
num=58;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
num2=10;
num3=6;
num=60;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
num2=10;
num3=7;
num=63;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
num2=10;
num3=8;
num=65;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
num2=10;
num3=9;
num=68;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
num2=7;
num3=0;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
num2=7;
num3=1;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=7;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=8;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=9;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=10;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=11;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=12;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=13;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=14;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=15;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
num2=26;
num3=0;
num=20;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
num2=26;
num3=1;
num=25;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
num2=26;
num3=2;
num=25;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
num2=26;
num3=3;
num=22;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
num2=26;
num3=4;
num=20;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
num2=26;
num3=5;
num=25;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
num2=26;
num3=6;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
num2=26;
num3=7;
num=24;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
num2=26;
num3=8;
num=25;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
num2=26;
num3=9;
num=22;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
num2=26;
num3=10;
num=18;
num4=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
num2=26;
num3=11;
num=20;
num4=0;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
num2=26;
num3=12;
num=24;
num4=0;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
num2=26;
num3=13;
num=22;
num4=0;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
num2=26;
num3=14;
num=25;
num4=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
num2=26;
num3=15;
num=25;
num4=0;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
default:
func_173(num6, iParam0, 155, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_166(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x17EE1{
int num;
eMPStat stat;
iParam0->f_6=0;
*iParam0=iParam9;
iParam0->f_1=iParam2 % 32;
iParam0->f_2=iParam2 / 32;
iParam0->f_3=iParam4;
iParam0->f_4=iParam5;
iParam0->f_7=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
iParam0->f_13=iParam8;
iParam0->f_12=func_172(iParam8);
if(iParam0->f_2 >=10 && iParam0->f_5 >=0 && iParam0->f_5 < 3){
!bParam10;
iParam0->f_2=0;
}
MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL");
if(bParam7) MISC::SET_BIT(&(iParam0->f_6), 3);
if(bParam10){
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam0->f_5 >=0 && iParam0->f_5 < 3) MISC::SET_BIT(&(iParam0->f_6), 5);
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
MISC::SET_BIT(&(iParam0->f_6), 6);
if(func_171(14)) return;
if(iParam1==1)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)) MISC::SET_BIT(&(iParam0->f_6), 7);
if(iParam1==12){
if(!func_170(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_170(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_170(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_170(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
if(!func_170(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_170(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(iParam0->f_6), 1);
MISC::CLEAR_BIT(&(iParam0->f_6), 0);
}}elseif(iParam0->f_5 >=0 && iParam0->f_5 < 3){
MISC::SET_BIT(&(iParam0->f_6), 0);
MISC::SET_BIT(&(iParam0->f_6), 5);
if(func_161(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 1);
if(func_161(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(!func_161(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam1==11 || iParam1==4 || iParam1==6 || iParam1==1 || iParam1==14 || iParam1==2 || iParam1==8 || iParam1==9 || iParam1==10 || iParam1==7 || iParam1==12){
if(func_171(14)) return;
num=_MPCHAR_STAT_GET_INT(func_169(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 1);
num=_MPCHAR_STAT_GET_INT(func_168(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(func_167(iParam1, iParam0->f_2, &stat)){
num=_MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
if(!IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
return;
}
BOOL func_167(int iParam0, int iParam1, var uParam2) // Position - 0x18287{
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}
eMPStat func_168(int iParam0, int iParam1) // Position - 0x1868C{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR;
case 3:
return MP_STAT_CLTHS_ACQUIRED_TORSO;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2;
case 10:
return MP_STAT_CLTHS_ACQUIRED_DECL;
case 1:
return MP_STAT_CLTHS_ACQUIRED_BERD;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS;
case 12:
return MP_STAT_CLTHS_ACQUIRED_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_1;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_1;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_1;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_1;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_1;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_2;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_2;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_2;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_2;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_2;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_3;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_3;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_3;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_4;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_4;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_4;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_5;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_5;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_5;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_6;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_6;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_6;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_7;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_7;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_7;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_ACQUIRED_JBIB;
}
eMPStat func_169(int iParam0, int iParam1) // Position - 0x18A87{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR;
case 3:
return MP_STAT_CLTHS_AVAILABLE_TORSO;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2;
case 10:
return MP_STAT_CLTHS_AVAILABLE_DECL;
case 1:
return MP_STAT_CLTHS_AVAILABLE_BERD;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS;
case 12:
return MP_STAT_CLTHS_AVAILABLE_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_1;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_1;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_1;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_1;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_1;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_2;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_2;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_2;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_2;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_2;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_3;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_3;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_3;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_4;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_4;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_4;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_5;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_5;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_5;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_6;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_6;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_6;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_7;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_7;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_7;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_AVAILABLE_JBIB;
}
BOOL func_170(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18E82{
int num;
int num2;
eMPStat stat;
int num3;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_160(hParam0, iParam1, &stat, &num2, bParam2, bParam3)){
num3=_MPCHAR_STAT_GET_INT(stat, num, 0);
return IS_BIT_SET(num3, num2);
}
return false;
}
BOOL func_171(int iParam0) // Position - 0x18EC1{
return Global_43257==iParam0;
}

int func_172(int iParam0) // Position - 0x18ECF{
switch (iParam0){
case -1:
return 0;
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 0;
case 10:
return 1;
case 11:
return 0;
case 12:
return 0;
case 13:
return 0;
}
return 0;
}


void func_173(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x18FA3{
int num;
int num2;
Hash hash;
Ped ped;
Ped ped2;
Hash outProp;
int num3;
int componentId;
int num4;
Hash outComponent;
int componentId2;
int num5;
num=iParam1 - iParam2;
num=num;
if(num < 0) return;
num2=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
ped=iParam1 - iParam2;
if(ped >=0){
ped2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
if(ped2 > ped){
PED::APPLY_PED_BLOOD_BY_ZONE(ped, &hash);
Global_2883588=hash.f_1;
Global_2883589=hash;
func_166(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
return;
}}}elseif(iParam0==13){
func_166(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - iParam2;
if(componentId >=0){
num4=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
if(num4 > componentId){
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
if(outProp.f_6==0) num3=9;
elseif(outProp.f_6==1) num3=10;
elseif(outProp.f_6==2) num3=2;
elseif(outProp.f_6==3) num3=3;
elseif(outProp.f_6==4) num3=4;
elseif(outProp.f_6==5) num3=5;
elseif(outProp.f_6==6) num3=6;
elseif(outProp.f_6==7) num3=7;
elseif(outProp.f_6==8) num3=8;
else num3=-1;
Global_2883588=outProp.f_1;
Global_2883589=outProp;
func_166(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num3, 2, outProp.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
if(hParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_166(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}
componentId2=iParam1 - iParam2;
if(componentId2 >=0){
num5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_121(iParam0));
if(num5 > componentId2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_166(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}}}
return;
}


void func_174(int iParam0) // Position - 0x1922A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 9, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_175(int iParam0) // Position - 0x19381{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=119;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
num2=0;
num3=0;
num=99;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
num2=0;
num3=0;
num=129;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
num2=0;
num3=0;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=120;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=139;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=149;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
num2=0;
num3=0;
num=145;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
num2=0;
num3=0;
num=140;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
num2=0;
num3=0;
num=135;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 48, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_176(int iParam0) // Position - 0x1988F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 1, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_177(int iParam0) // Position - 0x19904{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 1, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_178(int iParam0) // Position - 0x19978{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
num2=5;
num3=0;
break;
default:
func_173(num6, iParam0, 6, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_179(int iParam0) // Position - 0x19A5F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=9;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=6;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
default:
func_173(num6, iParam0, 33, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_180(int iParam0) // Position - 0x19DC2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=6;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=6;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=6;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=6;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=6;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=6;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=7;
num3=0;
num=270;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=7;
num3=1;
num=270;
break;
default:
func_173(num6, iParam0, 17, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_181(int iParam0) // Position - 0x19FD3{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 18, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_182(int iParam0) // Position - 0x1A203{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 7, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_183(int iParam0) // Position - 0x1A313{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
num2=0;
num3=1;
num=22;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
num2=0;
num3=2;
num=45;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
num2=0;
num3=3;
num=65;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
num2=0;
num3=4;
num=58;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
num2=0;
num3=5;
num=72;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
num2=0;
num3=6;
num=68;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
num2=0;
num3=7;
num=60;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
num2=5;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
num2=9;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
num2=9;
num3=1;
num=680;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
num2=9;
num3=2;
num=650;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
num2=9;
num3=3;
num=670;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
num2=9;
num3=4;
num=700;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
num2=9;
num3=5;
num=680;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
num2=9;
num3=6;
num=720;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
num2=9;
num3=7;
num=740;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
num2=9;
num3=8;
num=760;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
num2=9;
num3=9;
num=780;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
num2=9;
num3=10;
num=750;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
num2=9;
num3=11;
num=700;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
default:
func_173(num6, iParam0, 84, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_184(int iParam0) // Position - 0x1ACB2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
num2=0;
num3=1;
num=95;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
num2=0;
num3=2;
num=129;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
num2=0;
num3=3;
num=115;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
num2=11;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
num2=11;
num3=1;
num=750;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
num2=11;
num3=2;
num=650;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
num2=11;
num3=3;
num=850;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
num2=11;
num3=4;
num=850;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
num2=11;
num3=5;
num=750;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
num2=11;
num3=6;
num=690;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
num2=11;
num3=7;
num=820;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
num2=11;
num3=8;
num=650;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
num2=11;
num3=9;
num=690;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
num2=11;
num3=10;
num=690;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
num2=11;
num3=11;
num=820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
num2=14;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
num2=15;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
num2=17;
num3=0;
num=58;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
num2=17;
num3=1;
num=68;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
num2=17;
num3=2;
num=65;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
num2=17;
num3=3;
num=60;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
num2=17;
num3=4;
num=65;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
num2=17;
num3=5;
num=63;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
num2=17;
num3=6;
num=60;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
num2=17;
num3=7;
num=58;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
num2=18;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
num2=18;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
num2=18;
num3=2;
num=99;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
num2=18;
num3=3;
num=105;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
num2=18;
num3=4;
num=110;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
num2=18;
num3=5;
num=110;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
num2=18;
num3=6;
num=99;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
num2=18;
num3=7;
num=110;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
num2=18;
num3=8;
num=110;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
num2=18;
num3=9;
num=105;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
num2=18;
num3=10;
num=105;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
num2=19;
num3=0;
num=15;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
num2=19;
num3=1;
num=15;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
num2=19;
num3=2;
num=15;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
num2=19;
num3=3;
num=15;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
num2=19;
num3=4;
num=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
num2=19;
num3=5;
num=15;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
num2=19;
num3=6;
num=15;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
num2=19;
num3=7;
num=15;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
num2=20;
num3=0;
num=600;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
num2=20;
num3=1;
num=600;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
num2=20;
num3=2;
num=600;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
num2=20;
num3=3;
num=600;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
num2=20;
num3=4;
num=600;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
num2=20;
num3=5;
num=600;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
num2=20;
num3=6;
num=600;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
num2=20;
num3=7;
num=600;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
num2=20;
num3=8;
num=600;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
num2=21;
num3=0;
num=80;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
num2=21;
num3=1;
num=80;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
num2=21;
num3=2;
num=80;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
num2=21;
num3=3;
num=80;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
num2=21;
num3=4;
num=80;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
num2=21;
num3=5;
num=80;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
num2=21;
num3=6;
num=80;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
num2=21;
num3=7;
num=80;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
num2=21;
num3=8;
num=80;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
num2=21;
num3=9;
num=80;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
num2=22;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
num2=22;
num3=1;
num=12;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
num2=22;
num3=2;
num=12;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
num2=22;
num3=3;
num=22;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
num2=22;
num3=4;
num=18;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
num2=22;
num3=5;
num=20;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
num2=22;
num3=6;
num=30;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
num2=22;
num3=7;
num=30;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
num2=22;
num3=8;
num=30;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
num2=22;
num3=9;
num=30;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
num2=23;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
num2=24;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=1;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=2;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=3;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=4;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=5;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=6;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=7;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=8;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=9;
break;
default:
func_173(num6, iParam0, 104, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_185(int iParam0) // Position - 0x1B825{
if(iParam0 < 136) func_187(iParam0);
else func_186(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_173(3, iParam0, 242, -1);
return;
}


void func_186(int iParam0) // Position - 0x1B85A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
num2=21;
num3=0;
num=32;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
num2=21;
num3=1;
num=39;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
num2=21;
num3=2;
num=40;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
num2=21;
num3=3;
num=42;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
num2=21;
num3=4;
num=45;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
num2=21;
num3=5;
num=48;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
num2=21;
num3=6;
num=52;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
num2=21;
num3=7;
num=55;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
num2=22;
num3=0;
num=390;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=390;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=560;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
num2=22;
num3=3;
num=390;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
num2=22;
num3=4;
num=390;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
num2=22;
num3=5;
num=390;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
num2=22;
num3=6;
num=560;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
num2=22;
num3=7;
num=390;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
num2=22;
num3=8;
num=390;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
num2=22;
num3=9;
num=390;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
num2=22;
num3=10;
num=390;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
num2=22;
num3=11;
num=3950;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
num2=23;
num3=0;
num=150;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
num2=23;
num3=1;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
num2=23;
num3=2;
num=150;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
num2=23;
num3=3;
num=150;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
num2=23;
num3=4;
num=160;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
num2=23;
num3=5;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
num2=24;
num3=0;
num=19;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
num2=24;
num3=1;
num=20;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
num2=24;
num3=2;
num=19;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
num2=24;
num3=3;
num=22;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
num2=24;
num3=4;
num=20;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
num2=24;
num3=5;
num=28;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
num2=24;
num3=6;
num=28;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
num2=24;
num3=7;
num=25;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
num2=24;
num3=8;
num=22;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
num2=24;
num3=9;
num=19;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
num2=24;
num3=10;
num=22;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
num2=24;
num3=11;
num=19;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
num2=24;
num3=12;
num=20;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
num2=24;
num3=13;
num=25;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
num2=24;
num3=14;
num=20;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
num2=24;
num3=15;
num=28;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
num2=25;
num3=0;
num=35;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
num2=25;
num3=1;
num=40;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
num2=25;
num3=2;
num=45;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
num2=25;
num3=3;
num=45;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
num2=25;
num3=4;
num=49;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
num2=25;
num3=5;
num=820;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
num2=25;
num3=6;
num=790;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
num2=25;
num3=7;
num=820;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
num2=25;
num3=8;
num=929;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
num2=25;
num3=9;
num=40;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
num2=25;
num3=10;
num=850;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
num2=25;
num3=11;
num=790;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
num2=26;
num3=0;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
num2=26;
num3=1;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
num2=26;
num3=2;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
num2=26;
num3=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
num2=26;
num3=4;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
num2=26;
num3=5;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
num2=26;
num3=6;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
num2=26;
num3=7;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
num2=26;
num3=8;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
num2=26;
num3=9;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
num2=27;
num3=0;
num=2200;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
num2=27;
num3=1;
num=2500;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
num2=27;
num3=2;
num=2500;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
num2=27;
num3=3;
num=2200;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
num2=27;
num3=4;
num=2500;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
num2=27;
num3=5;
num=2500;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
num2=27;
num3=6;
num=2200;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
num2=28;
num3=0;
num=1100;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
num2=28;
num3=1;
num=1200;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
num2=28;
num3=2;
num=1220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
num2=28;
num3=3;
num=1250;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
num2=28;
num3=4;
num=1300;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
num2=28;
num3=5;
num=1360;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
num2=28;
num3=6;
num=35;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
num2=28;
num3=7;
num=38;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
num2=28;
num3=8;
num=40;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
num2=28;
num3=9;
num=42;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
num2=28;
num3=10;
num=50;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
num2=28;
num3=11;
num=45;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
num2=28;
num3=12;
num=45;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
num2=28;
num3=13;
num=44;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
num2=28;
num3=14;
num=46;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
num2=28;
num3=15;
num=52;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
num2=29;
num3=0;
num=3200;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
num2=29;
num3=1;
num=3200;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
num2=29;
num3=2;
num=2550;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
num2=29;
num3=3;
num=2750;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
num2=29;
num3=4;
num=2590;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
num2=29;
num3=5;
num=2750;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
num2=29;
num3=6;
num=2550;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
num2=29;
num3=7;
num=2590;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
num2=29;
num3=8;
num=2720;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
num2=29;
num3=9;
num=2750;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
num2=30;
num3=0;
num=3250;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
num2=30;
num3=1;
num=2950;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
num2=30;
num3=2;
num=3100;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
num2=30;
num3=3;
num=3150;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
num2=30;
num3=4;
num=3240;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
num2=30;
num3=5;
num=3350;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
num2=30;
num3=6;
num=3400;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
num2=30;
num3=7;
num=3280;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
num2=31;
num3=0;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_187(int iParam0) // Position - 0x1C460{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
num2=0;
num3=1;
num=25;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
num2=0;
num3=3;
num=15;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
num2=0;
num3=4;
num=25;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
num2=0;
num3=5;
num=25;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
num2=0;
num3=6;
num=22;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
num2=0;
num3=9;
num=20;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
num2=0;
num3=10;
num=24;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
num2=0;
num3=11;
num=26;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
num2=0;
num3=12;
num=28;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
num2=0;
num3=13;
num=29;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
num2=0;
num3=14;
num=22;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
num2=0;
num3=15;
num=20;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
num2=3;
num3=0;
num=35;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
num2=3;
num3=1;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
num2=3;
num3=2;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
num2=3;
num3=3;
num=38;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
num2=3;
num3=4;
num=40;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
num2=3;
num3=5;
num=40;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
num2=3;
num3=6;
num=40;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
num2=3;
num3=7;
num=40;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
num2=3;
num3=8;
num=40;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
num2=4;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
num2=4;
num3=1;
num=500;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
num2=4;
num3=2;
num=560;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
num2=4;
num3=3;
num=600;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
num2=4;
num3=4;
num=650;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
num2=4;
num3=5;
num=500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
num2=4;
num3=6;
num=560;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
num2=4;
num3=7;
num=500;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
num2=4;
num3=8;
num=650;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
num2=4;
num3=9;
num=540;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
num2=4;
num3=10;
num=690;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
num2=4;
num3=11;
num=560;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
num2=4;
num3=12;
num=590;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
num2=4;
num3=13;
num=690;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
num2=4;
num3=14;
num=540;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
num2=4;
num3=15;
num=500;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
flag=true;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
num2=11;
num3=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
num2=11;
num3=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
num2=11;
num3=2;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
num2=11;
num3=3;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
num2=11;
num3=4;
num=22;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
num2=11;
num3=5;
num=350;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
num2=11;
num3=6;
num=27;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
num2=11;
num3=7;
num=370;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
num2=11;
num3=8;
num=25;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
num2=11;
num3=9;
num=22;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
num2=11;
num3=10;
num=25;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
num2=11;
num3=11;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
num2=11;
num3=12;
num=22;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
num2=11;
num3=13;
num=27;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
num2=11;
num3=14;
num=25;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
num2=11;
num3=15;
num=27;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
num5=1;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
num2=13;
num3=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
num2=13;
num3=1;
num=39;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
num2=13;
num3=2;
num=42;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
num2=13;
num3=3;
num=49;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
num2=13;
num3=4;
num=35;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
num2=13;
num3=5;
num=50;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
num2=13;
num3=6;
num=50;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
num2=13;
num3=7;
num=50;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
num2=14;
num3=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
num2=14;
num3=1;
num=88;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
num2=14;
num3=2;
num=60;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
num2=14;
num3=3;
num=80;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
num2=14;
num3=4;
num=70;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
num2=14;
num3=5;
num=80;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
num2=14;
num3=6;
num=70;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
num2=14;
num3=7;
num=90;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
num2=14;
num3=8;
num=95;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
num2=14;
num3=9;
num=105;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
num2=14;
num3=10;
num=95;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
num2=14;
num3=11;
num=110;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
num2=14;
num3=12;
num=98;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
num2=14;
num3=13;
num=88;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
num2=14;
num3=14;
num=98;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
num2=14;
num3=15;
num=110;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
num2=15;
num3=0;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
num2=16;
num3=0;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
num2=17;
num3=0;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
num2=18;
num3=0;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
num2=18;
num3=1;
num=520;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
num2=18;
num3=2;
num=490;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
num2=18;
num3=3;
num=450;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
num2=18;
num3=4;
num=420;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
num2=18;
num3=5;
num=420;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
num2=19;
num3=0;
num=85;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
num2=19;
num3=1;
num=85;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
num2=19;
num3=2;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
num2=19;
num3=3;
num=68;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
num2=19;
num3=4;
num=68;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
num2=19;
num3=5;
num=78;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
num2=19;
num3=6;
num=85;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
num2=19;
num3=7;
num=68;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
num2=19;
num3=8;
num=75;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
num2=19;
num3=9;
num=75;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
num2=19;
num3=10;
num=78;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
num2=19;
num3=11;
num=75;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
num2=19;
num3=12;
num=75;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
num2=19;
num3=13;
num=75;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
num2=19;
num3=14;
num=78;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
num2=19;
num3=15;
num=78;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
num2=20;
num3=0;
num=40;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
num2=20;
num3=1;
num=32;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
num2=20;
num3=2;
num=32;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
num2=20;
num3=3;
num=32;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
num2=20;
num3=4;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
num2=20;
num3=5;
num=38;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
num2=20;
num3=6;
num=35;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
num2=20;
num3=7;
num=38;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
num2=20;
num3=8;
num=29;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
num2=20;
num3=9;
num=32;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
num2=20;
num3=10;
num=29;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
num2=20;
num3=11;
num=35;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
num2=20;
num3=12;
num=32;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
num2=20;
num3=13;
num=35;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
num2=20;
num3=14;
num=32;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
num2=20;
num3=15;
num=40;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_188(int iParam0) // Position - 0x1D36E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
num2=1;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
num2=3;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
num2=4;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
num2=6;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
num2=7;
num3=0;
break;
default:
func_173(num6, iParam0, 9, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_189(int iParam0) // Position - 0x1D49B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_173(num6, iParam0, 7, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_190(int iParam0, int iParam1) // Position - 0x1D599{
switch (iParam0){
case 0:
func_208(iParam1);
break;
case 2:
func_207(iParam1);
break;
case 3:
func_203(iParam1);
break;
case 4:
func_202(iParam1);
break;
case 6:
func_201(iParam1);
break;
case 5:
func_200(iParam1);
break;
case 8:
func_199(iParam1);
break;
case 9:
func_198(iParam1);
break;
case 10:
func_197(iParam1);
break;
case 1:
func_196(iParam1);
break;
case 7:
func_195(iParam1);
break;
case 11:
func_194(iParam1);
break;
case 12:
func_193(iParam1);
break;
case 13:
func_192(iParam1);
break;
case 14:
func_191(iParam1);
break;
}
return;
}


void func_191(int iParam0) // Position - 0x1D689{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
num2=1;
num3=0;
num=4590;
num4=2;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
num2=1;
num3=1;
num=4100;
num4=2;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
num2=1;
num3=2;
num=3850;
num4=2;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
num2=1;
num3=3;
num=1850;
num4=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
num2=1;
num3=4;
num=5250;
num4=2;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
num2=1;
num3=5;
num=2700;
num4=2;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
num2=1;
num3=6;
num=3100;
num4=2;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
num2=1;
num3=7;
num=5050;
num4=2;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
num2=2;
num3=0;
num=2500;
num4=2;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
num2=2;
num3=1;
num=1950;
num4=2;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
num2=2;
num3=2;
num=3900;
num4=2;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
num2=2;
num3=3;
num=3550;
num4=2;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
num2=2;
num3=4;
num=4500;
num4=2;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
num2=2;
num3=5;
num=2700;
num4=2;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
num2=2;
num3=6;
num=3100;
num4=2;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
num2=2;
num3=7;
num=2950;
num4=2;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
num2=1;
num3=0;
num=75;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
num2=1;
num3=1;
num=75;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
num2=1;
num3=2;
num=75;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
num2=1;
num3=3;
num=75;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
num2=1;
num3=4;
num=75;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
num2=1;
num3=5;
num=75;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
num2=1;
num3=6;
num=75;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
num2=1;
num3=7;
num=75;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
num2=1;
num3=8;
num=75;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
num2=1;
num3=9;
num=75;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
num2=3;
num3=0;
num=110;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
num2=4;
num3=0;
num=120;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
num2=4;
num3=1;
num=128;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
num2=4;
num3=2;
num=130;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
num2=4;
num3=3;
num=140;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
num2=4;
num3=4;
num=145;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
num2=4;
num3=5;
num=135;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
num2=4;
num3=6;
num=138;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
num2=5;
num3=0;
num=110;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
num2=5;
num3=1;
num=112;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
num2=5;
num3=2;
num=115;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
num2=5;
num3=3;
num=118;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
num2=5;
num3=4;
num=120;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
num2=5;
num3=5;
num=125;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
num2=5;
num3=6;
num=128;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
num2=5;
num3=7;
num=138;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
num2=5;
num3=8;
num=140;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
num2=5;
num3=9;
num=155;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
num2=6;
num3=0;
num=55;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
num2=6;
num3=1;
num=55;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
num2=6;
num3=2;
num=58;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
num2=6;
num3=3;
num=58;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
num2=6;
num3=4;
num=60;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
num2=6;
num3=5;
num=62;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
num2=6;
num3=6;
num=65;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
num2=6;
num3=7;
num=68;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
num2=6;
num3=8;
num=68;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
num2=6;
num3=9;
num=72;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
num2=7;
num3=0;
num=145;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
num2=7;
num3=1;
num=149;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
num2=7;
num3=2;
num=139;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
num2=7;
num3=3;
num=149;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
num2=7;
num3=4;
num=135;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
num2=7;
num3=5;
num=138;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
num2=7;
num3=6;
num=140;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
num2=7;
num3=7;
num=145;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
num2=7;
num3=8;
num=159;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
num2=7;
num3=9;
num=155;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
num2=8;
num3=0;
num=198;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
num2=8;
num3=1;
num=210;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
num2=8;
num3=2;
num=185;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
num2=8;
num3=3;
num=220;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
num2=8;
num3=4;
num=190;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
num2=8;
num3=5;
num=200;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
num2=8;
num3=6;
num=208;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
num2=8;
num3=7;
num=210;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
num2=9;
num3=1;
num=185;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
num2=9;
num3=2;
num=190;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
num2=9;
num3=3;
num=178;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
num2=9;
num3=4;
num=180;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
num2=9;
num3=5;
num=168;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
num2=9;
num3=6;
num=170;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
num2=9;
num3=7;
num=175;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
num2=9;
num3=8;
num=170;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
num2=9;
num3=9;
num=178;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
num2=10;
num3=0;
num=140;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
num2=10;
num3=1;
num=145;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
num2=10;
num3=2;
num=150;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
num2=10;
num3=3;
num=165;
num4=10;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
num2=10;
num3=4;
num=168;
num4=10;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
num2=10;
num3=5;
num=178;
num4=10;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
num2=10;
num3=6;
num=160;
num4=10;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
num2=0;
num3=0;
num=320;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
num2=3;
num3=0;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=8;
num3=0;
num=270;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=8;
num3=1;
num=270;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=9;
num3=0;
num=200;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=9;
num3=1;
num=200;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=10;
num3=0;
num=350;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=10;
num3=1;
num=350;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=11;
num3=0;
num=450;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=12;
num3=0;
num=500;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=12;
num3=1;
num=500;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=13;
num3=0;
num=50;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=13;
num3=1;
num=50;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=14;
num3=0;
num=99;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=14;
num3=1;
num=99;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=14;
num3=2;
num=99;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=16;
num3=0;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=16;
num3=1;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=16;
num3=2;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=16;
num3=3;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=16;
num3=4;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=16;
num3=5;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=16;
num3=6;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=16;
num3=7;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=16;
num3=8;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=16;
num3=9;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=16;
num3=10;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=16;
num3=11;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=16;
num3=12;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=16;
num3=13;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=16;
num3=14;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=16;
num3=15;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=1;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=2;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=3;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=4;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=5;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=19;
num3=0;
num=30;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=19;
num3=1;
num=30;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=19;
num3=2;
num=32;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=19;
num3=3;
num=35;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=19;
num3=4;
num=38;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=19;
num3=5;
num=42;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=19;
num3=6;
num=42;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=19;
num3=7;
num=40;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=19;
num3=8;
num=45;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=19;
num3=9;
num=48;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=19;
num3=10;
num=25;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=19;
num3=11;
num=25;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=19;
num3=12;
num=28;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=19;
num3=13;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=19;
num3=14;
num=30;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=19;
num3=15;
num=35;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
default:
func_173(num6, iParam0, 175, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_192(int iParam0) // Position - 0x1EB7A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 9, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_193(int iParam0) // Position - 0x1ECCB{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4650;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5000;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 47, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_194(int iParam0) // Position - 0x1F1D6{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
num2=2;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
num2=2;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
num2=2;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
num2=2;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=3;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=3;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=3;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=3;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=3;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=3;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=3;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=3;
num3=7;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=3;
num3=8;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=3;
num3=9;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=3;
num3=10;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=3;
num3=11;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=3;
num3=12;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=3;
num3=13;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=3;
num3=14;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=3;
num3=15;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=4;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=4;
num3=1;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=4;
num3=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=4;
num3=3;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=4;
num3=4;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=4;
num3=5;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=4;
num3=6;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=4;
num3=7;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=4;
num3=8;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=4;
num3=9;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=4;
num3=10;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=4;
num3=11;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=4;
num3=12;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=4;
num3=13;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=4;
num3=14;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=4;
num3=15;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
num2=5;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
num2=6;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
num2=6;
num3=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
num2=7;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
num2=8;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
num2=9;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
num2=10;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
num2=10;
num3=1;
num=48;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
num2=10;
num3=2;
num=35;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
num2=10;
num3=3;
num=32;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
num2=10;
num3=4;
num=35;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
num2=10;
num3=5;
num=48;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
num2=10;
num3=6;
num=52;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
num2=10;
num3=7;
num=38;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
num2=10;
num3=8;
num=42;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
num2=10;
num3=9;
num=38;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
num2=10;
num3=10;
num=35;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
num2=10;
num3=11;
num=48;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
num2=10;
num3=12;
num=42;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
num2=10;
num3=13;
num=45;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
num2=10;
num3=14;
num=45;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
num2=10;
num3=15;
num=49;
break;
default:
func_173(num6, iParam0, 63, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_195(int iParam0) // Position - 0x1F844{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 1, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_196(int iParam0) // Position - 0x1F8B8{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
num2=4;
num3=0;
break;
default:
func_173(num6, iParam0, 5, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_197(int iParam0) // Position - 0x1F988{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=5;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=6;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=7;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=8;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=9;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=10;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=11;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=12;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=13;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=14;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=15;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
default:
func_173(num6, iParam0, 53, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_198(int iParam0) // Position - 0x1FEB8{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=5;
num3=0;
num=125;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=5;
num3=1;
num=150;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=5;
num3=2;
num=175;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=5;
num3=3;
num=85;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=5;
num3=4;
num=150;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=5;
num3=5;
num=175;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
default:
func_173(num6, iParam0, 12, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_199(int iParam0) // Position - 0x20050{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
num2=9;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
num2=11;
num3=0;
num=195;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
num2=11;
num3=1;
num=195;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
num2=11;
num3=2;
num=195;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
num2=11;
num3=3;
num=250;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
num2=11;
num3=4;
num=250;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
num2=11;
num3=5;
num=250;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
num2=11;
num3=6;
num=195;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
num2=11;
num3=7;
num=250;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
num2=11;
num3=8;
num=250;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
num2=11;
num3=9;
num=250;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
num2=11;
num3=10;
num=250;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
num2=11;
num3=11;
num=195;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
num2=11;
num3=12;
num=250;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=15;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=15;
num3=1;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=15;
num3=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=15;
num3=3;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=15;
num3=4;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=15;
num3=5;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=15;
num3=6;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=15;
num3=7;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=15;
num3=8;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=15;
num3=9;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=15;
num3=10;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=15;
num3=11;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=15;
num3=12;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=15;
num3=13;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=15;
num3=14;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=15;
num3=15;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=16;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=16;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=16;
num3=2;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=16;
num3=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=16;
num3=4;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=16;
num3=5;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=16;
num3=6;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=16;
num3=7;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=16;
num3=8;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=16;
num3=9;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=16;
num3=10;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=16;
num3=11;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=16;
num3=12;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=16;
num3=13;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=16;
num3=14;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=16;
num3=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=17;
num3=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=17;
num3=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=17;
num3=2;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=17;
num3=3;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=17;
num3=4;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=17;
num3=5;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=17;
num3=6;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=17;
num3=7;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=17;
num3=8;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=17;
num3=9;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=17;
num3=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=17;
num3=11;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=17;
num3=12;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=17;
num3=13;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=17;
num3=14;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=17;
num3=15;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
break;
default:
func_173(num6, iParam0, 77, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_200(int iParam0) // Position - 0x2084E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 7, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_201(int iParam0) // Position - 0x2095E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
num2=0;
num3=1;
num=80;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=2;
num=80;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
num2=0;
num3=3;
num=89;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
num2=0;
num3=4;
num=45;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=5;
num=35;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=6;
num=89;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
num2=0;
num3=7;
num=95;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=8;
num=115;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
num2=0;
num3=9;
num=40;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
num2=0;
num3=10;
num=145;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
num2=0;
num3=11;
num=145;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
num2=1;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
num2=6;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
num2=6;
num3=1;
num=180;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
num2=6;
num3=2;
num=80;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
num2=6;
num3=3;
num=200;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
num2=6;
num3=4;
num=220;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
num2=6;
num3=5;
num=235;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
num2=8;
num3=0;
num=870;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
num2=8;
num3=1;
num=870;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
num2=8;
num3=2;
num=870;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
num2=8;
num3=3;
num=1275;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
num2=8;
num3=4;
num=1275;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
num2=8;
num3=5;
num=1275;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
num2=8;
num3=6;
num=1275;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
num2=8;
num3=7;
num=1275;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
num2=8;
num3=8;
num=1275;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
num2=10;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
num2=11;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
num2=11;
num3=1;
num=50;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
num2=11;
num3=2;
num=50;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
num2=11;
num3=3;
num=50;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
num2=11;
num3=4;
num=50;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
num2=11;
num3=5;
num=50;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
num2=11;
num3=6;
num=50;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
num2=11;
num3=7;
num=50;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
num2=11;
num3=8;
num=50;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
num2=11;
num3=9;
num=50;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
num2=11;
num3=10;
num=50;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
num2=11;
num3=11;
num=50;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
num2=11;
num3=12;
num=50;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
num2=11;
num3=13;
num=50;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
num2=11;
num3=14;
num=50;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
num2=11;
num3=15;
num=50;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
num2=12;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
num2=12;
num3=1;
num=25;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
num2=12;
num3=2;
num=20;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
num2=12;
num3=3;
num=24;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
num2=12;
num3=4;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
num2=12;
num3=5;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
num2=12;
num3=6;
num=29;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
num2=12;
num3=7;
num=27;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
num2=12;
num3=8;
num=25;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
num2=12;
num3=9;
num=30;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
num2=12;
num3=10;
num=28;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
num2=12;
num3=11;
num=30;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
num2=13;
num3=0;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
num2=14;
num3=0;
num=155;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
num2=14;
num3=1;
num=155;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
num2=14;
num3=2;
num=165;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
num2=14;
num3=3;
num=170;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
num2=14;
num3=4;
num=160;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
num2=14;
num3=5;
num=165;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
num2=14;
num3=6;
num=170;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
num2=14;
num3=7;
num=160;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
num2=16;
num3=0;
num=720;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
num2=16;
num3=1;
num=680;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
num2=16;
num3=2;
num=650;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
num2=16;
num3=3;
num=670;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
num2=16;
num3=4;
num=700;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
num2=16;
num3=5;
num=680;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
num2=16;
num3=6;
num=720;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
num2=16;
num3=7;
num=740;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
num2=16;
num3=8;
num=760;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
num2=16;
num3=9;
num=780;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
num2=16;
num3=10;
num=750;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
num2=16;
num3=11;
num=700;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
num2=17;
num3=0;
num=790;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
num2=17;
num3=1;
num=750;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
num2=17;
num3=2;
num=860;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
num2=17;
num3=3;
num=750;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
num2=17;
num3=4;
num=790;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
num2=17;
num3=5;
num=840;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
num2=17;
num3=6;
num=820;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
num2=17;
num3=7;
num=800;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
num2=17;
num3=8;
num=850;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
num2=17;
num3=9;
num=870;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
num2=17;
num3=10;
num=720;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
num2=17;
num3=11;
num=740;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
num2=17;
num3=12;
num=800;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
num2=17;
num3=13;
num=750;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
num2=17;
num3=14;
num=770;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
num2=17;
num3=15;
num=860;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
num2=18;
num3=0;
num=850;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
num2=18;
num3=1;
num=800;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
num2=18;
num3=2;
num=780;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
num2=18;
num3=3;
num=890;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
num2=18;
num3=4;
num=820;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
num2=18;
num3=5;
num=840;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=18;
num3=6;
num=870;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
num2=18;
num3=7;
num=930;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
num2=18;
num3=8;
num=880;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
num2=18;
num3=9;
num=900;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
num2=18;
num3=10;
num=920;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
num2=18;
num3=11;
num=970;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=18;
num3=12;
num=990;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
num2=18;
num3=13;
num=960;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=18;
num3=14;
num=980;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
num2=18;
num3=15;
num=950;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
num2=19;
num3=0;
num=110;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
num2=19;
num3=1;
num=115;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
num2=19;
num3=2;
num=120;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
num2=19;
num3=3;
num=110;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
num2=19;
num3=4;
num=125;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
num2=19;
num3=5;
num=128;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
num2=19;
num3=6;
num=135;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
num2=19;
num3=7;
num=130;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
num2=19;
num3=8;
num=145;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
num2=19;
num3=9;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
num2=19;
num3=10;
num=120;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
num2=19;
num3=11;
num=150;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
num2=19;
num3=12;
num=125;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
num2=19;
num3=13;
num=120;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
num2=19;
num3=14;
num=130;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
num2=19;
num3=15;
num=110;
break;
default:
func_173(num6, iParam0, 134, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_202(int iParam0) // Position - 0x21889{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
num2=0;
num3=1;
num=32;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
num2=0;
num3=2;
num=38;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
num2=0;
num3=3;
num=44;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
num2=2;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
num2=6;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
num2=6;
num3=1;
num=690;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
num2=6;
num3=2;
num=720;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
num2=6;
num3=3;
num=850;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=6;
num3=4;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
num2=6;
num3=5;
num=740;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
num2=6;
num3=6;
num=750;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
num2=6;
num3=7;
num=790;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
flag=true;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
num2=8;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
num2=8;
num3=1;
num=145;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
num2=8;
num3=2;
num=140;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
num2=8;
num3=3;
num=148;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
num2=8;
num3=4;
num=150;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
num2=8;
num3=5;
num=154;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
num2=8;
num3=6;
num=158;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
num2=11;
num3=0;
num=820;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
num2=11;
num3=1;
num=820;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
num2=11;
num3=2;
num=850;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
num2=11;
num3=3;
num=850;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
num2=11;
num3=4;
num=920;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
num2=11;
num3=5;
num=950;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
num2=13;
num3=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
num2=13;
num3=1;
num=45;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
num2=13;
num3=2;
num=48;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
num2=13;
num3=3;
num=45;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
num2=13;
num3=4;
num=48;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
num2=13;
num3=5;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
num2=13;
num3=6;
num=55;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
num2=13;
num3=7;
num=58;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
num2=13;
num3=8;
num=60;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
num2=13;
num3=9;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
num2=13;
num3=10;
num=62;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
num2=13;
num3=11;
num=65;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
num2=14;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
num2=15;
num3=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
num2=15;
num3=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
num2=15;
num3=2;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
num2=15;
num3=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
num2=15;
num3=4;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
num2=15;
num3=5;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
num2=15;
num3=6;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
num2=15;
num3=7;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
num2=15;
num3=8;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
num2=15;
num3=9;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
num2=15;
num3=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
num2=15;
num3=11;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
num2=15;
num3=12;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
num2=15;
num3=13;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
num2=15;
num3=14;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
num2=15;
num3=15;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
num2=18;
num3=1;
num=160;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
num2=18;
num3=2;
num=180;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
num2=18;
num3=3;
num=180;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
num2=18;
num3=4;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
num2=18;
num3=5;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
num2=19;
num3=0;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
num2=20;
num3=0;
num=118;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
num2=20;
num3=1;
num=120;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
num2=20;
num3=2;
num=128;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
num2=20;
num3=3;
num=128;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
num2=20;
num3=4;
num=130;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
num2=20;
num3=5;
num=145;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
num2=20;
num3=6;
num=138;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
num2=20;
num3=7;
num=132;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
num2=20;
num3=8;
num=148;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
num2=21;
num3=0;
num=118;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
num2=21;
num3=1;
num=118;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
num2=21;
num3=2;
num=118;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
num2=21;
num3=3;
num=129;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
num2=21;
num3=4;
num=135;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
num2=21;
num3=5;
num=135;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
num2=21;
num3=6;
num=118;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
num2=21;
num3=7;
num=118;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
num2=21;
num3=8;
num=118;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
num2=22;
num3=0;
num=55;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
num2=22;
num3=1;
num=55;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
num2=22;
num3=2;
num=59;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
num2=22;
num3=3;
num=59;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
num2=22;
num3=4;
num=65;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
num2=22;
num3=5;
num=65;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
num2=22;
num3=6;
num=69;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
num2=22;
num3=7;
num=69;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
num2=22;
num3=8;
num=75;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
num2=22;
num3=9;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
num2=22;
num3=10;
num=65;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
num2=22;
num3=11;
num=65;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
num2=22;
num3=12;
num=65;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
num2=22;
num3=13;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
num2=23;
num3=0;
num=38;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
num2=23;
num3=1;
num=38;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
num2=23;
num3=2;
num=28;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
num2=23;
num3=3;
num=34;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
num2=23;
num3=4;
num=36;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
num2=23;
num3=5;
num=32;
break;
default:
func_173(num6, iParam0, 117, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_203(int iParam0) // Position - 0x22546{
if(iParam0 < 107) func_206(iParam0);
elseif(iParam0 < 227) func_205(iParam0);
else func_204(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_173(3, iParam0, 318, -1);
return;
}


void func_204(int iParam0) // Position - 0x2258C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=23;
num3=0;
num5=3;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=23;
num3=1;
num5=3;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=23;
num3=2;
num5=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=23;
num3=3;
num5=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=23;
num3=4;
num5=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=23;
num3=5;
num5=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=23;
num3=6;
num5=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=23;
num3=7;
num5=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=23;
num3=8;
num5=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=23;
num3=9;
num5=3;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=23;
num3=10;
num5=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=23;
num3=11;
num5=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=23;
num3=12;
num5=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=23;
num3=13;
num5=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=23;
num3=14;
num5=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=23;
num3=15;
num5=3;
break;
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
num2=24;
num3=0;
num=2200;
num5=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
num2=24;
num3=1;
num=2200;
num5=3;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
num2=24;
num3=2;
num=2200;
num5=3;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
num2=24;
num3=3;
num=2200;
num5=3;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
num2=24;
num3=4;
num=2200;
num5=3;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
num2=24;
num3=5;
num=2200;
num5=3;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
num2=24;
num3=6;
num=2200;
num5=3;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
num2=24;
num3=7;
num=2200;
num5=3;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
num2=24;
num3=8;
num=2200;
num5=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
num2=24;
num3=9;
num=2200;
num5=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
num2=24;
num3=10;
num=2200;
num5=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
num2=24;
num3=11;
num=2200;
num5=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
num2=24;
num3=12;
num=2200;
num5=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
num2=24;
num3=13;
num=2200;
num5=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
num2=24;
num3=14;
num=2200;
num5=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
num2=24;
num3=15;
num=2200;
num5=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
num2=25;
num3=0;
flag=true;
num5=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num5=1;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
num2=27;
num3=0;
num=150;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
num2=27;
num3=1;
num=160;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
num2=27;
num3=2;
num=150;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
num2=27;
num3=3;
num=150;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
num2=27;
num3=4;
num=160;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
num2=27;
num3=5;
num=160;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
num2=28;
num3=0;
num=88;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=28;
num3=1;
num=60;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
num2=28;
num3=2;
num=70;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
num2=28;
num3=3;
num=80;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
num2=28;
num3=4;
num=90;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
num2=28;
num3=5;
num=80;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
num2=28;
num3=6;
num=70;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
num2=28;
num3=7;
num=95;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=28;
num3=8;
num=105;
break;
case 276:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
num2=28;
num3=9;
num=95;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
num2=28;
num3=10;
num=110;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
num2=28;
num3=11;
num=98;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
num2=28;
num3=12;
num=88;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
num2=28;
num3=13;
num=98;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
num2=28;
num3=14;
num=110;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
num2=28;
num3=15;
num=98;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
num2=29;
num3=0;
num=250;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
num2=29;
num3=1;
num=270;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
num2=29;
num3=2;
num=280;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
num2=29;
num3=3;
num=275;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
num2=29;
num3=4;
num=290;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
num2=29;
num3=5;
num=35;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
num2=29;
num3=6;
num=35;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
num2=29;
num3=7;
num=35;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
num2=29;
num3=8;
num=295;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
num2=29;
num3=9;
num=35;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
num2=29;
num3=10;
num=35;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
num2=29;
num3=11;
num=35;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
num2=29;
num3=12;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
num2=30;
num3=0;
num=1750;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
num2=30;
num3=1;
num=1920;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
num2=30;
num3=2;
num=1890;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
num2=30;
num3=3;
num=1850;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
num2=30;
num3=4;
num=1750;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
num2=30;
num3=5;
num=1990;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
num2=30;
num3=6;
num=1820;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
num2=30;
num3=7;
num=1990;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
num2=30;
num3=8;
num=1920;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
num2=30;
num3=9;
num=1850;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
num2=30;
num3=10;
num=1990;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
num2=30;
num3=11;
num=1790;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
num2=30;
num3=12;
num=1790;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
num2=31;
num3=0;
num=69;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
num2=31;
num3=1;
num=75;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
num2=31;
num3=2;
num=75;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
num2=31;
num3=3;
num=79;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
num2=31;
num3=4;
num=79;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
num2=31;
num3=5;
num=89;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
num2=31;
num3=6;
num=85;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
num2=31;
num3=7;
num=85;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
num2=31;
num3=8;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_205(int iParam0) // Position - 0x23031{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
num2=12;
num3=0;
num=195;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
num2=12;
num3=1;
num=420;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
num2=12;
num3=2;
num=390;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
num2=12;
num3=3;
num=450;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
num2=12;
num3=4;
num=400;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
num2=12;
num3=5;
num=390;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
num2=12;
num3=6;
num=570;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
num2=12;
num3=7;
num=390;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
num2=12;
num3=8;
num=470;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
num2=12;
num3=9;
num=390;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
num2=12;
num3=10;
num=520;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
num2=12;
num3=11;
num=490;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
num2=12;
num3=12;
num=490;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
num2=12;
num3=13;
num=590;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
num2=12;
num3=14;
num=560;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
num2=12;
num3=15;
num=520;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
num2=13;
num3=0;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
num2=13;
num3=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
num2=13;
num3=2;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
num2=13;
num3=3;
num=90;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
num2=13;
num3=4;
num=85;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
num2=13;
num3=5;
num=45;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
num2=13;
num3=6;
num=90;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
num2=13;
num3=7;
num=47;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
num2=13;
num3=8;
num=45;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
num2=13;
num3=9;
num=48;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
num2=13;
num3=10;
num=45;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
num2=13;
num3=11;
num=85;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
num2=13;
num3=12;
num=45;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
num2=13;
num3=13;
num=47;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
num2=13;
num3=14;
num=45;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
num2=13;
num3=15;
num=48;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
num2=14;
num3=0;
num=290;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
num2=14;
num3=1;
num=290;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
num2=14;
num3=2;
num=290;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
num2=14;
num3=3;
num=290;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
num2=14;
num3=4;
num=290;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
num2=14;
num3=5;
num=290;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
num2=14;
num3=6;
num=65;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
num2=14;
num3=7;
num=65;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
num2=15;
num3=0;
num=200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
num2=15;
num3=1;
num=220;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
num2=15;
num3=2;
num=220;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
num2=15;
num3=3;
num=240;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
num2=15;
num3=4;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
num2=15;
num3=5;
num=250;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
num2=15;
num3=6;
num=260;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
num2=15;
num3=7;
num=40;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
num2=15;
num3=8;
num=50;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
num2=15;
num3=9;
num=45;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
num2=15;
num3=10;
num=40;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
num2=15;
num3=11;
num=55;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
num2=16;
num3=0;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
num2=17;
num3=0;
num=40;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
num2=17;
num3=1;
num=50;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
num2=17;
num3=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
num2=17;
num3=3;
num=50;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
num2=17;
num3=4;
num=50;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
num2=17;
num3=5;
num=50;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
num2=17;
num3=6;
num=50;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
num2=17;
num3=7;
num=50;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
num2=17;
num3=8;
num=50;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
num2=17;
num3=9;
num=50;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
num2=17;
num3=10;
num=50;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
num2=17;
num3=11;
num=50;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
num2=17;
num3=12;
num=50;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
num2=17;
num3=13;
num=50;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
num2=17;
num3=14;
num=50;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
num2=17;
num3=15;
num=50;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=18;
num3=0;
num5=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=18;
num3=1;
num5=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=18;
num3=2;
num5=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=18;
num3=3;
num5=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=18;
num3=4;
num5=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=18;
num3=5;
num5=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=18;
num3=6;
num5=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=18;
num3=7;
num5=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=18;
num3=8;
num5=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=18;
num3=9;
num5=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=18;
num3=10;
num5=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=18;
num3=11;
num5=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=18;
num3=12;
num5=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=18;
num3=13;
num5=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=18;
num3=14;
num5=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=18;
num3=15;
num5=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
num2=19;
num3=0;
num=480;
num5=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
num2=19;
num3=1;
num=440;
num5=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
num2=19;
num3=2;
num=440;
num5=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
num2=19;
num3=3;
num=520;
num5=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
num2=19;
num3=4;
num=440;
num5=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
num2=19;
num3=5;
num=440;
num5=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
num2=19;
num3=6;
num=480;
num5=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
num2=19;
num3=7;
num=480;
num5=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
num2=19;
num3=8;
num=480;
num5=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
num2=19;
num3=9;
num=480;
num5=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
num2=19;
num3=10;
num=480;
num5=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
num2=19;
num3=11;
num=480;
num5=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
num2=19;
num3=12;
num=520;
num5=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
num2=19;
num3=13;
num=520;
num5=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
num2=19;
num3=14;
num=520;
num5=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
num2=19;
num3=15;
num=440;
num5=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
num5=4;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
num2=21;
num3=0;
num=220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
num2=21;
num3=1;
num=200;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
num2=21;
num3=2;
num=240;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
num2=21;
num3=3;
num=240;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
num2=21;
num3=4;
num=260;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
num2=21;
num3=5;
num=275;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
num2=21;
num3=6;
num=275;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
num2=21;
num3=7;
num=280;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
num2=21;
num3=8;
num=280;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
num2=21;
num3=9;
num=280;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
num2=21;
num3=10;
num=280;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
num2=21;
num3=11;
num=280;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
num2=21;
num3=12;
num=280;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
num2=21;
num3=13;
num=280;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
num2=22;
num3=0;
num=3100;
num5=3;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
num2=22;
num3=1;
num=2800;
num5=3;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
num2=22;
num3=2;
num=2500;
num5=3;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
num2=22;
num3=3;
num=3000;
num5=3;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_206(int iParam0) // Position - 0x23E20{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
num2=0;
num3=2;
num=180;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
num2=0;
num3=3;
num=22;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
num2=0;
num3=4;
num=20;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
num2=0;
num3=5;
num=18;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
num2=0;
num3=6;
num=19;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
num2=0;
num3=9;
num=19;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
num2=0;
num3=10;
num=19;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
num2=0;
num3=11;
num=18;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
num2=0;
num3=12;
num=20;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
num2=0;
num3=13;
num=22;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
num2=0;
num3=14;
num=19;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
num2=0;
num3=15;
num=22;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num5=4;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
num5=4;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
num5=4;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
num5=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
num5=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
num5=4;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
num2=2;
num3=0;
flag=true;
num5=3;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num5=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
num2=4;
num3=0;
num=20;
num5=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
num2=4;
num3=1;
num=22;
num5=2;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
num2=4;
num3=2;
num=20;
num5=2;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
num2=4;
num3=3;
num=25;
num5=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
num2=4;
num3=4;
num=23;
num5=2;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
num2=4;
num3=5;
num=25;
num5=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
num2=4;
num3=6;
num=28;
num5=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
num2=4;
num3=7;
num=26;
num5=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
num2=4;
num3=8;
num=24;
num5=2;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
num2=4;
num3=9;
num=27;
num5=2;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
num2=4;
num3=10;
num=29;
num5=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
num2=4;
num3=11;
num=28;
num5=2;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
num2=4;
num3=12;
num=25;
num5=2;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
num2=4;
num3=13;
num=22;
num5=2;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
num2=4;
num3=14;
num=27;
num5=2;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
num2=4;
num3=15;
num=29;
num5=2;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num5=4;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
num2=6;
num3=0;
num5=3;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
num2=6;
num3=1;
num=1270;
num5=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
num2=6;
num3=2;
num=1270;
num5=3;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
num2=6;
num3=3;
num=1270;
num5=3;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
num2=6;
num3=4;
num=1090;
num5=3;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
num2=6;
num3=5;
num=1090;
num5=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
num2=6;
num3=6;
num=1120;
num5=3;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
num2=6;
num3=7;
num=1120;
num5=3;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
num2=6;
num3=8;
num=1290;
num5=3;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
num2=6;
num3=9;
num=1290;
num5=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
num2=6;
num3=10;
num=1320;
num5=3;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
num2=6;
num3=11;
num=1320;
num5=3;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
num2=6;
num3=12;
num=1590;
num5=3;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
num2=6;
num3=13;
num=1590;
num5=3;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
num2=6;
num3=14;
num=1590;
num5=3;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
num2=6;
num3=15;
num=1320;
num5=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
num2=7;
num3=0;
num=98;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
num2=7;
num3=1;
num=98;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
num2=7;
num3=2;
num=110;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
num2=7;
num3=3;
num=110;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
num2=7;
num3=4;
num=118;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
num2=7;
num3=5;
num=120;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
num2=7;
num3=6;
num=120;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
num2=7;
num3=7;
num=129;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
num2=7;
num3=8;
num=125;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
num2=7;
num3=9;
num=125;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
num2=7;
num3=10;
num=129;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
num2=7;
num3=11;
num=129;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
num2=7;
num3=12;
num=135;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
num2=7;
num3=13;
num=139;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
num2=7;
num3=14;
num=145;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
num2=7;
num3=15;
num=145;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
num2=8;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
num2=8;
num3=1;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
num2=8;
num3=2;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
num2=8;
num3=3;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
num2=8;
num3=4;
num=30;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
num2=8;
num3=5;
num=38;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
num2=8;
num3=6;
num=32;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
num2=8;
num3=7;
num=30;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
num2=8;
num3=8;
num=33;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
num2=8;
num3=9;
num=35;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
num2=8;
num3=10;
num=35;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
num2=8;
num3=11;
num=38;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
num2=8;
num3=12;
num=33;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
num2=8;
num3=13;
num=35;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
num2=8;
num3=14;
num=38;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
num2=8;
num3=15;
num=32;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
num2=11;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
num2=11;
num3=1;
num=59;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
num2=11;
num3=2;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
num2=11;
num3=3;
num=25;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
num2=11;
num3=4;
num=29;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
num2=11;
num3=5;
num=27;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
num2=11;
num3=6;
num=25;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
num2=11;
num3=7;
num=27;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
num2=11;
num3=8;
num=28;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
num2=11;
num3=9;
num=30;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
num2=11;
num3=10;
num=29;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
num2=11;
num3=11;
num=27;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
num2=11;
num3=12;
num=29;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
num2=11;
num3=13;
num=32;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
num2=11;
num3=14;
num=30;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
num2=11;
num3=15;
num=28;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_207(int iParam0) // Position - 0x24C22{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
num2=0;
num3=3;
num5=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
num2=0;
num3=4;
num5=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
num2=0;
num3=5;
num5=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
num2=0;
num3=6;
num5=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
num2=0;
num3=7;
num5=3;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
num2=0;
num3=8;
num5=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
num2=0;
num3=9;
num5=3;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
num2=0;
num3=10;
num5=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
num2=0;
num3=11;
num5=3;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
num2=0;
num3=12;
num5=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
num2=0;
num3=14;
num5=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
num2=0;
num3=15;
num5=3;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
num2=1;
num3=0;
num5=3;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
num2=2;
num3=0;
num5=3;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
num2=3;
num3=0;
num5=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
num2=4;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 21, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_208(int iParam0) // Position - 0x24E9B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=9;
break;
default:
func_173(num6, iParam0, 10, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_209(int iParam0, int iParam1) // Position - 0x24FE1{
switch (iParam0){
case 0:
func_226(iParam1);
break;
case 2:
func_225(iParam1);
break;
case 3:
func_222(iParam1);
break;
case 4:
func_221(iParam1);
break;
case 6:
func_220(iParam1);
break;
case 5:
func_219(iParam1);
break;
case 8:
func_218(iParam1);
break;
case 9:
func_217(iParam1);
break;
case 10:
func_216(iParam1);
break;
case 1:
func_215(iParam1);
break;
case 7:
func_214(iParam1);
break;
case 11:
func_213(iParam1);
break;
case 12:
func_212(iParam1);
break;
case 13:
func_211(iParam1);
break;
case 14:
func_210(iParam1);
break;
}
return;
}


void func_210(int iParam0) // Position - 0x250D1{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
num2=1;
num3=0;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=11;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
num2=12;
num3=0;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=28;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
num2=0;
num3=0;
num=45;
num4=10;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=10;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=10;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
num2=3;
num3=0;
num=55;
num4=10;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
num2=4;
num3=0;
num=58;
num4=10;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
num2=4;
num3=1;
num=56;
num4=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
num2=4;
num3=2;
num=60;
num4=10;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
num2=4;
num3=3;
num=65;
num4=10;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
num2=4;
num3=4;
num=62;
num4=10;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
num2=4;
num3=5;
num=65;
num4=10;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
num2=4;
num3=6;
num=68;
num4=10;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
num2=4;
num3=7;
num=68;
num4=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
num2=5;
num3=0;
num=65;
num4=10;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
num2=5;
num3=1;
num=69;
num4=10;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
num2=5;
num3=2;
num=72;
num4=10;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
num2=5;
num3=3;
num=70;
num4=10;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
num2=5;
num3=4;
num=74;
num4=10;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
num2=5;
num3=5;
num=78;
num4=10;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
num2=5;
num3=6;
num=82;
num4=10;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
num2=5;
num3=7;
num=85;
num4=10;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
num2=5;
num3=8;
num=85;
num4=10;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
num2=5;
num3=9;
num4=10;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
num2=6;
num3=0;
num=69;
num4=10;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
num2=6;
num3=1;
num=69;
num4=10;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
num2=6;
num3=2;
num=69;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
num2=6;
num3=3;
num=69;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
num2=6;
num3=4;
num=69;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
num2=6;
num3=5;
num=69;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
num2=6;
num3=6;
num=69;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
num2=6;
num3=7;
num=69;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
num2=6;
num3=8;
num=69;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
num2=6;
num3=9;
num=69;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
num2=7;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
num2=8;
num3=0;
num=170;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
num2=8;
num3=1;
num=175;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
num2=8;
num3=2;
num=180;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
num2=8;
num3=3;
num=185;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
num2=8;
num3=4;
num=189;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
num2=8;
num3=5;
num=195;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
num2=8;
num3=6;
num=235;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
num2=8;
num3=7;
num=245;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
num2=8;
num3=8;
num=250;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
num2=8;
num3=9;
num=275;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
num2=8;
num3=10;
num=280;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
num2=8;
num3=11;
num=295;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
num2=9;
num3=0;
num=179;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
num2=9;
num3=1;
num=159;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
num2=9;
num3=2;
num=165;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
num2=9;
num3=3;
num=155;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
num2=9;
num3=5;
num=185;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
num2=9;
num3=6;
num=189;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
num2=9;
num3=7;
num=225;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
num=100;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
default:
func_173(num6, iParam0, 113, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_211(int iParam0) // Position - 0x25E5B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 10, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_212(int iParam0) // Position - 0x25FD5{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
num2=0;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
num2=0;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
num2=0;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
num2=0;
num3=0;
num=840;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
num2=0;
num3=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
num2=0;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
num2=0;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
num2=0;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
num2=0;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
num2=0;
num3=0;
num=3900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4600;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 53, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_213(int iParam0) // Position - 0x2654C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
num2=2;
num3=1;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
num2=2;
num3=2;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
num2=2;
num3=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
num2=2;
num3=4;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
num2=2;
num3=5;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
num2=3;
num3=0;
num=390;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
num2=3;
num3=1;
num=390;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
num2=3;
num3=2;
num=420;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
num2=3;
num3=3;
num=420;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
num2=3;
num3=4;
num=490;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
num2=3;
num3=5;
num=490;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
num2=3;
num3=6;
num=540;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
num2=3;
num3=7;
num=540;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
num2=3;
num3=8;
num=550;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
num2=3;
num3=9;
num=540;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
num2=4;
num3=0;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
num2=4;
num3=1;
num=850;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
num2=4;
num3=2;
num=890;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
num2=4;
num3=3;
num=890;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
num2=4;
num3=4;
num=920;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
num2=4;
num3=5;
num=920;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
num2=4;
num3=6;
num=950;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
num2=4;
num3=7;
num=980;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
num2=4;
num3=8;
num=1050;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
num2=4;
num3=9;
num=1100;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
num2=5;
num3=0;
num=1890;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
num2=5;
num3=1;
num=1820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
num2=5;
num3=2;
num=1820;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
num2=5;
num3=3;
num=1850;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
num2=5;
num3=4;
num=1850;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
num2=5;
num3=5;
num=1900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
num2=5;
num3=6;
num=1920;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
num2=5;
num3=7;
num=1980;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
num2=5;
num3=8;
num=2100;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
num2=5;
num3=9;
num=2120;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
num2=5;
num3=10;
num=2000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
num2=5;
num3=11;
num=2200;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
num2=5;
num3=12;
num=2280;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
num2=5;
num3=13;
num=2300;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
num2=5;
num3=14;
num=2350;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
num2=5;
num3=15;
num=2280;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
num2=6;
num3=0;
break;
default:
func_173(num6, iParam0, 45, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_214(int iParam0) // Position - 0x26A76{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_173(num6, iParam0, 1, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_215(int iParam0) // Position - 0x26AEA{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
num2=4;
num3=0;
break;
default:
func_173(num6, iParam0, 5, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_216(int iParam0) // Position - 0x26BBA{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=3;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=4;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=5;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=6;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=7;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
num2=10;
num3=8;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
num2=10;
num3=9;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
num2=10;
num3=10;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
num2=10;
num3=11;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
num2=10;
num3=12;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
num2=10;
num3=13;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
num2=10;
num3=14;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
num2=10;
num3=15;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
break;
default:
func_173(num6, iParam0, 48, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_217(int iParam0) // Position - 0x27092{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=8;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=8;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=8;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=8;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=8;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=8;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 20, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_218(int iParam0) // Position - 0x272FB{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
num2=10;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
num2=16;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 24, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_219(int iParam0) // Position - 0x275D1{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
default:
func_173(num6, iParam0, 14, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_220(int iParam0) // Position - 0x2779A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
num2=0;
num3=1;
num=665;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
num2=0;
num3=2;
num=620;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
num2=0;
num3=3;
num=540;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
num2=0;
num3=4;
num=580;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
num2=0;
num3=5;
num=650;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
num2=13;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
num2=15;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
num2=15;
num3=1;
num=64;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
num2=15;
num3=2;
num=56;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
num2=15;
num3=3;
num=69;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
num2=15;
num3=4;
num=59;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
num2=15;
num3=5;
num=62;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
num2=15;
num3=6;
num=74;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
num2=15;
num3=7;
num=68;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
num2=15;
num3=8;
num=72;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
num2=15;
num3=9;
num=70;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
num2=16;
num3=0;
num=48;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
num2=16;
num3=1;
num=48;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
num2=16;
num3=2;
num=55;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
num2=16;
num3=3;
num=75;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
num2=16;
num3=4;
num=65;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
num2=16;
num3=5;
num=68;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
num2=16;
num3=6;
num=58;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
num2=16;
num3=7;
num=68;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
num2=21;
num3=0;
num=720;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
num2=21;
num3=1;
num=680;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
num2=21;
num3=2;
num=650;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
num2=21;
num3=3;
num=670;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
num2=21;
num3=4;
num=700;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
num2=21;
num3=5;
num=680;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
num2=21;
num3=6;
num=720;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
num2=21;
num3=7;
num=740;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
num2=21;
num3=8;
num=760;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
num2=21;
num3=9;
num=780;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
num2=21;
num3=10;
num=750;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
num2=21;
num3=11;
num=700;
break;
default:
func_173(num6, iParam0, 99, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_221(int iParam0) // Position - 0x282F0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
num2=7;
num3=0;
num=115;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
num2=7;
num3=1;
num=115;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
num2=7;
num3=2;
num=128;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
num2=7;
num3=3;
num=118;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
num2=7;
num3=4;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
num2=7;
num3=5;
num=128;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
num2=7;
num3=6;
num=128;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
num2=7;
num3=7;
num=125;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
num2=13;
num3=0;
num=68;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
num2=13;
num3=1;
num=68;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
num2=13;
num3=2;
num=68;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
num2=13;
num3=3;
num=68;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
num2=13;
num3=4;
num=68;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
num2=15;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
num2=15;
num3=1;
num=550;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
num2=15;
num3=2;
num=650;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
num2=15;
num3=3;
num=875;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=15;
num3=4;
num=820;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
num2=15;
num3=5;
num=720;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
num2=15;
num3=6;
num=750;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
num2=15;
num3=7;
num=850;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
num2=16;
num3=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
num2=16;
num3=1;
num=48;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
num2=16;
num3=2;
num=48;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
num2=16;
num3=3;
num=38;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
num2=16;
num3=4;
num=38;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
num2=16;
num3=5;
num=42;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
num2=16;
num3=6;
num=58;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
num2=16;
num3=7;
num=46;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
num2=16;
num3=8;
num=46;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
num2=16;
num3=9;
num=46;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
num2=16;
num3=10;
num=68;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
num2=16;
num3=11;
num=58;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
num2=16;
num3=12;
num=50;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
num2=16;
num3=13;
num=68;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
num2=16;
num3=14;
num=68;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
num2=16;
num3=15;
num=42;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
num2=18;
num3=1;
num=250;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
num2=18;
num3=2;
num=250;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
num2=18;
num3=3;
num=290;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
num2=18;
num3=4;
num=270;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
num2=18;
num3=5;
num=270;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
num2=18;
num3=6;
num=15;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
num2=18;
num3=7;
num=12;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
num2=20;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
num2=20;
num3=1;
num=118;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
num2=20;
num3=2;
num=110;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
num2=21;
num3=0;
num=88;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
num2=21;
num3=1;
num=95;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
num2=21;
num3=2;
num=95;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
num2=21;
num3=3;
num=98;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
num2=22;
num3=0;
num=140;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
num2=23;
num3=0;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
num2=23;
num3=1;
num=150;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
num2=23;
num3=2;
num=130;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
num2=27;
num3=0;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
num2=28;
num3=0;
num=45;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
num2=28;
num3=1;
num=48;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
num2=28;
num3=2;
num=48;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
num2=28;
num3=3;
num=52;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
num2=28;
num3=4;
num=52;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
num2=28;
num3=5;
num=55;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
num2=28;
num3=6;
num=55;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
num2=28;
num3=7;
num=55;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
num2=28;
num3=8;
num=58;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
num2=28;
num3=9;
num=58;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
num2=28;
num3=10;
num=60;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
num2=28;
num3=11;
num=60;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
num2=28;
num3=12;
num=62;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
num2=28;
num3=13;
num=62;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
num2=28;
num3=14;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
num2=28;
num3=15;
num=65;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=29;
num3=0;
break;
default:
func_173(num6, iParam0, 113, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_222(int iParam0) // Position - 0x28F3A{
if(iParam0 < 60) func_224(iParam0);
else func_223(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_173(3, iParam0, 181, -1);
return;
}


void func_223(int iParam0) // Position - 0x28F6F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=1;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=2;
flag=true;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=3;
flag=true;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=4;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=5;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
num2=14;
num3=0;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
num2=14;
num3=1;
num=120;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
num2=14;
num3=2;
num=120;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
num2=14;
num3=3;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
num2=14;
num3=4;
num=120;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
num2=14;
num3=5;
num=120;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
num2=16;
num3=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
num2=16;
num3=1;
num=20;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
num2=16;
num3=2;
num=24;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
num2=16;
num3=3;
num=22;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
num2=16;
num3=4;
num=25;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
num2=16;
num3=5;
num=25;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
num2=16;
num3=6;
num=22;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
num2=16;
num3=7;
num=27;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
num2=17;
num3=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
num2=17;
num3=1;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
num2=17;
num3=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
num2=17;
num3=3;
num=48;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
num2=17;
num3=4;
num=40;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
num2=17;
num3=5;
num=45;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
num2=19;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
num2=19;
num3=1;
num=190;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
num2=19;
num3=2;
num=190;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
num2=19;
num3=3;
num=190;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
num2=19;
num3=4;
num=210;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
num2=20;
num3=0;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
num2=20;
num3=1;
num=115;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
num2=20;
num3=2;
num=55;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
num2=20;
num3=3;
num=110;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
num2=20;
num3=4;
num=99;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
num2=20;
num3=5;
num=49;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
num2=20;
num3=6;
num=120;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
num2=20;
num3=7;
num=45;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
num2=20;
num3=8;
num=115;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
num2=20;
num3=9;
num=105;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
num2=20;
num3=10;
num=90;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
num2=20;
num3=11;
num=95;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
num2=20;
num3=12;
num=39;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
num2=20;
num3=13;
num=95;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
num2=20;
num3=14;
num=35;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
num2=20;
num3=15;
num=95;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
num2=21;
num3=0;
num=88;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=21;
num3=1;
num=60;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
num2=21;
num3=2;
num=70;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
num2=21;
num3=3;
num=80;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
num2=21;
num3=4;
num=90;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
num2=21;
num3=5;
num=80;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
num2=21;
num3=6;
num=70;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
num2=21;
num3=7;
num=95;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=21;
num3=8;
num=105;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
num2=21;
num3=9;
num=95;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
num2=21;
num3=10;
num=110;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
num2=21;
num3=11;
num=98;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
num2=21;
num3=12;
num=88;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
num2=21;
num3=13;
num=98;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
num2=21;
num3=14;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
num2=21;
num3=15;
num=98;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
num2=22;
num3=0;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=4950;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=4195;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
num2=22;
num3=3;
num=3195;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
num2=22;
num3=4;
num=2950;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
num2=22;
num3=5;
num=3950;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
num2=23;
num3=0;
num=3200;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
num2=23;
num3=1;
num=3200;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
num2=23;
num3=2;
num=3200;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
num2=23;
num3=3;
num=3200;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
num2=23;
num3=4;
num=3200;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
num2=23;
num3=5;
num=3200;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
num2=23;
num3=6;
num=3200;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
num2=23;
num3=7;
num=3200;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
num2=23;
num3=8;
num=3200;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
num2=23;
num3=9;
num=3200;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
num2=23;
num3=10;
num=3200;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
num2=23;
num3=11;
num=3200;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
num2=23;
num3=12;
num=3200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
num2=23;
num3=13;
num=3200;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
num2=23;
num3=14;
num=3200;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
num2=23;
num3=15;
num=3200;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
num2=24;
num3=0;
num=1350;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
num2=24;
num3=1;
num=1400;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
num2=24;
num3=2;
num=1200;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
num2=24;
num3=3;
num=1250;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
num2=24;
num3=4;
num=1350;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
num2=24;
num3=5;
num=1300;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
num2=24;
num3=6;
num=1380;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
num2=24;
num3=7;
num=1340;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
num2=24;
num3=8;
num=1380;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
num2=24;
num3=9;
num=1250;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
num2=25;
num3=0;
num=840;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
num2=25;
num3=1;
num=840;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
num2=25;
num3=2;
num=840;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
num2=25;
num3=3;
num=840;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
num2=25;
num3=4;
num=840;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
num2=25;
num3=5;
num=840;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
num2=25;
num3=6;
num=840;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
num2=25;
num3=7;
num=840;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
num2=26;
num3=0;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
flag=true;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
num2=28;
num3=0;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
num2=28;
num3=1;
num=130;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
num2=28;
num3=2;
num=110;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
num2=29;
num3=0;
flag=true;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
num2=30;
num3=0;
num=290;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
num2=30;
num3=1;
num=320;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
num2=31;
num3=0;
num=59;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
num2=31;
num3=1;
num=55;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
num2=31;
num3=2;
num=59;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
num2=31;
num3=3;
num=49;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_224(int iParam0) // Position - 0x29D0F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
num2=0;
num3=2;
num=3500;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
num=20;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
num=18;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=2;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=3;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
num2=2;
num3=4;
num=19;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
num2=2;
num3=5;
num=20;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
num2=2;
num3=6;
num=22;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
num2=2;
num3=7;
num=18;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
num2=2;
num3=8;
num=39;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
num2=2;
num3=9;
num=32;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
num2=2;
num3=10;
num=35;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
num2=2;
num3=11;
num=35;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
num2=2;
num3=12;
num=210;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
num2=2;
num3=13;
num=250;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
num2=2;
num3=14;
num=290;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
num2=2;
num3=15;
num=310;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
num2=7;
num3=0;
num=150;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
num2=7;
num3=1;
num=160;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
num2=7;
num3=2;
num=150;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
num2=7;
num3=3;
num=150;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
num2=7;
num3=4;
num=160;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
num2=7;
num3=5;
num=160;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
num2=8;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
num2=8;
num3=1;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
num2=8;
num3=2;
num=52;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
num2=8;
num3=3;
num=55;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
num2=8;
num3=4;
num=55;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
num2=8;
num3=5;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
num2=8;
num3=6;
num=58;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
num2=8;
num3=7;
num=62;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
num2=8;
num3=8;
num=65;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
num2=8;
num3=9;
num=65;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
num2=8;
num3=10;
num=68;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
num2=8;
num3=11;
num=68;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
num2=8;
num3=12;
num=55;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
num2=8;
num3=13;
num=62;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
num2=8;
num3=14;
num=58;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
num2=8;
num3=15;
num=58;
break;
default:
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_225(int iParam0) // Position - 0x2A39B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
default:
func_173(num6, iParam0, 6, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_226(int iParam0) // Position - 0x2A482{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_173(num6, iParam0, 7, -1);
return;
}
func_166(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_227() // Position - 0x2A580{
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
return;
}


void func_228(int iParam0, int iParam1) // Position - 0x2A5F9{
if(func_2(iParam0)) STREAMING::REQUEST_MODEL(func_43(iParam0, iParam1));
else iParam0 !=145;
return;
}


void func_229(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x2A620{
int num;
if(bParam6){
if(!CAM::IS_SCREEN_FADED_OUT())if(!CAM::IS_SCREEN_FADING_OUT()) CAM::DO_SCREEN_FADE_OUT(800);
while (!CAM::IS_SCREEN_FADED_OUT()){
SYSTEM::WAIT(0);
}}
MISC::CLEAR_AREA(fParam0, 5f, true, false, false, false);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), fParam0, true, false, false, true);
if(iParam3 !=-1f) ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam3);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
AUDIO::RESET_PED_AUDIO_FLAGS(PLAYER::PLAYER_PED_ID());
}}
SYSTEM::WAIT(0);
MISC::SET_GAME_PAUSED(true);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(fParam0, iParam5, 0);
num=0;
while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && num < iParam4){
num=num + 1;
SYSTEM::WAIT(0);
}
STREAMING::NEW_LOAD_SCENE_STOP();
MISC::CLEAR_AREA(fParam0, 5f, true, false, false, false);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
MISC::SET_GAME_PAUSED(false);
if(bParam6) CAM::DO_SCREEN_FADE_IN(800);
return;
}
BOOL func_230() // Position - 0x2A71A{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}


void func_231() // Position - 0x2A744{
CUTSCENE::REMOVE_CUTSCENE();
Global_43806=0;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_232() // Position - 0x2A758{
Global_100720=1;
return;
}