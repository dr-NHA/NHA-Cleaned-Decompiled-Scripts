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
Ped pedLocal_28=0;
Vehicle veLocal_29=0;
int iLocal_30=0;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
BOOL bLocal_37=0;
var uLocal_38=6;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
BOOL bLocal_45=0;
BOOL bLocal_46=0;
int iLocal_47=0;
Vehicle veLocal_48=0;
BOOL bLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
int iLocal_53=0;
Vehicle veLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
float fLocal_58=0f;
BOOL bLocal_59=0;
var uLocal_60=0;
var uLocal_61=5;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=5;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=5;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
int iLocal_79=0;
BOOL bLocal_80=0;
int iLocal_81=0;
#endregion

void main() // Position - 0x0{
int ms;
int num;
int num2;
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
fLocal_31=10000000f;
uLocal_32={
2134.06f, 4780.69f, 41.664f 
};
iLocal_35=-1;
uLocal_50={
2136.133f, 4780.5635f, 39.9702f 
};
uLocal_55={
2149.737f, 4798.4717f, 40.1071f 
};
fLocal_58=55.4847f;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)) func_194();
func_193(17);
func_192();
ms=0;
num=0;
num2=0;
while (true){
if(func_191()==309) bLocal_37=true;
else bLocal_37=false;
if(func_178()){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) fLocal_31=SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_32);
func_176(&num);
func_31(&num2);
if(iLocal_47 > 3){
if(fLocal_31 < 600f){
if(func_28(0)==false && MISC::GET_GAME_TIMER() - iLocal_81 > 2000){
iLocal_81=MISC::GET_GAME_TIMER();
func_3();
}}}
ms=0;
}else{
if(!bLocal_46){
if(func_2(105)){
func_1(105, false, false);
Global_113648.f_19985.f_14=0;
}}else{
Global_113648.f_19985.f_14=0;
}
if(!bLocal_46){
if(func_2(106)){
func_1(106, false, false);
Global_113648.f_19985.f_13=0;
}}else{
Global_113648.f_19985.f_13=0;
}
ms=1000;
}
SYSTEM::WAIT(ms);
}
return;
}


void func_1(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A4{
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
BOOL func_2(int iParam0) // Position - 0x2A4{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}


void func_3() // Position - 0x2E0{
func_4(&(Global_104212.f_2890), &Global_104212, 0, 1, 1, 0);
return;
}


void func_4(var uParam0, var uParam1, Ped pedParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2FB{
Vehicle vehicle;
if(pedParam2==0) pedParam2=PLAYER::PLAYER_PED_ID();
if(ENTITY::DOES_ENTITY_EXIST(pedParam2)) uParam1->f_5=_GET_PLAYER_CHARACTER_FROM_PED(pedParam2);
if(func_19(pedParam2, &vehicle, iParam3, iParam5)) func_5(uParam0, uParam1, vehicle, iParam4);
elseif(ENTITY::DOES_ENTITY_EXIST(vehicle))if(!ENTITY::IS_ENTITY_DEAD(vehicle, false))if(VEHICLE::IS_VEHICLE_MODEL(vehicle, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, false)) func_5(uParam0, uParam1, vehicle, iParam4);
return;
}

int func_5(var uParam0, var uParam1, Vehicle veParam2, int iParam3) // Position - 0x383{
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam2, false)){
func_7(uParam0, veParam2, iParam3);
uParam1->f_4=veParam2;
if(func_6(veParam2)) uParam1->f_3=1;
else uParam1->f_3=0;
return 1;
}
return 0;
}
BOOL func_6(Vehicle veParam0) // Position - 0x3C3{
int i;
for (i=0;
i <=6;
i=i + 1){
if(Global_100681.f_22[i]==veParam0) return true;
}
return false;
}


void func_7(var uParam0, Vehicle veParam1, int iParam2) // Position - 0x3F1{
func_14(veParam1, &(uParam0->f_12));
uParam0->f_7=func_10(veParam1, _CHAR_NULL, 0);
uParam0->f_11=func_9(veParam1);
if(!uParam0->f_7)if(!uParam0->f_10) uParam0->f_10=func_8(veParam1);
if(iParam2==1){
*uParam0={
ENTITY::GET_ENTITY_COORDS(veParam1, true) 
};
uParam0->f_6=ENTITY::GET_ENTITY_HEADING(veParam1);
uParam0->f_3={
ENTITY::GET_ENTITY_VELOCITY(veParam1) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(veParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0)){
*uParam0={
-1160.0951f, -1515.407f, 3.1496f 
};
uParam0->f_6=305.6424f;
}
if(Global_78253==veParam1) uParam0->f_9=1;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) uParam0->f_8=1;
else uParam0->f_8=0;
return;
}

int func_8(Vehicle veParam0) // Position - 0x4CD{
int i;
for (i=0;
i < 68;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))if(veParam0==Global_77348.f_484[i]) return 1;
}
return 0;
}

int func_9(Vehicle veParam0) // Position - 0x50F{
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

int func_10(Vehicle veParam0, eCharacter echParam1, int iParam2) // Position - 0x572{
int i;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return 0;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return 0;
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))if(Global_98012[i]==veParam0)if(echParam1==_CHAR_NULL || echParam1==Global_98022[i])if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(veParam0)==func_11(echParam1, iParam2)) return 1;
}
return 0;
}
Hash func_11(eCharacter echParam0, int iParam1) // Position - 0x600{
int num;
if(func_13(echParam0)){
num.f_11=12;
num.f_31=49;
num.f_81=2;
func_12(echParam0, &num, iParam1);
return num;
}else{
echParam0 !=_CHAR_NULL;
}
return 0;
}


void func_12(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x642{
int num;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (echParam0){
case CHAR_MICHAEL:
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
case CHAR_TREVOR:
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
case CHAR_FRANKLIN:
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
BOOL func_13(eCharacter echParam0) // Position - 0x898{
return echParam0 < CHAR_MULTIPLAYER;
}


void func_14(Vehicle veParam0, var uParam1) // Position - 0x8A4{
int i;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
func_18(uParam1);
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
if(uParam1->f_65==-1 && !func_17(uParam1->f_66)) uParam1->f_65=0;
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
func_16(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
for (i=0;
i <=11;
i=i + 1){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1)) MISC::SET_BIT(&(uParam1->f_77), func_15(i + 1));
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0)) MISC::SET_BIT(&(uParam1->f_77), 11);
else MISC::CLEAR_BIT(&(uParam1->f_77), 11);
if(DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave")) MISC::SET_BIT(&(uParam1->f_77), 27);
else MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}
return;
}

int func_15(int iParam0) // Position - 0xB4D{
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

int func_16(var uParam0, var uParam1, var uParam2) // Position - 0xBFD{
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
BOOL func_17(int iParam0) // Position - 0xDF0{
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return true;
default:
}
return false;
}


void func_18(var uParam0) // Position - 0xE10{
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
BOOL func_19(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0xEC0{
const char* thisScriptName;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
if(!PED::IS_PED_INJURED(pedParam0)){
if(pedParam0==PLAYER::PLAYER_PED_ID()) *uParam1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
else *uParam1=PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false)){
if(iParam2==0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 100f){
if(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) !=pedParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) !=0) return false;
if(func_20(*uParam1, _GET_CURRENT_PLAYER_CHARACTER(), true)){
thisScriptName=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::ARE_STRINGS_EQUAL(thisScriptName, "save_anywhere")) return false;
elseif(!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true)) return false;
}
if(iParam3==1)if(DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))if(unk_0x8FA309E9ECEE409A(*uParam1, "IgnoredByQuickSave")) return false;
elseif(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp"))) return false;
return true;
}}}}}
return false;
}
BOOL func_20(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0xFEC{
int i;
var garageName;
int num;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
for (i=0;
func_21(echParam1, i, &garageName, &num);
i=i + 1){
if(!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0)) return true;
}
return false;
}
BOOL func_21(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x105A{
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
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x112B{
func_23();
return Global_113648.f_2365.f_539.f_4321;
}


void func_23() // Position - 0x1144{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_13(character) && !func_24(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_13(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_24(int iParam0) // Position - 0x1241{
return Global_43257==iParam0;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x124F{
if(func_13(character)) return func_26(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_26(eCharacter echParam0) // Position - 0x1274{
return Global_2028[echParam0 /*29*/];
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1283{
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
BOOL func_28(int iParam0) // Position - 0x12C0{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x12E2{
return func_30(iParam0, Global_43257);
}
BOOL func_30(int iParam0, int iParam1) // Position - 0x12F3{
if(iParam1==15) return 1;
if(iParam0==15) return 0;
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
}
return 1;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
}
break;
case 4:
if(iParam1==17) return 1;
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5) return 1;
break;
case 7:
if(iParam1==6) return 1;
break;
case 9:
if(iParam1==5) return 1;
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
}
break;
case 11:
if(iParam1==5) return 1;
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
}
break;
}
return 0;
}


void func_31(var uParam0) // Position - 0x14D4{
BOOL flag;
Vehicle vehiclePedIsUsing;
Vehicle vehiclePedIsUsing2;
int num;
struct<97> args;
int num2;
flag=false;
if(iLocal_53 !=9){
if(!Global_113648.f_19985.f_13){
if(Global_113648.f_19985.f_1==0 && Global_113648.f_19985.f_2==0){
if(!func_175(Global_113648.f_19985, 32)){
func_172("MG_TRAF_AVAIL" /*Trevor can now do air and ground trafficking missions, available at ~BLIP_ARMS_DEALING_AIR~ and ~BLIP_ARMS_DEALING~*/, 0, 0, -1, 10000, 7, 0, 0, 0);
func_170(&(Global_113648.f_19985), 32);
}}
func_1(106, true, false);
Global_113648.f_19985.f_13=1;
flag=true;
}else{
flag=true;
}}else{
func_1(106, false, false);
Global_113648.f_19985.f_13=0;
}
if(iLocal_53 !=1 && iLocal_53 !=8){
if(func_169() && !*uParam0){
func_168(false);
iLocal_53=1;
}}
switch (iLocal_53){
case 0:
iLocal_53=1;
break;
case 1:
if(!func_169())if(fLocal_31 < 50625f) iLocal_53=2;
elseif(bLocal_37) iLocal_53=2;
break;
case 2:
STREAMING::REQUEST_MODEL(joaat("dune"));
iLocal_53=3;
break;
case 3:
if(STREAMING::HAS_MODEL_LOADED(joaat("dune"))){
MISC::CLEAR_AREA_OF_VEHICLES(uLocal_55, 4f, false, false, false, false, false, false, 0);
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54)) VEHICLE::DELETE_VEHICLE(&veLocal_54);
veLocal_54=VEHICLE::CREATE_VEHICLE(func_167(), uLocal_55, fLocal_58, true, true, false);
AUDIO::SET_VEHICLE_RADIO_ENABLED(veLocal_54, false);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_167());
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54)){
if(VEHICLE::DOES_EXTRA_EXIST(veLocal_54, 1)) VEHICLE::SET_VEHICLE_EXTRA(veLocal_54, 1, true);
if(VEHICLE::DOES_EXTRA_EXIST(veLocal_54, 2)) VEHICLE::SET_VEHICLE_EXTRA(veLocal_54, 2, false);
if(VEHICLE::DOES_EXTRA_EXIST(veLocal_54, 3)) VEHICLE::SET_VEHICLE_EXTRA(veLocal_54, 3, false);
VEHICLE::SET_VEHICLE_COLOURS(veLocal_54, 0, 0);
}
iLocal_53=4;
}
break;
case 5:
if(fLocal_31 >=50625f && !*uParam0){
func_168(false);
iLocal_53=1;
return;
}
break;
case 4:
func_166();
if(!bLocal_37){
if(fLocal_31 >=50625f && !*uParam0){
func_168(false);
iLocal_53=1;
return;
}}
if(!flag && !*uParam0){
!flag;
!*uParam0;
if(!bLocal_59){
if(PED::IS_PED_IN_ANY_VEHICLE(pedLocal_28, false)){
vehiclePedIsUsing=PED::GET_VEHICLE_PED_IS_USING(pedLocal_28);
if(vehiclePedIsUsing==veLocal_54){
bLocal_59=true;
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_54);
iLocal_53=9;
}}}
return;
}
if(*uParam0)if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(veLocal_54, false)) PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_54, -1);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(veLocal_54, false))if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_54, true)) func_165();
if(!ENTITY::IS_ENTITY_DEAD(veLocal_54, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsUsing2=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(vehiclePedIsUsing2==veLocal_54){
if(SYSTEM::VDIST2(uLocal_55, ENTITY::GET_ENTITY_COORDS(pedLocal_28, true)) < 100f){
SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
if(ENTITY::DOES_ENTITY_EXIST(veLocal_29) && !ENTITY::IS_ENTITY_DEAD(veLocal_29, false))if(ENTITY::GET_ENTITY_MODEL(veLocal_29) !=joaat("dune") && ENTITY::GET_ENTITY_MODEL(veLocal_29) !=joaat("cuban800")) func_138(veLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, false);
elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) VEHICLE::SET_PLAYERS_LAST_VEHICLE(veLocal_29);
iLocal_53=6;
}}}}
break;
case 6:
if(SCRIPT::HAS_SCRIPT_LOADED("Traffick_Ground")){
num=0;
if(*uParam0){
num=1;
}else{
num=func_136(&iLocal_35, 6, 9, false, 0);
bLocal_45=true;
}
if(num==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
if(!*uParam0) func_84("Traffick_Ground", 0);
args=-1;
args.f_8=4;
args.f_13=2;
args.f_16=4;
args.f_29=4;
args.f_61=9;
args.f_71=4;
args.f_76=8;
args.f_85=4;
args.f_90=6;
iLocal_30=SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &args, 97, 54000);
func_81(16);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Ground");
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_54, true, false);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_54);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(Global_44446==true) func_72(PLAYER::PLAYER_PED_ID());
bLocal_59=false;
iLocal_53=7;
}elseif(num==0){
bLocal_45=false;
func_168(false);
iLocal_53=9;
}}
break;
case 7:
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_30)){
iLocal_53=9;
if(func_175(Global_112299, 2)){
iLocal_53=8;
}else{
func_71(&iLocal_35);
func_54();
iLocal_36=1;
num2=func_53();
func_45(&num2, 0, 0, 3, 0, 0, 0);
Global_113648.f_19985.f_12=num2;
func_1(106, false, false);
Global_113648.f_19985.f_13=0;
}
*uParam0=0;
func_43(&Global_112299, 2);
}
break;
case 8:
if(Global_100681==10){
if(Global_100715){
*uParam0=1;
SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
iLocal_53=2;
}else{
*uParam0=0;
iLocal_53=2;
}}elseif(Global_100681==13){
func_71(&iLocal_35);
func_54();
*uParam0=0;
iLocal_53=2;
}
break;
case 9:
if(fLocal_31 >=50625f && func_32(Global_113648.f_19985.f_12)){
func_168(false);
iLocal_53=1;
}
break;
default:
break;
}
return;
}
BOOL func_32(int iParam0) // Position - 0x1A36{
return func_33(func_53(), iParam0);
}
BOOL func_33(int iParam0, int iParam1) // Position - 0x1A48{
int num;
int num2;
if(!func_41(iParam1) || !func_41(iParam0)) return 1;
num=func_39(iParam0);
num2=func_39(iParam1);
if(num > num2) return 1;
elseif(num < num2) return 0;
num=func_38(iParam0);
num2=func_38(iParam1);
if(num > num2) return 1;
elseif(num < num2) return 0;
num=func_37(iParam0);
num2=func_37(iParam1);
if(num > num2) return 1;
elseif(num < num2) return 0;
num=func_36(iParam0);
num2=func_36(iParam1);
if(num > num2) return 1;
elseif(num < num2) return 0;
num=func_35(iParam0);
num2=func_35(iParam1);
if(num > num2) return 1;
elseif(num < num2) return 0;
num=func_34(iParam0);
num2=func_34(iParam1);
if(num > num2) return 1;
return 0;
}

int func_34(int iParam0) // Position - 0x1B54{
return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_35(int iParam0) // Position - 0x1B67{
return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_36(int iParam0) // Position - 0x1B7A{
return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_37(int iParam0) // Position - 0x1B8D{
return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_38(int iParam0) // Position - 0x1B9F{
return iParam0 & 15;
}

int func_39(int iParam0) // Position - 0x1BAC{
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 :
1) + 2011;
}


var func__40(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1BCE{
if(bParam0) return uParam1;
return uParam2;
}
BOOL func_41(int iParam0) // Position - 0x1BE5{
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
if(iParam0==-15) return false;
num=func_34(iParam0);
if(num < 0 || num >=60) return false;
num2=func_35(iParam0);
if(num2 < 0 || num2 >=60) return false;
num3=func_36(iParam0);
if(num3 < 0 || num3 > 23) return false;
num4=func_39(iParam0);
if(num4 <=0 || num4 > 2043 || num4 < 1979) return false;
num5=func_38(iParam0);
if(num5 < 0 || num5 > 11) return false;
num6=func_37(iParam0);
if(num6 < 1 || num6 > func_42(num5, num4)) return false;
return true;
}

int func_42(int iParam0, int iParam1) // Position - 0x1CC1{
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


void func_43(int iParam0, int iParam1) // Position - 0x1D63{
func_44(iParam0, iParam1);
return;
}


void func_44(int iParam0, int iParam1) // Position - 0x1D73{
*iParam0=*iParam0 - *iParam0 && iParam1;
return;
}


void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1D88{
int num;
int i;
int num2;
int j;
int k;
int l;
int m;
num=func_39(*uParam0);
i=func_38(*uParam0);
num2=func_37(*uParam0);
j=func_36(*uParam0);
k=func_35(*uParam0);
l=func_34(*uParam0);
if(iParam6==0 && iParam5==0 && iParam4==0 && iParam3==0 && iParam2==0 && iParam1==0) return;
if(iParam1 < 0) return;
if(iParam2 < 0) return;
if(iParam3 < 0) return;
if(iParam4 < 0) return;
if(iParam5 < 0) return;
if(iParam6 < 0) return;
for (l=l + iParam1;
l >=60;
l=l - 60){
iParam2=iParam2 + 1;
}
for (k=k + iParam2;
k >=60;
k=k - 60){
iParam3=iParam3 + 1;
}
for (j=j + iParam3;
j >=24;
j=j - 24){
iParam4=iParam4 + 1;
}
num2=num2 + iParam4;
for (m=func_42(i, num);
num2 > m;
m=func_42(i, num)){
i=i + 1;
num2=num2 - m;
if(i > 11){
num=num + 1;
i=i - 12;
}}
for (i=i + iParam5;
i > 11;
i=i - 12){
iParam6=iParam6 + 1;
}
num=num + iParam6;
func_46(uParam0, l, k, j, num2, i, num);
return;
}


void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1F0A{
func_52(uParam0, iParam1);
func_51(uParam0, iParam2);
func_50(uParam0, iParam3);
func_49(uParam0, iParam5);
func_48(uParam0, iParam4);
func_47(uParam0, iParam6);
return;
}


void func_47(var uParam0, int iParam1) // Position - 0x1F42{
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


void func_48(var uParam0, int iParam1) // Position - 0x1FC8{
int num;
int num2;
num=func_38(*uParam0);
num2=func_39(*uParam0);
if(iParam1 < 1 || iParam1 > func_42(num, num2)) return;
*uParam0=*uParam0 - *uParam0 & 496;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
return;
}


void func_49(var uParam0, int iParam1) // Position - 0x2019{
if(iParam1 < 0 || iParam1 > 11) return;
*uParam0=*uParam0 - *uParam0 & 15;
*uParam0=*uParam0 || iParam1;
return;
}


void func_50(var uParam0, int iParam1) // Position - 0x204C{
if(iParam1 < 0 || iParam1 > 24) return;
*uParam0=*uParam0 - *uParam0 & 15872;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
return;
}


void func_51(var uParam0, int iParam1) // Position - 0x2086{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 1032192;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
return;
}


void func_52(var uParam0, int iParam1) // Position - 0x20C1{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 66060288;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
return;
}

int func_53() // Position - 0x20FD{
var unk;
func_52(&unk, CLOCK::GET_CLOCK_SECONDS());
func_51(&unk, CLOCK::GET_CLOCK_MINUTES());
func_50(&unk, CLOCK::GET_CLOCK_HOURS());
func_48(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_49(&unk, CLOCK::GET_CLOCK_MONTH());
func_47(&unk, CLOCK::GET_CLOCK_YEAR());
return unk;
}


void func_54() // Position - 0x2143{
func_70();
func_63();
func_59();
func_58();
func_57();
func_56();
Global_100718=0;
Global_94856=-1;
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
Global_100716=0;
MISC::PAUSE_DEATH_ARREST_RESTART(false);
MISC::IGNORE_NEXT_RESTART(false);
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
MISC::SET_FADE_OUT_AFTER_ARREST(true);
MISC::SET_FADE_OUT_AFTER_DEATH(true);
func_55(0);
return;
}


void func_55(int iParam0) // Position - 0x219C{
if(iParam0==1) MISC::SET_BIT(&(Global_100681.f_20), 13);
else MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
return;
}


void func_56() // Position - 0x21C5{
Global_78799={
0f, 0f, 0f 
};
Global_78802=0f;
Global_100681.f_21=145;
return;
}


void func_57() // Position - 0x21E3{
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "", 16);
TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
return;
}


void func_58() // Position - 0x21FD{
int i;
for (i=0;
i <=6;
i=i + 1){
Global_100681.f_22[i]=0;
}
return;
}


void func_59() // Position - 0x2222{
Global_100681=13;
Global_100681.f_1=-1;
Global_100681.f_2=0;
Global_100681.f_30=0f;
MISC::CLEAR_BIT(&(Global_100681.f_20), 25);
Global_100715=false;
func_62(0);
func_61();
func_60();
Global_100681.f_18=-1;
Global_100681.f_19=-1;
return;
}


void func_60() // Position - 0x2271{
MISC::CLEAR_BIT(&(Global_100681.f_20), 22);
MISC::CLEAR_BIT(&(Global_100681.f_20), 8);
return;
}


void func_61() // Position - 0x2291{
if(Global_100681.f_16 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_16));
Global_100681.f_16=0;
}
if(Global_100681.f_17 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_17));
Global_100681.f_17=0;
}
return;
}


void func_62(int iParam0) // Position - 0x22CF{
if(iParam0==1) Global_43806=1;
else Global_43806=0;
return;
}


void func_63() // Position - 0x22E8{
func_64(&Global_107196);
return;
}


void func_64(var uParam0) // Position - 0x22F8{
int i;
int j;
*uParam0=145;
func_69(&(uParam0->f_1));
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=0f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=145;
for (j=0;
j < 3;
j=j + 1){
uParam0->f_9[j]=-1;
uParam0->f_13[j]=0;
uParam0->f_17[j]=0;
uParam0->f_21[j]=0;
func_68(&uParam0->f_25[0 /*295*/][j /*98*/]);
func_68(&uParam0->f_25[1 /*295*/][j /*98*/]);
for (i=0;
i < 12;
i=i + 1){
uParam0->f_616[j /*65*/][i]=-1;
uParam0->f_616[j /*65*/].f_13[i]=-1;
uParam0->f_616[j /*65*/].f_26[i]=-1;
}
uParam0->f_616[j /*65*/].f_59=0;
uParam0->f_616[j /*65*/].f_60=-99;
uParam0->f_616[j /*65*/].f_61=2;
uParam0->f_616[j /*65*/].f_62=0;
uParam0->f_616[j /*65*/].f_63=-99;
uParam0->f_616[j /*65*/].f_64=1;
for (i=0;
i < 9;
i=i + 1){
uParam0->f_616[j /*65*/].f_39[i]=-1;
uParam0->f_616[j /*65*/].f_49[i]=-1;
}
for (i=0;
i < 44;
i=i + 1){
uParam0->f_812[j /*477*/][i /*5*/].f_1=0;
uParam0->f_812[j /*477*/][i /*5*/].f_2=0;
uParam0->f_812[j /*477*/][i /*5*/].f_3=0;
uParam0->f_812[j /*477*/][i /*5*/].f_4=0;
uParam0->f_812[j /*477*/][i /*5*/]=0;
}
for (i=0;
i < 51;
i=i + 1){
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_1=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_2=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_3=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_4=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/]=0;
}
for (i=0;
i < 4;
i=i + 1){
uParam0->f_2244[j /*32*/][i]=0;
}
for (i=0;
i < 10;
i=i + 1){
uParam0->f_2244[j /*32*/].f_5[i]=0;
}
for (i=0;
i < 15;
i=i + 1){
uParam0->f_2244[j /*32*/].f_16[i]=0;
}
uParam0->f_2341[j]=0;
for (i=0;
i <=3;
i=i + 1){
uParam0->f_2838[j /*15*/][i]=0;
uParam0->f_2838[j /*15*/].f_5[i]=0;
uParam0->f_2838[j /*15*/].f_10[i]=0;
}
for (i=0;
i <=2;
i=i + 1){
uParam0->f_2345[j /*164*/][i]=0;
uParam0->f_2345[j /*164*/].f_4[i]=0;
uParam0->f_2345[j /*164*/].f_8[i]=0;
uParam0->f_2345[j /*164*/].f_12[i]=0;
uParam0->f_2345[j /*164*/].f_16[i]=0;
uParam0->f_2345[j /*164*/].f_20[i]=0;
uParam0->f_2345[j /*164*/].f_24[i]=0;
uParam0->f_2345[j /*164*/].f_28[i]=0;
uParam0->f_2345[j /*164*/].f_32[i]=0;
uParam0->f_2345[j /*164*/].f_36[i]=0;
uParam0->f_2345[j /*164*/].f_40[i]=0;
uParam0->f_2345[j /*164*/].f_44[i]=0;
uParam0->f_2345[j /*164*/].f_48[i]=0;
uParam0->f_2345[j /*164*/].f_52[i]=0;
uParam0->f_2345[j /*164*/].f_56[i]=0;
uParam0->f_2345[j /*164*/].f_60[i]=0;
uParam0->f_2345[j /*164*/].f_64[i]=0;
uParam0->f_2345[j /*164*/].f_68[i]=0;
uParam0->f_2345[j /*164*/].f_72[i]=0;
uParam0->f_2345[j /*164*/].f_76[i]=0;
uParam0->f_2345[j /*164*/].f_80[i]=0;
uParam0->f_2345[j /*164*/].f_84[i]=0;
uParam0->f_2345[j /*164*/].f_88[i]=0;
uParam0->f_2345[j /*164*/].f_92[i]=0;
uParam0->f_2345[j /*164*/].f_96[i]=0;
uParam0->f_2345[j /*164*/].f_100[i]=0;
uParam0->f_2345[j /*164*/].f_104[i]=0;
uParam0->f_2345[j /*164*/].f_108[i]=0;
uParam0->f_2345[j /*164*/].f_112[i]=0;
uParam0->f_2345[j /*164*/].f_116[i]=0;
uParam0->f_2345[j /*164*/].f_120[i]=0;
uParam0->f_2345[j /*164*/].f_124[i]=0;
uParam0->f_2345[j /*164*/].f_128[i]=0;
uParam0->f_2345[j /*164*/].f_132[i]=0;
uParam0->f_2345[j /*164*/].f_136[i]=0;
uParam0->f_2345[j /*164*/].f_140[i]=0;
uParam0->f_2345[j /*164*/].f_144[i]=0;
uParam0->f_2345[j /*164*/].f_148[i]=0;
uParam0->f_2345[j /*164*/].f_152[i]=0;
uParam0->f_2345[j /*164*/].f_156[i]=0;
uParam0->f_2345[j /*164*/].f_160[i]=0;
}}
func_67(&(uParam0->f_2884));
func_66(&(uParam0->f_2890));
func_65(&(uParam0->f_2980));
return;
}


void func_65(var uParam0) // Position - 0x2888{
*uParam0=-1;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
return;
}


void func_66(var uParam0) // Position - 0x28A3{
func_18(&(uParam0->f_12));
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3={
0f, 0f, 0f 
};
uParam0->f_6=0f;
uParam0->f_8=0;
uParam0->f_9=0;
return;
}


void func_67(var uParam0) // Position - 0x28D2{
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
uParam0->f_5=-1;
return;
}


void func_68(var uParam0) // Position - 0x28F0{
int i;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
for (i=0;
i <=11;
i=i + 1){
uParam0->f_11[i]=0;
}
uParam0->f_24=0;
uParam0->f_25=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_27), "", 16);
for (i=0;
i <=48;
i=i + 1){
uParam0->f_31[i]=0;
}
for (i=0;
i <=1;
i=i + 1){
uParam0->f_81[i]=0;
}
uParam0->f_84=0;
uParam0->f_85=0;
uParam0->f_86=0;
uParam0->f_87=0;
uParam0->f_88=0;
uParam0->f_89=0;
uParam0->f_90=0;
uParam0->f_91=0;
uParam0->f_93=0;
uParam0->f_94=0;
uParam0->f_95=0;
uParam0->f_92=0;
return;
}


void func_69(var uParam0) // Position - 0x29D0{
*uParam0=-15;
return;
}


void func_70() // Position - 0x29DE{
TEXT_LABEL_ASSIGN_STRING(&Global_104204, "", 32);
func_64(&Global_104212);
return;
}


void func_71(var uParam0) // Position - 0x29F7{
if(*uParam0==-1) return;
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
return;
}


void func_72(Ped pedParam0) // Position - 0x2A34{
int num;
int num2;
int num3;
if(pedParam0==0) return;
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return;
num=func_80(pedParam0);
if(!num==-1){
num2=Global_44232[num /*5*/];
func_75(1, num2, 1);
return;
}
num3=func_74(pedParam0);
if(num3==-1) return;
func_73(num3);
return;
}


void func_73(int iParam0) // Position - 0x2A8D{
if(iParam0 < 0 || iParam0 >=5) return;
if(!Global_44206[iParam0 /*5*/].f_1==0)if(Global_44206[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()) Global_44444=0;
Global_44206[iParam0 /*5*/]=13;
Global_44206[iParam0 /*5*/].f_1=0;
Global_44206[iParam0 /*5*/].f_2=0;
Global_44206[iParam0 /*5*/].f_3=0;
Global_44206[iParam0 /*5*/].f_4=0;
Global_44204=Global_44204 - 1;
if(Global_44204 < 0) Global_44204=0;
return;
}

int func_74(Ped pedParam0) // Position - 0x2B10{
int i;
i=0;
for (i=0;
i < 5;
i=i + 1){
if(Global_44206[i /*5*/].f_1==pedParam0) return i;
}
return -1;
}


void func_75(int iParam0, int iParam1, int iParam2) // Position - 0x2B41{
func_76(iParam0, iParam1, iParam2, 0, 0, 1);
return;
}


void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2B56{
int num;
if(iParam0==-1) return;
if(iParam1==-1) return;
if(iParam2==6) return;
if(func_78(iParam0, iParam1, iParam2)) return;
num=func_77();
if(num==-1) return;
Global_44313[num /*6*/]=iParam0;
Global_44313[num /*6*/].f_1=iParam1;
Global_44313[num /*6*/].f_2=iParam2;
Global_44313[num /*6*/].f_3=iParam3;
Global_44313[num /*6*/].f_4=iParam4;
Global_44313[num /*6*/].f_5=iParam5;
return;
}

int func_77() // Position - 0x2BD8{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(Global_44313[i /*6*/].f_2==6) return i;
}
return -1;
}
BOOL func_78(int iParam0, int iParam1, int iParam2) // Position - 0x2C09{
if(func_79(iParam0, iParam1, iParam2)==-1) return false;
return true;
}

int func_79(int iParam0, int iParam1, int iParam2) // Position - 0x2C24{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(iParam2==Global_44313[i /*6*/].f_2)if(iParam0==Global_44313[i /*6*/])if(iParam1==Global_44313[i /*6*/].f_1) return i;
}
return -1;
}

int func_80(Ped pedParam0) // Position - 0x2C70{
int i;
if(pedParam0==0) return -1;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(!Global_44232[i /*5*/]==-1)if(pedParam0==Global_44232[i /*5*/].f_1) return i;
}
return -1;
}


void func_81(int iParam0) // Position - 0x2CB9{
int num;
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_83()){
num=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_82()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
}
return;
}
BOOL func_82() // Position - 0x2D10{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_83() // Position - 0x2D26{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_84(const char* sParam0, int iParam1) // Position - 0x2D3C{
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
func_85(sParam0, iParam1, 0);
return;
}


void func_85(const char* sParam0, int iParam1, Ped pedParam2) // Position - 0x2D59{
if(Global_100681 !=10 && Global_100681 !=9){
TEXT_LABEL_ASSIGN_STRING(&Global_104204, sParam0, 32);
func_87(&Global_104212, sParam0, 0, "Start", iParam1, pedParam2);
func_86();
Global_94859=0;
}
return;
}


void func_86() // Position - 0x2D9D{
int i;
int j;
Global_107196=Global_104212;
Global_107196.f_1=Global_104212.f_1;
Global_107196.f_6=Global_104212.f_6;
Global_107196.f_7=Global_104212.f_7;
Global_107196.f_8=Global_104212.f_8;
Global_107196.f_2=Global_104212.f_2;
Global_107196.f_3=Global_104212.f_3;
Global_107196.f_4=Global_104212.f_4;
Global_107196.f_5=Global_104212.f_5;
for (j=0;
j < 3;
j=j + 1){
Global_107196.f_9[j]=Global_104212.f_9[j];
Global_107196.f_13[j]=Global_104212.f_13[j];
Global_107196.f_17[j]=Global_104212.f_17[j];
Global_107196.f_21[j]=Global_104212.f_21[j];
Global_107196.f_25[0 /*295*/][j /*98*/]={
Global_104212.f_25[0 /*295*/][j /*98*/] 
};
Global_107196.f_25[1 /*295*/][j /*98*/]={
Global_104212.f_25[1 /*295*/][j /*98*/] 
};
for (i=0;
i < 12;
i=i + 1){
Global_107196.f_616[j /*65*/][i]=Global_104212.f_616[j /*65*/][i];
Global_107196.f_616[j /*65*/].f_13[i]=Global_104212.f_616[j /*65*/].f_13[i];
Global_107196.f_616[j /*65*/].f_26[i]=Global_104212.f_616[j /*65*/].f_26[i];
}
Global_107196.f_616[j /*65*/].f_59=Global_104212.f_616[j /*65*/].f_59;
Global_107196.f_616[j /*65*/].f_60=Global_104212.f_616[j /*65*/].f_60;
Global_107196.f_616[j /*65*/].f_61=Global_104212.f_616[j /*65*/].f_61;
Global_107196.f_616[j /*65*/].f_62=Global_104212.f_616[j /*65*/].f_62;
Global_107196.f_616[j /*65*/].f_63=Global_104212.f_616[j /*65*/].f_63;
Global_107196.f_616[j /*65*/].f_64=Global_104212.f_616[j /*65*/].f_64;
for (i=0;
i < 9;
i=i + 1){
Global_107196.f_616[j /*65*/].f_39[i]=Global_104212.f_616[j /*65*/].f_39[i];
Global_107196.f_616[j /*65*/].f_49[i]=Global_104212.f_616[j /*65*/].f_49[i];
}
for (i=0;
i < 44;
i=i + 1){
Global_107196.f_812[j /*477*/][i /*5*/]={
Global_104212.f_812[j /*477*/][i /*5*/] 
};
}
for (i=0;
i < 51;
i=i + 1){
Global_107196.f_812[j /*477*/].f_221[i /*5*/]={
Global_104212.f_812[j /*477*/].f_221[i /*5*/] 
};
}
for (i=0;
i < 4;
i=i + 1){
Global_107196.f_2244[j /*32*/][i]=Global_104212.f_2244[j /*32*/][i];
}
for (i=0;
i < 10;
i=i + 1){
Global_107196.f_2244[j /*32*/].f_5[i]=Global_104212.f_2244[j /*32*/].f_5[i];
}
for (i=0;
i < 15;
i=i + 1){
Global_107196.f_2244[j /*32*/].f_16[i]=Global_104212.f_2244[j /*32*/].f_16[i];
}
Global_107196.f_2341[j]=Global_104212.f_2341[j];
for (i=0;
i <=3;
i=i + 1){
Global_107196.f_2838[j /*15*/][i]=Global_104212.f_2838[j /*15*/][i];
Global_107196.f_2838[j /*15*/].f_5[i]=Global_104212.f_2838[j /*15*/].f_5[i];
Global_107196.f_2838[j /*15*/].f_10[i]=Global_104212.f_2838[j /*15*/].f_10[i];
}
for (i=0;
i <=2;
i=i + 1){
Global_107196.f_2345[j /*164*/][i]=Global_104212.f_2345[j /*164*/][i];
Global_107196.f_2345[j /*164*/].f_4[i]=Global_104212.f_2345[j /*164*/].f_4[i];
Global_107196.f_2345[j /*164*/].f_8[i]=Global_104212.f_2345[j /*164*/].f_8[i];
Global_107196.f_2345[j /*164*/].f_12[i]=Global_104212.f_2345[j /*164*/].f_12[i];
Global_107196.f_2345[j /*164*/].f_16[i]=Global_104212.f_2345[j /*164*/].f_16[i];
Global_107196.f_2345[j /*164*/].f_20[i]=Global_104212.f_2345[j /*164*/].f_20[i];
Global_107196.f_2345[j /*164*/].f_24[i]=Global_104212.f_2345[j /*164*/].f_24[i];
Global_107196.f_2345[j /*164*/].f_28[i]=Global_104212.f_2345[j /*164*/].f_28[i];
Global_107196.f_2345[j /*164*/].f_32[i]=Global_104212.f_2345[j /*164*/].f_32[i];
Global_107196.f_2345[j /*164*/].f_36[i]=Global_104212.f_2345[j /*164*/].f_36[i];
Global_107196.f_2345[j /*164*/].f_40[i]=Global_104212.f_2345[j /*164*/].f_40[i];
Global_107196.f_2345[j /*164*/].f_44[i]=Global_104212.f_2345[j /*164*/].f_44[i];
Global_107196.f_2345[j /*164*/].f_48[i]=Global_104212.f_2345[j /*164*/].f_48[i];
Global_107196.f_2345[j /*164*/].f_52[i]=Global_104212.f_2345[j /*164*/].f_52[i];
Global_107196.f_2345[j /*164*/].f_56[i]=Global_104212.f_2345[j /*164*/].f_56[i];
Global_107196.f_2345[j /*164*/].f_60[i]=Global_104212.f_2345[j /*164*/].f_60[i];
Global_107196.f_2345[j /*164*/].f_64[i]=Global_104212.f_2345[j /*164*/].f_64[i];
Global_107196.f_2345[j /*164*/].f_68[i]=Global_104212.f_2345[j /*164*/].f_68[i];
Global_107196.f_2345[j /*164*/].f_72[i]=Global_104212.f_2345[j /*164*/].f_72[i];
Global_107196.f_2345[j /*164*/].f_76[i]=Global_104212.f_2345[j /*164*/].f_76[i];
Global_107196.f_2345[j /*164*/].f_80[i]=Global_104212.f_2345[j /*164*/].f_80[i];
Global_107196.f_2345[j /*164*/].f_84[i]=Global_104212.f_2345[j /*164*/].f_84[i];
Global_107196.f_2345[j /*164*/].f_88[i]=Global_104212.f_2345[j /*164*/].f_88[i];
Global_107196.f_2345[j /*164*/].f_92[i]=Global_104212.f_2345[j /*164*/].f_92[i];
Global_107196.f_2345[j /*164*/].f_96[i]=Global_104212.f_2345[j /*164*/].f_96[i];
Global_107196.f_2345[j /*164*/].f_100[i]=Global_104212.f_2345[j /*164*/].f_100[i];
Global_107196.f_2345[j /*164*/].f_104[i]=Global_104212.f_2345[j /*164*/].f_104[i];
Global_107196.f_2345[j /*164*/].f_108[i]=Global_104212.f_2345[j /*164*/].f_108[i];
Global_107196.f_2345[j /*164*/].f_112[i]=Global_104212.f_2345[j /*164*/].f_112[i];
Global_107196.f_2345[j /*164*/].f_116[i]=Global_104212.f_2345[j /*164*/].f_116[i];
Global_107196.f_2345[j /*164*/].f_120[i]=Global_104212.f_2345[j /*164*/].f_120[i];
Global_107196.f_2345[j /*164*/].f_124[i]=Global_104212.f_2345[j /*164*/].f_124[i];
Global_107196.f_2345[j /*164*/].f_128[i]=Global_104212.f_2345[j /*164*/].f_128[i];
Global_107196.f_2345[j /*164*/].f_132[i]=Global_104212.f_2345[j /*164*/].f_132[i];
Global_107196.f_2345[j /*164*/].f_136[i]=Global_104212.f_2345[j /*164*/].f_136[i];
Global_107196.f_2345[j /*164*/].f_140[i]=Global_104212.f_2345[j /*164*/].f_140[i];
Global_107196.f_2345[j /*164*/].f_144[i]=Global_104212.f_2345[j /*164*/].f_144[i];
Global_107196.f_2345[j /*164*/].f_148[i]=Global_104212.f_2345[j /*164*/].f_148[i];
Global_107196.f_2345[j /*164*/].f_152[i]=Global_104212.f_2345[j /*164*/].f_152[i];
Global_107196.f_2345[j /*164*/].f_156[i]=Global_104212.f_2345[j /*164*/].f_156[i];
Global_107196.f_2345[j /*164*/].f_160[i]=Global_104212.f_2345[j /*164*/].f_160[i];
}}
Global_107196.f_2884={
Global_104212.f_2884 
};
Global_107196.f_2884.f_3=Global_104212.f_2884.f_3;
Global_107196.f_2890={
Global_104212.f_2890 
};
Global_107196.f_2890.f_3={
Global_104212.f_2890.f_3 
};
Global_107196.f_2890.f_6=Global_104212.f_2890.f_6;
Global_107196.f_2890.f_8=Global_107196.f_2890.f_8;
Global_107196.f_2890.f_7=Global_104212.f_2890.f_7;
Global_107196.f_2890.f_9=Global_104212.f_2890.f_9;
Global_107196.f_2890.f_11=Global_104212.f_2890.f_11;
Global_107196.f_2890.f_10=Global_104212.f_2890.f_10;
Global_107196.f_2890.f_12=Global_104212.f_2890.f_12;
Global_107196.f_2890.f_12.f_1={
Global_104212.f_2890.f_12.f_1 
};
Global_107196.f_2890.f_12.f_5=Global_104212.f_2890.f_12.f_5;
Global_107196.f_2890.f_12.f_6=Global_104212.f_2890.f_12.f_6;
Global_107196.f_2890.f_12.f_7=Global_104212.f_2890.f_12.f_7;
Global_107196.f_2890.f_12.f_8=Global_104212.f_2890.f_12.f_8;
Global_107196.f_2890.f_12.f_9={
Global_104212.f_2890.f_12.f_9 
};
Global_107196.f_2890.f_12.f_59={
Global_104212.f_2890.f_12.f_59 
};
Global_107196.f_2890.f_12.f_62=Global_104212.f_2890.f_12.f_62;
Global_107196.f_2890.f_12.f_63=Global_104212.f_2890.f_12.f_63;
Global_107196.f_2890.f_12.f_64=Global_104212.f_2890.f_12.f_64;
Global_107196.f_2890.f_12.f_65=Global_104212.f_2890.f_12.f_65;
Global_107196.f_2890.f_12.f_77=Global_104212.f_2890.f_12.f_77;
Global_107196.f_2890.f_12.f_66=Global_104212.f_2890.f_12.f_66;
Global_107196.f_2890.f_12.f_67=Global_104212.f_2890.f_12.f_67;
Global_107196.f_2890.f_12.f_68=Global_104212.f_2890.f_12.f_68;
Global_107196.f_2890.f_12.f_69=Global_104212.f_2890.f_12.f_69;
Global_107196.f_2890.f_12.f_71=Global_104212.f_2890.f_12.f_71;
Global_107196.f_2890.f_12.f_72=Global_104212.f_2890.f_12.f_72;
Global_107196.f_2890.f_12.f_73=Global_104212.f_2890.f_12.f_73;
Global_107196.f_2890.f_12.f_74=Global_104212.f_2890.f_12.f_74;
Global_107196.f_2890.f_12.f_75=Global_104212.f_2890.f_12.f_75;
Global_107196.f_2890.f_12.f_76=Global_104212.f_2890.f_12.f_76;
Global_107196.f_2980=Global_104212.f_2980;
Global_107196.f_2980.f_1=Global_104212.f_2980.f_1;
Global_107196.f_2980.f_2=Global_104212.f_2980.f_2;
Global_107196.f_2980.f_3=Global_104212.f_2980.f_3;
return;
}


void func_87(var uParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, Ped pedParam5) // Position - 0x3A31{
int i;
eCharacter j;
*uParam0=_GET_CURRENT_PLAYER_CHARACTER();
uParam0->f_1=func_53();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_105(&(uParam0->f_2884), 0);
func_104(PLAYER::PLAYER_PED_ID());
func_97(PLAYER::PLAYER_PED_ID(), false);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
if(uParam0->f_2==0 || uParam0->f_2==joaat("OBJECT")) uParam0->f_2=joaat("WEAPON_UNARMED");
}
for (j=CHAR_MICHAEL;
j < CHAR_MULTIPLAYER;
j=j + 1){
uParam0->f_17[j]=Global_113648.f_2365.f_539.f_294[j];
if(j==_GET_CURRENT_PLAYER_CHARACTER_0()){
func_89(PLAYER::PLAYER_PED_ID(), &uParam0->f_616[j /*65*/], 1, -1);
}else{
for (i=0;
i < 12;
i=i + 1){
uParam0->f_616[j /*65*/][i]=Global_100406[j /*65*/][i];
uParam0->f_616[j /*65*/].f_13[i]=Global_100406[j /*65*/].f_13[i];
}
uParam0->f_616[j /*65*/].f_59=Global_100406[j /*65*/].f_59;
uParam0->f_616[j /*65*/].f_60=Global_100406[j /*65*/].f_60;
uParam0->f_616[j /*65*/].f_61=Global_100406[j /*65*/].f_61;
uParam0->f_616[j /*65*/].f_62=Global_100406[j /*65*/].f_62;
uParam0->f_616[j /*65*/].f_63=Global_100406[j /*65*/].f_63;
uParam0->f_616[j /*65*/].f_64=Global_100406[j /*65*/].f_64;
for (i=0;
i < 9;
i=i + 1){
uParam0->f_616[j /*65*/].f_39[i]=Global_100406[j /*65*/].f_39[i];
uParam0->f_616[j /*65*/].f_49[i]=Global_100406[j /*65*/].f_49[i];
}}
for (i=0;
i < 44;
i=i + 1){
uParam0->f_812[j /*477*/][i /*5*/]={
Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/] 
};
}
for (i=0;
i < 51;
i=i + 1){
uParam0->f_812[j /*477*/].f_221[i /*5*/]={
Global_113648.f_2365.f_539.f_298[j /*477*/].f_221[i /*5*/] 
};
}
switch (j){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
break;
}
uParam0->f_9[j]=Global_113648.f_20566.f_233[j /*69*/].f_1;
uParam0->f_13[j]=Global_60536[j];
uParam0->f_25[0 /*295*/][j /*98*/]={
Global_113648.f_2365.f_539.f_2407[0 /*295*/][j /*98*/] 
};
uParam0->f_25[1 /*295*/][j /*98*/]={
Global_113648.f_2365.f_539.f_2407[1 /*295*/][j /*98*/] 
};
for (i=0;
i <=3;
i=i + 1){
uParam0->f_2838[j /*15*/][i]=Global_113648.f_2365.f_493[j /*15*/][i];
uParam0->f_2838[j /*15*/].f_5[i]=Global_113648.f_2365.f_493[j /*15*/].f_5[i];
uParam0->f_2838[j /*15*/].f_10[i]=Global_113648.f_2365.f_493[j /*15*/].f_10[i];
}
for (i=0;
i <=2;
i=i + 1){
uParam0->f_2345[j /*164*/][i]=Global_113648.f_2365[j /*164*/][i];
uParam0->f_2345[j /*164*/].f_4[i]=Global_113648.f_2365[j /*164*/].f_4[i];
uParam0->f_2345[j /*164*/].f_8[i]=Global_113648.f_2365[j /*164*/].f_8[i];
uParam0->f_2345[j /*164*/].f_12[i]=Global_113648.f_2365[j /*164*/].f_12[i];
uParam0->f_2345[j /*164*/].f_16[i]=Global_113648.f_2365[j /*164*/].f_16[i];
uParam0->f_2345[j /*164*/].f_20[i]=Global_113648.f_2365[j /*164*/].f_20[i];
uParam0->f_2345[j /*164*/].f_24[i]=Global_113648.f_2365[j /*164*/].f_24[i];
uParam0->f_2345[j /*164*/].f_28[i]=Global_113648.f_2365[j /*164*/].f_28[i];
uParam0->f_2345[j /*164*/].f_32[i]=Global_113648.f_2365[j /*164*/].f_32[i];
uParam0->f_2345[j /*164*/].f_36[i]=Global_113648.f_2365[j /*164*/].f_36[i];
uParam0->f_2345[j /*164*/].f_40[i]=Global_113648.f_2365[j /*164*/].f_40[i];
uParam0->f_2345[j /*164*/].f_44[i]=Global_113648.f_2365[j /*164*/].f_44[i];
uParam0->f_2345[j /*164*/].f_48[i]=Global_113648.f_2365[j /*164*/].f_48[i];
uParam0->f_2345[j /*164*/].f_52[i]=Global_113648.f_2365[j /*164*/].f_52[i];
uParam0->f_2345[j /*164*/].f_56[i]=Global_113648.f_2365[j /*164*/].f_56[i];
uParam0->f_2345[j /*164*/].f_60[i]=Global_113648.f_2365[j /*164*/].f_60[i];
uParam0->f_2345[j /*164*/].f_64[i]=Global_113648.f_2365[j /*164*/].f_64[i];
uParam0->f_2345[j /*164*/].f_68[i]=Global_113648.f_2365[j /*164*/].f_68[i];
uParam0->f_2345[j /*164*/].f_72[i]=Global_113648.f_2365[j /*164*/].f_72[i];
uParam0->f_2345[j /*164*/].f_76[i]=Global_113648.f_2365[j /*164*/].f_76[i];
uParam0->f_2345[j /*164*/].f_80[i]=Global_113648.f_2365[j /*164*/].f_80[i];
uParam0->f_2345[j /*164*/].f_84[i]=Global_113648.f_2365[j /*164*/].f_84[i];
uParam0->f_2345[j /*164*/].f_88[i]=Global_113648.f_2365[j /*164*/].f_88[i];
uParam0->f_2345[j /*164*/].f_92[i]=Global_113648.f_2365[j /*164*/].f_92[i];
uParam0->f_2345[j /*164*/].f_96[i]=Global_113648.f_2365[j /*164*/].f_96[i];
uParam0->f_2345[j /*164*/].f_100[i]=Global_113648.f_2365[j /*164*/].f_100[i];
uParam0->f_2345[j /*164*/].f_104[i]=Global_113648.f_2365[j /*164*/].f_104[i];
uParam0->f_2345[j /*164*/].f_108[i]=Global_113648.f_2365[j /*164*/].f_108[i];
uParam0->f_2345[j /*164*/].f_112[i]=Global_113648.f_2365[j /*164*/].f_112[i];
uParam0->f_2345[j /*164*/].f_116[i]=Global_113648.f_2365[j /*164*/].f_116[i];
uParam0->f_2345[j /*164*/].f_120[i]=Global_113648.f_2365[j /*164*/].f_120[i];
uParam0->f_2345[j /*164*/].f_124[i]=Global_113648.f_2365[j /*164*/].f_124[i];
uParam0->f_2345[j /*164*/].f_128[i]=Global_113648.f_2365[j /*164*/].f_128[i];
uParam0->f_2345[j /*164*/].f_132[i]=Global_113648.f_2365[j /*164*/].f_132[i];
uParam0->f_2345[j /*164*/].f_136[i]=Global_113648.f_2365[j /*164*/].f_136[i];
uParam0->f_2345[j /*164*/].f_140[i]=Global_113648.f_2365[j /*164*/].f_140[i];
uParam0->f_2345[j /*164*/].f_144[i]=Global_113648.f_2365[j /*164*/].f_144[i];
uParam0->f_2345[j /*164*/].f_148[i]=Global_113648.f_2365[j /*164*/].f_148[i];
uParam0->f_2345[j /*164*/].f_152[i]=Global_113648.f_2365[j /*164*/].f_152[i];
uParam0->f_2345[j /*164*/].f_156[i]=Global_113648.f_2365[j /*164*/].f_156[i];
uParam0->f_2345[j /*164*/].f_160[i]=Global_113648.f_2365[j /*164*/].f_160[i];
}}
STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
uParam0->f_5=145;
if(iParam4==1) func_4(&(uParam0->f_2890), uParam0, pedParam5, 1, 1, 0);
func_88(&(uParam0->f_2980));
sParam3=sParam3;
iParam2=iParam2;
return;
}

int func_88(var uParam0) // Position - 0x48BB{
*uParam0=Global_96530;
uParam0->f_1=Global_96531;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_89(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x48DD{
eCharacter character;
ePedComponentType i;
if(!PED::IS_PED_INJURED(pedParam0)){
character=_GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
for (i=PV_COMP_HEAD;
i < PV_COMP_MAX;
i=i + 1){
func_95(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
}
for (i=PV_COMP_HEAD;
i < PV_COMP_TASK;
i=i + 1){
func_94(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
}
if(func_13(character)){
uParam1->f_59=Global_113648.f_2365.f_539[character /*65*/].f_59;
uParam1->f_60=Global_113648.f_2365.f_539[character /*65*/].f_60;
uParam1->f_61=Global_113648.f_2365.f_539[character /*65*/].f_61;
uParam1->f_62=Global_113648.f_2365.f_539[character /*65*/].f_62;
uParam1->f_63=Global_113648.f_2365.f_539[character /*65*/].f_63;
uParam1->f_64=Global_113648.f_2365.f_539[character /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_93(161, iParam3)) uParam1->f_59=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, iParam3, 0);
else uParam1->f_59=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, iParam3, 0);
uParam1->f_60=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_ITEM, iParam3, 0);
uParam1->f_61=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_TYPE, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0==PLAYER::PLAYER_PED_ID())if(func_93(161, iParam3)) uParam1->f_59=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, iParam3, 0);
else uParam1->f_59=_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, iParam3, 0);
}
return;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x4A7D{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_91(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_91(int iParam0) // Position - 0x4ABA{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_92();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_92() // Position - 0x4AEE{
return Global_1574918;
}
BOOL func_93(int iParam0, int iParam1) // Position - 0x4AFA{
Hash statHash;
BOOL outValue;
statHash=Global_2848280[iParam0 /*3*/][func_91(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return false;
}


void func_94(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x4B26{
eCharacter character;
character=_GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
if(pedParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
}else{
character=echParam5;
}
if(iParam4==0) return;
if(epctParam1==PV_COMP_HEAD){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
if(pedParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
}}}}
switch (character){
case CHAR_MICHAEL:
if(epctParam1==PV_COMP_HEAD){
if(*uParam2==7){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(epctParam1==PV_COMP_BERD){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case CHAR_FRANKLIN:
if(epctParam1==PV_COMP_HEAD){
if(*uParam2==2){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case CHAR_TREVOR:
if(epctParam1==PV_COMP_HEAD){
if(*uParam2==9){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if(iParam4 & 1 !=0 || iParam4 & 2 !=0 || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20 || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}
return;
}


void func_95(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x506F{
eCharacter character;
character=_GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
if(pedParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
}else{
character=echParam6;
}
if(iParam5==0) return;
switch (character){
case CHAR_MICHAEL:
if(epctParam1==PV_COMP_ACCS){
if(iParam5 & 1 !=0 || iParam5 & 2 !=0 || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(epctParam1==PV_COMP_TASK){
if(iParam5 & 1 !=0 || iParam5 & 2 !=0 || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case CHAR_FRANKLIN:
if(epctParam1==PV_COMP_ACCS){
if(iParam5 & 1 !=0 || iParam5 & 2 !=0 || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(epctParam1==PV_COMP_TASK){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case CHAR_TREVOR:
if(epctParam1==PV_COMP_ACCS){
if(iParam5 & 1 !=0 || iParam5 & 2 !=0 || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(epctParam1==PV_COMP_TASK){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x52B0{
func_23();
return Global_113648.f_2365.f_539.f_4321;
}


void func_97(Ped pedParam0, BOOL bParam1) // Position - 0x52C9{
eCharacter character;
Hash weaponWheelCurrentlyHighlighted;
int i;
int tintIndex;
character=_GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
if(func_13(character) && !PED::IS_PED_INJURED(pedParam0)){
if(pedParam0==PLAYER::PLAYER_PED_ID()){
func_98(pedParam0, &Global_113648.f_2365.f_539.f_298[character /*477*/]);
for (i=0;
i <=8 - 1;
i=i + 1){
Global_113648.f_2365.f_539.f_1730[i /*4*/][character]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
if(bParam1){
weaponWheelCurrentlyHighlighted=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113648.f_2365.f_539.f_1730[i /*4*/][character]==weaponWheelCurrentlyHighlighted) Global_113648.f_2365.f_539.f_1763=i;
}}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
if(character==CHAR_MICHAEL) STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), tintIndex, true);
elseif(character==CHAR_FRANKLIN) STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), tintIndex, true);
elseif(character==CHAR_TREVOR) STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), tintIndex, true);
}}
return;
}


void func_98(Ped pedParam0, var uParam1) // Position - 0x53BC{
int i;
int j;
Hash k;
Hash hash;
Hash pedWeapontypeInSlot;
int l;
int numDlcWeaponsSp;
Hash outData;
var ComponentDataPtr;
int num;
int offset;
if(!PED::IS_PED_INJURED(pedParam0)){
for (i=0;
i <=44 - 1;
i=i + 1){
uParam1->[i /*5*/].f_1=0;
}
for (i=0;
i <=44 - 1;
i=i + 1){
hash=func_103(i);
if(hash !=0){
pedWeapontypeInSlot=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_103(i));
pedWeapontypeInSlot.f_1=0;
pedWeapontypeInSlot.f_2=0;
pedWeapontypeInSlot.f_3=0;
pedWeapontypeInSlot.f_4=0;
if(pedWeapontypeInSlot !=0 && pedWeapontypeInSlot !=joaat("WEAPON_UNARMED")){
pedWeapontypeInSlot.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
if(pedWeapontypeInSlot==joaat("GADGET_PARACHUTE")) pedWeapontypeInSlot.f_1=1;
pedWeapontypeInSlot.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
pedWeapontypeInSlot.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
if(pedWeapontypeInSlot.f_1==-1)if(!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1))) pedWeapontypeInSlot.f_1=0;
uParam1->[i /*5*/].f_1=pedWeapontypeInSlot.f_1;
j=0;
for (k=func_101(pedWeapontypeInSlot, j);
k !=0;
k=func_101(pedWeapontypeInSlot, j)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k)) MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
j=j + 1;
}}
uParam1->[i /*5*/]={
pedWeapontypeInSlot 
};
}}
for (i=0;
i <=50;
i=i + 1){
uParam1->f_221[i /*5*/].f_1=0;
}
numDlcWeaponsSp=FILES::GET_NUM_DLC_WEAPONS_SP();
for (l=0;
l < numDlcWeaponsSp;
l=l + 1){
if(FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_100(outData.f_1) && num < 51){
if(!FILES::IS_CONTENT_ITEM_LOCKED(outData)){
pedWeapontypeInSlot=outData.f_1;
pedWeapontypeInSlot.f_1=0;
pedWeapontypeInSlot.f_2=0;
pedWeapontypeInSlot.f_3=0;
pedWeapontypeInSlot.f_4=0;
pedWeapontypeInSlot.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
if(WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false)){
pedWeapontypeInSlot.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
pedWeapontypeInSlot.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
}
if(pedWeapontypeInSlot.f_1==-1)if(!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1))) pedWeapontypeInSlot.f_1=0;
uParam1->f_221[num /*5*/].f_1=pedWeapontypeInSlot.f_1;
offset=0;
for (j=0;
j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l);
j=j + 1){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr)){
if(!func_99(ComponentDataPtr.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3)) MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
offset=offset + 1;
}
}}}
if(pedWeapontypeInSlot !=0){
if(!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false)){
pedWeapontypeInSlot=0;
pedWeapontypeInSlot.f_1=0;
}}
uParam1->f_221[num /*5*/]={
pedWeapontypeInSlot 
};
num=num + 1;
}}}
return;
}
BOOL func_99(int iParam0) // Position - 0x5644{
switch (iParam0){
case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
case 1011473080:
return true;
}
return false;
}
BOOL func_100(int iParam0) // Position - 0x56E5{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}else{
switch (iParam0){
case joaat("WEAPON_PISTOL50"):
case joaat("WEAPON_BULLPUPSHOTGUN"):
case joaat("WEAPON_ASSAULTSMG"):
return false;
case joaat("WEAPON_BOTTLE"):
case joaat("WEAPON_SNSPISTOL"):
case joaat("WEAPON_GUSENBERG"):
return false;
case joaat("WEAPON_HEAVYPISTOL"):
case joaat("WEAPON_SPECIALCARBINE"):
return false;
case joaat("WEAPON_BULLPUPRIFLE"):
return false;
case joaat("WEAPON_DAGGER"):
case joaat("WEAPON_VINTAGEPISTOL"):
return false;
case joaat("WEAPON_FIREWORK"):
case joaat("WEAPON_MUSKET"):
return false;
case joaat("WEAPON_HEAVYSHOTGUN"):
case joaat("WEAPON_MARKSMANRIFLE"):
return false;
case joaat("WEAPON_HOMINGLAUNCHER"):
case joaat("WEAPON_PROXMINE"):
return false;
case joaat("WEAPON_COMBATPDW"):
case joaat("WEAPON_KNUCKLE"):
case joaat("WEAPON_MARKSMANPISTOL"):
return false;
case joaat("WEAPON_HEAVYRIFLE"):
case joaat("WEAPON_ASSAULTMG"):
case joaat("WEAPON_ASSAULTSNIPER"):
case joaat("WEAPON_AMRIFLE"):
case joaat("WEAPON_CROSSBOW"):
case joaat("WEAPON_HARPOON"):
case joaat("WEAPON_PROGRAMMABLEAR"):
case joaat("WEAPON_RUBBERGUN"):
case joaat("WEAPON_LOUDHAILER"):
case joaat("WEAPON_FLAREGUN"):
case joaat("WEAPON_HANDCUFFS"):
case joaat("WEAPON_SNOWBALL"):
case joaat("WEAPON_GARBAGEBAG"):
case joaat("WEAPON_FLASHLIGHT"):
case joaat("WEAPON_SWITCHBLADE"):
case joaat("WEAPON_REVOLVER"):
case joaat("WEAPON_DBSHOTGUN"):
case joaat("WEAPON_COMPACTRIFLE"):
case joaat("WEAPON_AUTOSHOTGUN"):
case joaat("WEAPON_MINISMG"):
case joaat("WEAPON_COMPACTLAUNCHER"):
case joaat("WEAPON_BATTLEAXE"):
case joaat("WEAPON_PIPEBOMB"):
case joaat("WEAPON_POOLCUE"):
case joaat("WEAPON_WRENCH"):
case joaat("WEAPON_DOUBLEACTION"):
case joaat("WEAPON_RAYCARBINE"):
case joaat("WEAPON_RAYMINIGUN"):
case joaat("WEAPON_RAYPISTOL"):
case joaat("WEAPON_NAVYREVOLVER"):
case joaat("WEAPON_CERAMICPISTOL"):
case joaat("WEAPON_GADGETPISTOL"):
case joaat("WEAPON_MILITARYRIFLE"):
case joaat("WEAPON_COMBATSHOTGUN"):
case joaat("WEAPON_EMPLAUNCHER"):
case joaat("WEAPON_FERTILIZERCAN"):
case joaat("WEAPON_STUNGUN_MP"):
case joaat("WEAPON_METALDETECTOR"):
case joaat("WEAPON_PRECISIONRIFLE"):
case joaat("WEAPON_TACTICALRIFLE"):
case 465894841:
case 1703483498:
case -22923932:
return true;
}}
return false;
}
Hash func_101(Hash hParam0, int iParam1) // Position - 0x58BF{
int num;
int dlcWeaponIndex;
int i;
int num2;
var unk;
var ComponentDataPtr;
num=0;
switch (hParam0){
case joaat("WEAPON_PISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_PISTOL_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_PISTOL_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_PI_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_PISTOL_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_COMBATPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_COMBATPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_COMBATPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 4:
num=joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_APPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_APPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_APPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 4:
num=joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
break;
case 5:
num=joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
break;
}
break;
case joaat("WEAPON_MICROSMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MICROSMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MICROSMG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
break;
case 6:
num=joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
break;
}
break;
case joaat("WEAPON_SMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_SMG_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_SMG_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_SMG_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 5:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 6:
num=joaat("COMPONENT_AT_SCOPE_MACRO_02");
break;
case 7:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 8:
num=joaat("COMPONENT_SMG_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_ASSAULTRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 5:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 6:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 7:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 8:
num=joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_CARBINERIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_RAILCOVER_01");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 6:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 7:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 8:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 9:
num=joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_ADVANCEDRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 5:
num=joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_MG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_SMALL_02");
break;
case 3:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 4:
num=joaat("COMPONENT_MG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_COMBATMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_COMBATMG_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_COMBATMG_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 5:
num=joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_PUMPSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_SR_SUPP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
break;
case 3:
num=joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
break;
case 4:
num=330905451;
break;
}
break;
case joaat("WEAPON_ASSAULTSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
}
break;
case joaat("WEAPON_SNIPERRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_AT_SCOPE_LARGE");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_MAX");
break;
case 3:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 4:
num=joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_HEAVYSNIPER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_LARGE");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MAX");
break;
}
break;
case joaat("WEAPON_GRENADELAUNCHER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
}
break;
case joaat("WEAPON_MINIGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MINIGUN_CLIP_01");
break;
}
break;
case joaat("WEAPON_ASSAULTSMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ASSAULTSMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ASSAULTSMG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_BULLPUPSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
}
break;
case joaat("WEAPON_PISTOL50"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_PISTOL50_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_PISTOL50_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 4:
num=joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_COMBATPDW"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_COMBATPDW_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_COMBATPDW_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_COMBATPDW_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
}
break;
case joaat("WEAPON_SAWNOFFSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_BULLPUPRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 6:
num=joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
break;
}
break;
case joaat("WEAPON_SNSPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SNSPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_SNSPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_SPECIALCARBINE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 5:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 6:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 7:
num=joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_KNUCKLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
break;
case 1:
num=joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
break;
case 2:
num=joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
break;
case 3:
num=joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
break;
case 4:
num=joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
break;
case 5:
num=joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
break;
case 6:
num=joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
break;
case 7:
num=joaat("COMPONENT_KNUCKLE_VARMOD_KING");
break;
case 8:
num=joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
break;
}
break;
case joaat("WEAPON_MACHINEPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
}
break;
case joaat("WEAPON_SWITCHBLADE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
break;
case 1:
num=joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
break;
}
break;
case joaat("WEAPON_REVOLVER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_REVOLVER_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
break;
case 2:
num=joaat("COMPONENT_REVOLVER_VARMOD_GOON");
break;
}
break;
case joaat("WEAPON_MINISMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MINISMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MINISMG_CLIP_02");
break;
}
break;
case joaat("WEAPON_BAT"):
switch (iParam1){
case 0:
num=716207715;
break;
case 1:
num=446271089;
break;
case 2:
num=1045616099;
break;
case 3:
num=1336277129;
break;
case 4:
num=-513369076;
break;
case 5:
num=-447700000;
break;
case 6:
num=-149207179;
break;
case 7:
num=166784288;
break;
case 8:
num=2068729789;
break;
case 9:
num=1761389338;
break;
}
break;
default:
if(hParam0 !=0){
dlcWeaponIndex=func_102(hParam0, &unk);
if(dlcWeaponIndex !=-1){
for (i=0;
i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex);
i=i + 1){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr)){
if(!func_99(ComponentDataPtr.f_3)){
if(num2==iParam1) return ComponentDataPtr.f_3;
num2=num2 + 1;
}
}}}}
break;
}
return num;
}

int func_102(Hash hParam0, Any* panParam1) // Position - 0x6520{
int i;
int numDlcWeapons;
numDlcWeapons=FILES::GET_NUM_DLC_WEAPONS();
for (i=0;
i < numDlcWeapons;
i=i + 1){
if(FILES::GET_DLC_WEAPON_DATA(i, panParam1))if(panParam1->f_1==hParam0) return i;
}
return -1;
}
Hash func_103(int iParam0) // Position - 0x655B{
int num;
num=0;
switch (iParam0){
case 0:
num=joaat("SLOT_UNARMED");
break;
case 1:
num=joaat("SLOT_KNIFE");
break;
case 2:
num=joaat("SLOT_NIGHTSTICK");
break;
case 3:
num=joaat("SLOT_HAMMER");
break;
case 4:
num=joaat("SLOT_BAT");
break;
case 5:
num=joaat("SLOT_CROWBAR");
break;
case 6:
num=joaat("SLOT_GOLFCLUB");
break;
case 7:
num=joaat("SLOT_STUNGUN");
break;
case 8:
num=joaat("SLOT_PISTOL");
break;
case 9:
num=joaat("SLOT_COMBATPISTOL");
break;
case 10:
num=joaat("SLOT_APPISTOL");
break;
case 11:
num=joaat("SLOT_MICROSMG");
break;
case 12:
num=joaat("SLOT_SMG");
break;
case 13:
num=joaat("SLOT_ASSAULTRIFLE");
break;
case 14:
num=joaat("SLOT_CARBINERIFLE");
break;
case 15:
num=joaat("SLOT_ADVANCEDRIFLE");
break;
case 16:
num=joaat("SLOT_MG");
break;
case 17:
num=joaat("SLOT_COMBATMG");
break;
case 18:
num=joaat("SLOT_PUMPSHOTGUN");
break;
case 19:
num=joaat("SLOT_SAWNOFFSHOTGUN");
break;
case 20:
num=joaat("SLOT_ASSAULTSHOTGUN");
break;
case 21:
num=joaat("SLOT_SNIPERRIFLE");
break;
case 22:
num=joaat("SLOT_HEAVYSNIPER");
break;
case 23:
num=joaat("SLOT_GRENADELAUNCHER");
break;
case 24:
num=joaat("SLOT_RPG");
break;
case 25:
num=joaat("SLOT_MINIGUN");
break;
case 26:
num=joaat("SLOT_GRENADE");
break;
case 27:
num=joaat("SLOT_STICKYBOMB");
break;
case 28:
num=joaat("SLOT_SMOKEGRENADE");
break;
case 29:
num=joaat("SLOT_MOLOTOV");
break;
case 30:
num=joaat("SLOT_FIREEXTINGUISHER");
break;
case 31:
num=joaat("SLOT_PETROLCAN");
break;
case 33:
num=joaat("SLOT_PARACHUTE");
break;
case 34:
num=joaat("SLOT_DIGISCANNER");
break;
case 35:
num=joaat("SLOT_OBJECT");
break;
case 36:
num=joaat("SLOT_ASSAULTSMG");
break;
case 37:
num=joaat("SLOT_BULLPUPSHOTGUN");
break;
case 38:
num=joaat("SLOT_PISTOL50");
break;
}
return num;
}


void func_104(Ped pedParam0) // Position - 0x67CF{
eCharacter character;
character=_GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
if(func_13(character) && !PED::IS_PED_INJURED(pedParam0)) Global_113648.f_2365.f_539.f_294[character]=PED::GET_PED_ARMOUR(pedParam0);
return;
}


void func_105(var uParam0, int iParam1) // Position - 0x680B{
var unk;
var unk2;
var unk5;
eCharacter character;
*uParam0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
uParam0->f_3=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
uParam0->f_5=PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) uParam0->f_4=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
if(SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f){
*uParam0={
301.2162f, 202.1357f, 103.3797f 
};
uParam0->f_3=156.5144f;
}elseif(SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f){
*uParam0={
394.2567f, -713.5439f, 28.2853f 
};
uParam0->f_3=276.6273f;
}elseif(SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f){
*uParam0={
-1423.4724f, -214.2539f, 45.5004f 
};
uParam0->f_3=353.8757f;
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
*uParam0={
4.2587f, 525.0214f, 173.6281f 
};
uParam0->f_3=203.6746f;
}elseif(IS_BIT_SET(Global_78807, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(IS_BIT_SET(Global_78807, 5)){
*uParam0={
-745.4462f, 5595.1465f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(IS_BIT_SET(Global_78807, 6)){
*uParam0={
-1675.5215f, -1125.5901f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(IS_BIT_SET(Global_78807, 7)){
*uParam0={
-1631.2192f, -1112.8052f, 12.0212f 
};
uParam0->f_3=316.8879f;
}elseif(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters")){
*uParam0={
1276.9564f, -1725.1892f, 53.6551f 
};
uParam0->f_3=204.1703f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0)){
*uParam0={
-601.59f, 2099.1973f, 128.8928f 
};
uParam0->f_3=204.7498f;
}elseif(SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f){
*uParam0={
-1018.3756f, -483.9436f, 36.0964f 
};
uParam0->f_3=114.7664f;
}elseif(SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f){
*uParam0={
497.7238f, -1310.9323f, 28.2372f 
};
uParam0->f_3=289.3663f;
}elseif(SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f){
*uParam0={
2316.9304f, 2594.1528f, 45.7199f 
};
uParam0->f_3=348.1325f;
}
if(iParam1==1){
if(func_109(&unk)){
if(func_107(unk, &unk2, &unk5)){
unk2.f_2=unk2.f_2 + 1f;
*uParam0={
unk2 
};
uParam0->f_3=unk5;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0)){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_MICHAEL){
*uParam0={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_3=71.6237f;
}elseif(character==CHAR_FRANKLIN){
*uParam0={
-68.5531f, -1824.3774f, 25.9424f 
};
uParam0->f_3=215.8295f;
}elseif(character==CHAR_TREVOR){
*uParam0={
-220.8189f, -1162.3016f, 22.0242f 
};
uParam0->f_3=70.2711f;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0)){
*uParam0={
495.4108f, -1306.0801f, 29.2883f 
};
uParam0->f_3=213.6273f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0)){
*uParam0={
-1160.0951f, -1515.407f, 3.1496f 
};
uParam0->f_3=305.6424f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0)){
*uParam0={
431.8853f, -1013.133f, 28.7907f 
};
uParam0->f_3=186.6814f;
}elseif(func_106(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}
return;
}
BOOL func_106(Vector3 vParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x6D58{
Interior interiorAtCoordsWithType;
Interior interiorFromCollision;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0)){
interiorAtCoordsWithType=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(fParam4, sParam3);
if(!INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType)) return false;
interiorFromCollision=INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
if(interiorFromCollision==interiorAtCoordsWithType) return true;
}
return false;
}
BOOL func_107(int iParam0, var uParam1, var uParam2) // Position - 0x6D9C{
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.5278f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.9128f, -1120.9985f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.0281f, 3718.7358f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.8656f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.0806f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.1599f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.4451f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.0536f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.6436f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.0271f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.3027f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.4172f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.3552f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.7391f, -1278.5734f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.3928f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.8022f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.5958f, -1417.6997f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.9523f, -1660.6111f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.2136f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.8136f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.9661f, 3749.7092f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.9628f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.0597f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.1018f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.9321f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.8818f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.8745f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.0531f, -1993.9161f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.0814f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.7089f, 2664.8135f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.5024f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_108(*uParam1, 0f, 0f, 0f, false);
}
BOOL func_108(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x751B{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}
BOOL func_109(var uParam0) // Position - 0x7562{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_135()){
*uParam0=func_115(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, false, true, -1);
if(func_114(*uParam0) && !func_110(*uParam0)) return true;
}}
return false;
}
BOOL func_110(int iParam0) // Position - 0x75BD{
return func_111(iParam0, 0, true);
}
BOOL func_111(int iParam0, int iParam1, BOOL bParam2) // Position - 0x75CD{
if(iParam0==-1) return false;
if(bParam2) return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_113()==0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_112(iParam0), -1, 0), iParam1);
else return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
return false;
}
eMPStat func_112(int iParam0) // Position - 0x762E{
switch (iParam0){
case 0:
return MP_STAT_SHOPFM_HAIRDO_01_BH;
case 1:
return MP_STAT_SHOPFM_HAIRDO_02_SC;
case 2:
return MP_STAT_SHOPFM_HAIRDO_03_V;
case 3:
return MP_STAT_SHOPFM_HAIRDO_04_SS;
case 4:
return MP_STAT_SHOPFM_HAIRDO_05_MP;
case 5:
return MP_STAT_SHOPFM_HAIRDO_06_HW;
case 6:
return MP_STAT_SHOPFM_HAIRDO_07_PB;
case 7:
return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
case 8:
return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
case 9:
return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
case 10:
return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
case 11:
return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
case 12:
return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
case 13:
return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
case 14:
return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
case 15:
return MP_STAT_SHOPFM_CLOTHES_M_03_H;
case 16:
return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
case 17:
return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
case 18:
return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
case 19:
return MP_STAT_SHOPFM_CLOTHES_H_02_B;
case 20:
return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
case 21:
return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
case 22:
return MP_STAT_SHOPFM_TATTOO_01_HW;
case 23:
return MP_STAT_SHOPFM_TATTOO_02_SS;
case 24:
return MP_STAT_SHOPFM_TATTOO_03_PB;
case 25:
return MP_STAT_SHOPFM_TATTOO_04_VC;
case 26:
return MP_STAT_SHOPFM_TATTOO_05_ELS;
case 27:
return MP_STAT_SHOPFM_TATTOO_06_GOH;
case 28:
return MP_STAT_SHOPFM_GUN_01_DT;
case 29:
return MP_STAT_SHOPFM_GUN_02_SS;
case 30:
return MP_STAT_SHOPFM_GUN_03_HW;
case 31:
return MP_STAT_SHOPFM_GUN_04_ELS;
case 32:
return MP_STAT_SHOPFM_GUN_05_PB;
case 33:
return MP_STAT_SHOPFM_GUN_06_LS;
case 34:
return MP_STAT_SHOPFM_GUN_07_MW;
case 35:
return MP_STAT_SHOPFM_GUN_08_CS;
case 36:
return MP_STAT_SHOPFM_GUN_09_GOH;
case 37:
return MP_STAT_SHOPFM_GUN_10_VWH;
case 38:
return MP_STAT_SHOPFM_GUN_11_ID1;
case 39:
return MP_STAT_SHOPFM_CARMOD_01_AP;
case 40:
return MP_STAT_SHOPFM_CARMOD_05_ID2;
case 41:
return MP_STAT_SHOPFM_CARMOD_06_BT1;
case 42:
return MP_STAT_SHOPFM_CARMOD_07_CS1;
case 43:
return MP_STAT_SHOPFM_CARMOD_08_CS6;
case 44:
return MP_STAT_RAYPISTOL_FM_AMMO_CURRENT;
case 45:
return MP_STAT_SHOPFM_PERS_GAR;
case 46:
return MP_STAT_SHOPFM_PERS_GUN;
case 47:
return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
case 48:
return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
case 49:
return MP_STAT_SHOPFM_PERS_GUN_ARENA;
case 52:
return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
case 50:
return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
case 51:
return MP_STAT_SHOPFM_CLOTHES_CASINO;
case 53:
return MP_STAT_SHOPFM_PERS_GUN_SUB;
case 54:
return MP_STAT_SHOPFM_TATTOO_07_CCT;
case 55:
return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
case 56:
return MP_STAT_SHOPFM_PERS_GUN_FIXER;
case 57:
return MP_STAT_SHOPFM_CLOTHES_STUDIO;
case 58:
return MP_STAT_GBTELTIMESPLAYEDGOONPREV;
case 59:
return MP_STAT_TAMPA3_FMINI_HELDTIME;
default:
break;
}
return 14192;
}

int func_113() // Position - 0x79C7{
return Global_32163;
}
BOOL func_114(int iParam0) // Position - 0x79D2{
return func_111(iParam0, 5, true);
}

int func_115(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x79E2{
int i;
float distanceBetweenCoords;
float num;
int num2;
num=1000000f;
num2=-1;
for (i=0;
i <=59;
i=i + 1){
if(iParam3==6 || iParam3==func_134(i)){
if(!bParam5 || func_133(i)){
distanceBetweenCoords=MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_116(i, false), true);
if(distanceBetweenCoords < num && distanceBetweenCoords <=(float)iParam4 || iParam4==-1 && bParam6 || i !=21 && i !=iParam7){
num=distanceBetweenCoords;
num2=i;
}}}}
return num2;
}


Vector3 func__116(int iParam0, BOOL bParam1) // Position - 0x7A84{
switch (iParam0){
case -1:
return 0f, 0f, 0f;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
case 2:
return -1287.0822f, -1116.5576f, 5.9901f;
case 3:
return 1933.1191f, 3726.079f, 31.8444f;
case 4:
return 1208.3335f, -470.917f, 65.208f;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
case 6:
return -280.8165f, 6231.7705f, 30.6955f;
case 7:
return 80.665f, -1391.6694f, 28.3761f;
case 8:
return 1687.8812f, 4820.55f, 41.0096f;
case 9:
return 419.531f, -807.5787f, 28.4896f;
case 10:
return -1094.0487f, 2704.1707f, 18.0873f;
case 11:
return 1197.9722f, 2704.2205f, 37.1572f;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
case 13:
return -0.2361f, 6516.0454f, 30.8684f;
case 14:
return -1199.8092f, -776.6886f, 16.3237f;
case 15:
return 618.1857f, 2752.5667f, 41.0881f;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
case 17:
return -3168.9663f, 1055.2869f, 19.8632f;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
case 19:
return -158.2199f, -304.9663f, 38.735f;
case 20:
return -1455.0045f, -233.1862f, 48.7936f;
case 21:
return -1335.973f, -1278.5549f, 3.8598f;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
case 23:
return 1861.6853f, 3750.0798f, 32.0318f;
case 24:
return -290.1603f, 6199.0947f, 30.4871f;
case 25:
return -1153.9481f, -1425.0186f, 3.9544f;
case 26:
return 1322.4547f, -1651.1252f, 51.1885f;
case 27:
return -3169.4204f, 1074.7272f, 19.8343f;
case 28:
return 17.6804f, -1114.288f, 28.797f;
case 29:
return 1697.9788f, 3753.2002f, 33.7053f;
case 30:
return 245.2711f, -45.8126f, 68.941f;
case 31:
return 844.1248f, -1025.5707f, 27.1948f;
case 32:
return -325.8904f, 6077.0264f, 30.4548f;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
case 34:
return -1313.9485f, -390.9637f, 35.592f;
case 35:
return -1111.2375f, 2688.4626f, 17.6131f;
case 36:
return -3165.2307f, 1082.8551f, 19.8438f;
case 37:
return 2569.6116f, 302.576f, 107.7349f;
case 38:
return 811.8699f, -2149.1016f, 28.6363f;
case 39:
return -1147.3138f, -1992.4344f, 12.1803f;
case 40:
return 724.524f, -1089.081f, 21.1692f;
case 41:
return -354.5272f, -135.4011f, 38.185f;
case 42:
return 113.2615f, 6624.2803f, 30.7871f;
case 43:
return 1174.7074f, 2644.4497f, 36.7552f;
case 44:
if(bParam1) return -211.5f, -1324.2f, 30.296f;
else return -205.6654f, -1311.1127f, 30.296f;
break;
case 45:
return func_130(Global_102825);
case 46:
if(Global_1853747 !=_INVALID_PLAYER_INDEX())if(func_128(Global_1853747)) return func_121(2, 2);
elseif(func_120(Global_1853747)) return func_121(45, 3);
else return 1000000f, 1000000f, 1000000f;
else return 1000000f, 1000000f, 1000000f;
break;
case 47:
return 510.1f, 4749.5f, -69f;
case 48:
return -1422.1969f, -3015.8027f, -79.1603f;
case 49:
return 203.0799f, 5200.189f, -89.6f;
case 52:
return 2714.5466f, -354.2701f, -55.1867f;
case 50:
return Global_1970473;
case 51:
return 1100f, 220f, -50f;
case 53:
return 1560f, 400f, -50f;
case 54:
return -2159.901f, 1075.2125f, -25.361736f;
case 55:
return -2194.1226f, 1103.8047f, -24.2451f;
case 56:
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
case 156:
return -1029.1659f, -426.3766f, 72.2069f;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
case 158:
return -1013.7179f, -768.3539f, 69.4942f;
}
return 1000000f, 1000000f, 1000000f;
case 57:
return -1010f, -70f, -100f;
case 58:
return func_117();
case 59:
return 560f, -405f, -69.6591f;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__117() // Position - 0x81D5{
if(!_IS_NULL_VECTOR(Global_1956117)) return Global_1956117;
switch (func_118()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_118() // Position - 0x84D0{
return Global_2652258.f_2650;
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x84DF{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}
BOOL func_120(Player plParam0) // Position - 0x8509{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 0) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 1) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 2)) return true;
return false;
}


Vector3 func__121(int iParam0, int iParam1) // Position - 0x8561{
var unk;
var unk7;
unk7={
1000000f, 1000000f, 1000000f 
};
if(Global_1853747 !=_INVALID_PLAYER_INDEX())if(iParam1==3)if(func_122(iParam0, 1, &unk, 0, false)) unk7={
unk 
};
elseif(iParam1==2)if(IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))if(func_122(iParam0, 1, &unk, 0, false)) unk7={
unk 
};
elseif(IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))if(func_122(iParam0, 2, &unk, 0, false)) unk7={
unk 
};
return unk7;
}
BOOL func_122(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x860B{
var unk;
Vector3 vector;
var unk12;
Vector3 vector2;
if(!func_127(iParam3, &unk)) return false;
if(!func_127(iParam1, &vector)) return false;
if(!bParam4) unk12={
func_125(iParam0) 
};
else unk12={
func_124(iParam0) 
};
vector2={
unk12 - unk 
};
vector2={
func_123(vector2, -unk.f_3.f_2) 
};
vector2={
func_123(vector2, vector.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, 0f, vector2) 
};
uParam2->f_3={
unk12.f_3 
};
return true;
}


Vector3 func__123(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x86A0{
float num;
float num2;
float num3;
num2=SYSTEM::SIN(fParam3);
num3=SYSTEM::COS(fParam3);
num=(fParam0 * num3) - (fParam0.f_1 * num2);
num.f_1=(fParam0 * num2) + (fParam0.f_1 * num3);
num.f_2=fParam0.f_2;
return num;
}


struct<6> func_124(int iParam0) // Position - 0x86E4{
var unk;
switch (iParam0){
case 0:
unk={
1102.1f, -3010.2f, -39.35f 
};
unk.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
unk={
1105.05f, -3010.2f, -39.35f 
};
unk.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
unk={
1105.05f, -3008.75f, -39.35f 
};
unk.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
unk={
1102.1f, -3002.1f, -39.35f 
};
unk.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
unk={
1105.05f, -3002.1f, -39.35f 
};
unk.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
unk={
1105.05f, -3000.65f, -39.35f 
};
unk.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
unk={
1102.1f, -2994.2f, -39.35f 
};
unk.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
unk={
1105.05f, -2994.2f, -39.35f 
};
unk.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
unk={
1105.05f, -2992.65f, -39.35f 
};
unk.f_3={
0f, 0f, -84.96f 
};
break;
}
return unk;
}


struct<6> func_125(int iParam0) // Position - 0x8868{
return func_126(iParam0);
}


struct<6> func_126(int iParam0) // Position - 0x8876{
var unk;
switch (iParam0){
case 0:
unk={
1105.22f, -3013.985f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 1:
unk={
1104.105f, -3013.985f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 19:
unk={
1105.22f, -3005.985f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 20:
unk={
1104.105f, -3005.985f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 2:
unk={
1102f, -3011.925f, -39.95f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 3:
unk={
1103f, -3010f, -38.125f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 4:
unk={
1103.213f, -3013.483f, -39.03f 
};
unk.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
unk.f_3={
0f, 0f, 0f 
};
unk={
1101.4084f, -3012.3198f, -38.45339f 
};
break;
case 6:
unk.f_3={
0f, 0f, 0f 
};
unk={
1103.0374f, -3012.3184f, -39.998745f 
};
break;
case 7:
unk={
1105.645f, -3012.04f, -39.542f 
};
unk.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
unk.f_3={
0f, 0f, 0f 
};
unk={
1104.0634f, -3012.3677f, -39.998753f 
};
break;
case 9:
unk={
1105.6648f, -3012.3345f, -38.50835f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 10:
unk={
1102.504f, -3012.35f, -39.341f 
};
unk.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
unk={
1102.9282f, -3012.6934f, -39.999454f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 12:
unk={
1102.9421f, -3011.315f, -37.999454f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 61:
unk={
1101.9943f, -3012.8777f, -39.95f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 62:
unk={
1103.1519f, -3013.0325f, -38.24946f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 13:
unk={
1102.465f, -3009.515f, -39.341f 
};
unk.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
unk={
1102.9167f, -3009.525f, -39.99945f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 15:
unk={
1102.9218f, -3010.8872f, -37.99945f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 63:
unk={
1101.6818f, -3009.227f, -39.949997f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 64:
unk={
1102.4534f, -3008.5105f, -38.199997f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 16:
unk={
1104.684f, -3009.561f, -39.341f 
};
unk.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
unk={
1104.3401f, -3008.6982f, -39.999454f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 18:
unk={
1104.3442f, -3009.618f, -37.981716f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 65:
unk={
1105.4595f, -3009.7935f, -39.949997f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 66:
unk={
1104.7828f, -3010.433f, -38.199997f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 44:
unk={
1104.0251f, -3007.3157f, -39.9987f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 21:
unk={
1103.562f, -3014f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 22:
unk={
1103.562f, -3014f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 23:
unk={
1102.1f, -3010.2f, -39.35f 
};
unk.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
unk={
1105.05f, -3010.2f, -39.35f 
};
unk.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
unk={
1105.05f, -3008.75f, -39.35f 
};
unk.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
unk={
1102.05f, -3011.717f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 27:
unk={
1102.05f, -3012.653f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 28:
unk={
1105.05f, -3012.653f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 29:
unk={
1105.05f, -3011.717f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 30:
unk={
1102.1f, -3002.1f, -39.35f 
};
unk.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
unk={
1105.05f, -3002.1f, -39.35f 
};
unk.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
unk={
1105.05f, -3000.65f, -39.35f 
};
unk.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
unk={
1102.05f, -3003.592f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 34:
unk={
1102.05f, -3004.541f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 35:
unk={
1105.05f, -3004.541f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 36:
unk={
1105.05f, -3003.592f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 37:
unk={
1102.1f, -2994.2f, -39.35f 
};
unk.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
unk={
1105.05f, -2994.2f, -39.35f 
};
unk.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
unk={
1105.05f, -2992.65f, -39.35f 
};
unk.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
unk={
1102.05f, -2995.582f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 41:
unk={
1102.05f, -2996.501f, -39.35f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 42:
unk={
1105.05f, -2996.501f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 43:
unk={
1105.05f, -2995.582f, -39.35f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 45:
unk={
1101f, -3011.9f, -39.95f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 46:
unk={
1102f, -3010f, -38.115f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 47:
unk={
1105.174f, -3004.1602f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 48:
unk={
1105.1749f, -3005.818f, -37.919476f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 49:
unk={
1106.5996f, -3000.8472f, -39.89988f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 50:
unk={
1106.6013f, -3002.171f, -37.89988f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 51:
unk={
1101.95f, -3011.9f, -39.2f 
};
unk.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
unk={
1101.95f, -3010f, -39.2f 
};
unk.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
unk={
1105.16f, -3009.06f, -39.2f 
};
unk.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
unk={
1102.4756f, -3008.5076f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 55:
unk={
1099f, -3008.5076f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 56:
unk={
1103.5928f, -3008.2698f, -39.9987f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 57:
unk={
1103.565f, -3014f, -39.988f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 58:
unk={
1103.565f, -3014f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 59:
unk={
1103.565f, -3014f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 60:
unk={
1103.55f, -3014f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 67:
unk={
1103.55f, -3013.762f, -40f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 68:
unk={
1103.55f, -3006.186f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
unk={
1103.6f, -3013.933f, -40f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
}
return unk;
}
BOOL func_127(int iParam0, var uParam1) // Position - 0x933D{
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return true;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return true;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return true;
default:
}
return false;
}
BOOL func_128(Player plParam0) // Position - 0x93BF{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 3) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 4) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 5)) return true;
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x9417{
return -1;
}


Vector3 func__130(int iParam0) // Position - 0x9420{
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
case 2:
return 1060f, -2990f, -35f;
case 3:
return 974.9542f, -3000.0908f, -35f;
case 6:
return -1586.36f, -566.6f, 106.17f;
case 7:
return -1389.87f, -465.17f, 82.68f;
case 8:
return -145.81f, -590.2f, 171.13f;
case 9:
return -62.49f, -823.55f, 288.74f;
case 4:
return 1102.5149f, -3158.888f, -38.5186f;
case 5:
return 1005.861f, -3156.162f, -39.907f;
case 10:
return 1103.5624f, -3000f, -40f;
case 11:
return 938.3077f, -3196.1116f, -100f;
case 12:
return -1266.802f, -3014.8364f, -49.4895f;
case 13:
return 520.0001f, 4750f, -70f;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
case 15:
return -1604.6643f, -3012.5828f, -79.9999f;
case 16:
return -1421.0149f, -3012.5867f, -80f;
case 17:
if(func_131()==0) return 205f, 5180f, -90f;
else return 170f, 5190f, 10f;
break;
case 18:
return -2000f, 1250f, 50f;
case 19:
return -1350f, 160f, -100f;
case 20:
return -1070f, -70f, -100f;
case 21:
return 570f, -415f, -70f;
default:
return 0f, 0f, -200f;
}
return 0f, 0f, -200f;
}

int func_131() // Position - 0x9697{
return func_132(PLAYER::PLAYER_ID());
}

int func_132(Player plParam0) // Position - 0x96A7{
return MISC::GET_BITS_IN_RANGE(Global_2657589[plParam0 /*466*/].f_321.f_3, 28, 31);
}
BOOL func_133(int iParam0) // Position - 0x96C4{
return func_111(iParam0, 0, false);
}

int func_134(int iParam0) // Position - 0x96D4{
switch (iParam0){
case -1:
return 6;
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 50:
return 0;
case 7:
return 1;
case 8:
return 1;
case 9:
return 1;
case 10:
return 1;
case 11:
return 1;
case 12:
return 1;
case 13:
return 1;
case 14:
return 1;
case 15:
return 1;
case 16:
return 1;
case 17:
return 1;
case 18:
return 1;
case 19:
return 1;
case 20:
return 1;
case 21:
return 1;
case 22:
return 2;
case 23:
return 2;
case 24:
return 2;
case 25:
return 2;
case 26:
return 2;
case 27:
return 2;
case 28:
return 3;
case 29:
return 3;
case 30:
return 3;
case 31:
return 3;
case 32:
return 3;
case 33:
return 3;
case 34:
return 3;
case 35:
return 3;
case 36:
return 3;
case 37:
return 3;
case 38:
return 3;
case 39:
return 4;
case 40:
return 4;
case 41:
return 4;
case 42:
return 4;
case 43:
return 4;
case 44:
return 4;
case 45:
return 5;
case 46:
return 3;
case 47:
return 3;
case 48:
return 3;
case 49:
return 3;
case 52:
return 3;
case 51:
return 1;
case 53:
return 3;
case 54:
return 2;
case 55:
return 1;
case 56:
return 3;
case 57:
return 1;
case 58:
return 3;
case 59:
return 3;
}
return 6;
}
BOOL func_135() // Position - 0x99FD{
return Global_100733.f_387 > 0;
}

int func_136(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x9A0E{
int i;
if(iParam1==7) return 0;
if(!bParam3)if(Global_98159.f_44==1) return 2;
if(iParam1==0){
if(func_28(0)) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
Global_23131.f_5=0;
if(iParam2 !=5) PLAYER::FORCE_CLEANUP(8);
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) return 2;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!_CAN_ENTER_FREEROAM_STATE(iParam2)) return 0;
if(Global_43218==8) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218=Global_43218 + 1;
if(iParam4 !=0) func_137(uParam0, iParam4);
}
return 2;
}


void func_137(var uParam0, int iParam1) // Position - 0x9B45{
int i;
if(Global_43218==0) return;
if(*uParam0==-1) return;
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) Global_43224[i /*4*/].f_3=iParam1;
}
*uParam0=-1;
return;
}


void func_138(Vehicle veParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x9B94{
var unk;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(iParam5 !=24 && iParam5 !=25) return;
if(iParam5==24)if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], false))if(Global_77348.f_484[25]==veParam0) return;
if(!bParam6)if(VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("tourbus")) return;
func_164(iParam5);
unk.f_9=49;
unk.f_59=2;
func_14(veParam0, &unk);
if(func_108(fParam1, 0f, 0f, 0f, false)){
fParam1={
ENTITY::GET_ENTITY_COORDS(veParam0, true) 
};
fParam4=ENTITY::GET_ENTITY_HEADING(veParam0);
}
if(iParam5==24)if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")) Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
func_158(iParam5, &unk, fParam1, fParam4, func_9(veParam0));
func_139(iParam5, veParam0, 0);
}
return;
}


void func_139(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x9CBD{
Vehicle vehicle;
if(iParam0==-1) return;
if(!func_157(&Global_77348.f_555[0 /*21*/], iParam0)) return;
if(!IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))if(Global_77348.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(veParam1)) return;
if(Global_78255 !=-1 && Global_78255 !=iParam0) return;
if(ENTITY::DOES_ENTITY_EXIST(veParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
if(iParam0==24) Global_113648.f_32751.f_4801=func_53();
if(veParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
vehicle=func_156(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 !=vehicle) func_140(vehicle, _CHAR_NULL);
}
Global_78254=veParam1;
Global_78255=iParam0;
Global_78256=iParam2;
}}}
return;
}


void func_140(Vehicle veParam0, eCharacter echParam1) // Position - 0x9DD4{
Ped pedInVehicleSeat;
int i;
int j;
if(!func_141(veParam0)) return;
if(echParam1 !=CHAR_MICHAEL && echParam1 !=CHAR_FRANKLIN && echParam1 !=CHAR_TREVOR){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
if(!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat)) pedInVehicleSeat=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))if(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Zero")) echParam1=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_One")) echParam1=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Two")) echParam1=CHAR_TREVOR;
if(echParam1 !=CHAR_MICHAEL && echParam1 !=CHAR_FRANKLIN && echParam1 !=CHAR_TREVOR) echParam1=Global_113648.f_2365.f_539.f_4321;
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
Global_113648.f_32751.f_5590=echParam1;
Global_78253=veParam0;
Global_113648.f_32751.f_5588=1;
func_14(veParam0, &(Global_113648.f_32751.f_5510));
return;
}
BOOL func_141(Vehicle veParam0) // Position - 0x9FD6{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_20(veParam0, 0, false) || func_20(veParam0, 1, false) || func_20(veParam0, 2, false) || func_9(veParam0) !=145 || func_155(veParam0) || func_154(veParam0) || func_153(veParam0) || func_152(veParam0) || !func_142(ENTITY::GET_ENTITY_MODEL(veParam0))){
func_154(veParam0);
func_154(veParam0);
func_20(veParam0, 0, false);
func_20(veParam0, 1, false);
func_20(veParam0, CHAR_TREVOR, false);
func_9(veParam0) !=145;
return false;
}
return true;
}
BOOL func_142(Hash hParam0) // Position - 0xA0B3{
if(hParam0==0) return false;
if(!func_143(hParam0, false, -1)) return false;
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
BOOL func_143(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xA265{
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
if(hParam0==joaat("blimp"))if(!func_150() && !func_149() && !func_148() && !func_147() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED()) return false;
if(hParam0==joaat("hotknife") || hParam0==joaat("carbonrs") || hParam0==joaat("khamelion")){
if(func_83() || MISC::IS_PC_VERSION() || func_82()){
}elseif(!func_148()){
return false;
}}
if(bParam1)if(!func_146(hParam0, iParam2)) return false;
if(!func_144(hParam0)) return false;
return true;
}
BOOL func_144(Hash hParam0) // Position - 0xA3E7{
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
BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xA4B3{
if(MISC::IS_PC_VERSION()) return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
return false;
}
BOOL func_146(Hash hParam0, int iParam1) // Position - 0xA4CA{
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
BOOL func_147() // Position - 0xDAFD{
return false;
}
BOOL func_148() // Position - 0xDB06{
return true;
}
BOOL func_149() // Position - 0xDB0F{
return true;
}
BOOL func_150() // Position - 0xDB18{
if(DLC::IS_DLC_PRESENT(-1226939934)) return true;
return false;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xDB31{
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
BOOL func_152(Vehicle veParam0) // Position - 0xDBE9{
Hash entityModel;
const char* vehicleNumberPlateText;
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
vehicleNumberPlateText=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);
if(entityModel==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G ")) return true;
if(!func_143(entityModel, false, -1)) return true;
return false;
}
BOOL func_153(Vehicle veParam0) // Position - 0xDC30{
int i;
for (i=0;
i < 3;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))if(Global_98042[i]==veParam0) return true;
}
return false;
}
BOOL func_154(Vehicle veParam0) // Position - 0xDC6B{
int i;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))if(Global_98012[i]==veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i])==ENTITY::GET_ENTITY_MODEL(veParam0)) return true;
}}
return false;
}
BOOL func_155(Vehicle veParam0) // Position - 0xDCE7{
int i;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))if(veParam0==Global_77348.f_484[24]) return false;
for (i=0;
i < 68;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))if(i !=24 && i !=21 && i !=22 && i !=23 && i !=27 && i !=30 && i !=33 && i !=28 && i !=31 && i !=34 && i !=26 && i !=29 && i !=32)if(veParam0==Global_77348.f_484[i]) return true;
}
return false;
}
Vehicle func_156(int iParam0) // Position - 0xDDCF{
if(iParam0==-1) return 0;
return Global_77348.f_139[iParam0];
}
BOOL func_157(var uParam0, int iParam1) // Position - 0xDDEB{
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
uParam0->f_4=func_11(CHAR_MICHAEL, 1);
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
uParam0->f_4=func_11(CHAR_MICHAEL, 1);
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
uParam0->f_4=func_11(CHAR_FRANKLIN, 1);
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
uParam0->f_4=func_11(CHAR_FRANKLIN, 2);
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
uParam0->f_4=func_11(CHAR_FRANKLIN, 1);
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
uParam0->f_4=func_11(CHAR_FRANKLIN, 2);
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
uParam0->f_4=func_11(CHAR_TREVOR, 1);
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
uParam0->f_4=func_11(CHAR_TREVOR, 1);
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
uParam0->f_4=func_11(CHAR_TREVOR, 1);
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
if(!func_108(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false)) *uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f) uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}
if(IS_BIT_SET(uParam0->f_9, 19)){
if(!func_108(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(IS_BIT_SET(uParam0->f_9, 20)){
if(!func_108(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return num;
}


void func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0xF4D9{
if(func_157(&Global_77348.f_555[0 /*21*/], iParam0)){
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_163(iParam0);
func_162(uParam1, &Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]);
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
func_159(iParam0, true);
}}
return;
}


void func_159(int iParam0, BOOL bParam1) // Position - 0xF5D2{
if(iParam0==-1) return;
if(bParam1){
if(!func_161(iParam0, 0)){
func_160(iParam0, 1, false);
func_160(iParam0, 2, false);
func_160(iParam0, 3, false);
func_160(iParam0, 4, false);
func_160(iParam0, 0, true);
Global_77348[iParam0]=1;
}}else{
func_160(iParam0, 0, false);
}
return;
}


void func_160(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF62F{
if(iParam0==-1) return;
if(bParam2) MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
else MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);
return;
}
BOOL func_161(int iParam0, int iParam1) // Position - 0xF66A{
if(iParam0==-1) return false;
return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_162(var uParam0, var uParam1) // Position - 0xF68A{
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


void func_163(int iParam0) // Position - 0xF756{
if(iParam0==-1) return;
if(func_157(&Global_77348.f_555[0 /*21*/], iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77348.f_139[iParam0]);
Global_77348.f_139[iParam0]=0;
}
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)) func_159(iParam0, false);
}
return;
}


void func_164(int iParam0) // Position - 0xF7CD{
iParam0 !=24 && iParam0 !=25;
func_163(iParam0);
func_159(iParam0, false);
return;
}


void func_165() // Position - 0xF7F4{
Global_23131.f_6=1;
return;
}


void func_166() // Position - 0xF802{
Hash entityModel;
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_29)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_32) < 2500f){
veLocal_29=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(veLocal_29)){
entityModel=ENTITY::GET_ENTITY_MODEL(veLocal_29);
entityModel==joaat("dune");
}}}}
return;
}
Hash func_167() // Position - 0xF85C{
return joaat("dune");
}


void func_168(BOOL bParam0) // Position - 0xF869{
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dune"));
if(ENTITY::DOES_ENTITY_EXIST(veLocal_54))if(bParam0) VEHICLE::DELETE_VEHICLE(&veLocal_54);
else ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_54);
return;
}
BOOL func_169() // Position - 0xF897{
if(func_28(9)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor2"))==1){
if(!uLocal_38[0]) uLocal_38[0]=1;
return false;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist2b"))==1){
if(!uLocal_38[1]) uLocal_38[1]=1;
return false;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_air"))==1){
if(!uLocal_38[2]) uLocal_38[2]=1;
return false;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground"))==1){
if(!uLocal_38[3]) uLocal_38[3]=1;
return false;
}
if(Global_100715) return false;
if(iLocal_35 !=-1) return false;
if(func_191()==309) return false;
return true;
}
return false;
}


void func_170(int iParam0, int iParam1) // Position - 0xF950{
func_171(iParam0, iParam1);
return;
}


void func_171(int iParam0, int iParam1) // Position - 0xF960{
*iParam0=*iParam0 || iParam1;
return;
}


void func_172(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xF971{
func_173(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
return;
}


void func_173(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xF992{
int i;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")) return;
if(iParam3 < 0) return;
if(iParam5 < 500 && iParam5 !=-1) return;
if(iParam4 < 0 && iParam4 !=-1) return;
if(iParam6 < 1 || iParam6 > 7) return;
if(iParam7==235) return;
if(iParam8==235) return;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0)) return;
}
if(Global_113648.f_20412.f_145 < 9){
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=MISC::GET_GAME_TIMER() + iParam3;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=iParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=iParam9;
if(iParam4 !=-1) Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=MISC::GET_GAME_TIMER() + iParam3 + iParam4;
else Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 + 1;
func_174();
}
return;
}


void func_174() // Position - 0xFB65{
int i;
for (i=0;
i < 3;
i=i + 1){
Global_113648.f_20412.f_146[i]=0;
}
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0]) Global_113648.f_20412.f_146[0]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1]) Global_113648.f_20412.f_146[1]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2]) Global_113648.f_20412.f_146[2]=Global_113648.f_20412[i /*16*/].f_12;
}
return;
}
BOOL func_175(int iParam0, int iParam1) // Position - 0xFC7C{
return iParam0 && iParam1 !=false;
}


void func_176(var uParam0) // Position - 0xFC8B{
BOOL flag;
Vehicle vehiclePedIsUsing;
Vehicle vehiclePedIsUsing2;
int num;
var unk;
flag=false;
if(iLocal_47 !=9){
if(!Global_113648.f_19985.f_14){
func_1(105, 1, false);
Global_113648.f_19985.f_14=1;
flag=true;
}else{
flag=true;
}}else{
func_1(105, false, false);
Global_113648.f_19985.f_14=0;
}
if(iLocal_47 !=1 && iLocal_47 !=8){
if(func_169() && !*uParam0){
func_177(false);
iLocal_47=1;
}}
switch (iLocal_47){
case 0:
iLocal_47=1;
break;
case 1:
if(!func_169())if(fLocal_31 < 50625f) iLocal_47=2;
elseif(bLocal_37) iLocal_47=2;
break;
case 2:
STREAMING::REQUEST_MODEL(joaat("cuban800"));
iLocal_47=3;
break;
case 3:
STREAMING::REQUEST_MODEL(joaat("cuban800"));
if(STREAMING::HAS_MODEL_LOADED(joaat("cuban800"))){
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_48)){
MISC::CLEAR_AREA_OF_VEHICLES(uLocal_50, 8f, false, false, false, false, false, false, 0);
veLocal_48=VEHICLE::CREATE_VEHICLE(joaat("cuban800"), uLocal_50, 25.29f, true, true, false);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_48, 2);
func_170(&(Global_113648.f_19985), 128);
iLocal_47=4;
}else{
iLocal_47=4;
}}
break;
case 4:
if(ENTITY::DOES_ENTITY_EXIST(veLocal_48)){
if(ENTITY::IS_ENTITY_DEAD(veLocal_48, false) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
iLocal_47=9;
return;
}}
if(func_28(9)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground"))==1){
if(!ENTITY::IS_ENTITY_DEAD(veLocal_48, false)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_48, 2);
return;
}}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground"))==0){
if(!ENTITY::IS_ENTITY_DEAD(veLocal_48, false)) VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_48, 1);
}
if(!bLocal_37){
if(fLocal_31 >=50625f && !*uParam0){
func_177(false);
iLocal_47=1;
return;
}}
if(!flag && !*uParam0){
if(!bLocal_49){
if(PED::IS_PED_IN_ANY_VEHICLE(pedLocal_28, false)){
vehiclePedIsUsing=PED::GET_VEHICLE_PED_IS_USING(pedLocal_28);
if(vehiclePedIsUsing==veLocal_48){
bLocal_49=true;
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_48);
iLocal_47=9;
}}}}
if(*uParam0) PED::SET_PED_INTO_VEHICLE(pedLocal_28, veLocal_48, -1);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(veLocal_48, false))if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, true)) func_165();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsUsing2=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(vehiclePedIsUsing2==veLocal_48){
SCRIPT::REQUEST_SCRIPT("Traffick_Air");
if(ENTITY::DOES_ENTITY_EXIST(veLocal_29) && !ENTITY::IS_ENTITY_DEAD(veLocal_29, false))if(ENTITY::GET_ENTITY_MODEL(veLocal_29) !=joaat("dune") && ENTITY::GET_ENTITY_MODEL(veLocal_29) !=joaat("cuban800"))if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(veLocal_29, 2137.1204f, 4799.97f, 39.678535f, 2116.64f, 4790.417f, 45.452946f, 25f, false, true, 0)) func_138(veLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, false);
elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) VEHICLE::SET_PLAYERS_LAST_VEHICLE(veLocal_29);
iLocal_47=6;
}}}
break;
case 6:
if(SCRIPT::HAS_SCRIPT_LOADED("Traffick_Air")){
num=0;
if(*uParam0){
num=1;
}else{
num=func_136(&iLocal_35, 6, 9, false, 0);
bLocal_45=true;
}
if(num==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
if(!*uParam0) func_84(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
iLocal_30=SYSTEM::START_NEW_SCRIPT("Traffick_Air", 54000);
func_81(15);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Air");
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_48);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(Global_44446==true) func_72(PLAYER::PLAYER_PED_ID());
bLocal_49=false;
iLocal_47=7;
}elseif(num==0){
bLocal_45=false;
func_177(false);
iLocal_47=9;
}}
break;
case 7:
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_30)){
if(func_175(Global_112299, 1)){
iLocal_47=8;
}else{
func_71(&iLocal_35);
func_54();
unk=func_53();
func_45(&unk, 0, 0, 3, 0, 0, 0);
Global_113648.f_19985.f_11=unk;
func_1(105, false, false);
Global_113648.f_19985.f_14=0;
iLocal_47=9;
}
*uParam0=0;
func_43(&Global_112299, 1);
}
break;
case 8:
if(Global_100681==10){
if(Global_100715){
*uParam0=1;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2136.4456f, 4791.483f, 39.9702f, true, false, false, true);
STREAMING::REQUEST_MODEL(joaat("cuban800"));
SCRIPT::REQUEST_SCRIPT("Traffick_Air");
if(STREAMING::HAS_MODEL_LOADED(joaat("cuban800"))){
MISC::CLEAR_AREA_OF_VEHICLES(uLocal_50, 8f, false, false, false, false, false, false, 0);
veLocal_48=VEHICLE::CREATE_VEHICLE(joaat("cuban800"), uLocal_50, 25.29f, true, true, false);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
iLocal_47=3;
}}else{
*uParam0=0;
iLocal_47=1;
}}elseif(Global_100681==13){
func_71(&iLocal_35);
func_54();
*uParam0=0;
iLocal_47=1;
}
break;
case 9:
if(fLocal_31 >=50625f && func_32(Global_113648.f_19985.f_11)){
func_177(false);
iLocal_47=1;
}
break;
default:
break;
}
return;
}


void func_177(BOOL bParam0) // Position - 0x101D9{
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
if(ENTITY::DOES_ENTITY_EXIST(veLocal_48))if(bParam0) VEHICLE::DELETE_VEHICLE(&veLocal_48);
else ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_48);
if(func_175(Global_113648.f_19985, 128)) func_43(&(Global_113648.f_19985), 128);
bLocal_49=false;
return;
}
BOOL func_178() // Position - 0x10227{
if(!func_189()) return false;
if(!bLocal_45){
if(func_191()==309) return true;
if(!_CAN_ENTER_FREEROAM_STATE(9)) return false;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground"))==1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_air"))==1) return true;
pedLocal_28=PLAYER::PLAYER_PED_ID();
ENTITY::IS_ENTITY_DEAD(pedLocal_28, false);
if(func_188()) return true;
if(_GET_CURRENT_PLAYER_CHARACTER() !=CHAR_TREVOR) return false;
if(!func_182(6)){
if(PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) bLocal_46=true;
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) bLocal_46=true;
PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0);
!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID());
PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0;
PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0);
ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID());
PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID());
PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID());
PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true);
PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID());
Global_112695;
Global_32166;
func_181();
func_180(8, -1);
if(func_179()) return true;
return false;
}else{
bLocal_46=false;
}
return true;
}
BOOL func_179() // Position - 0x10369{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_180(int iParam0, int iParam1) // Position - 0x10393{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_181() // Position - 0x103CB{
return Global_1575060;
}
BOOL func_182(int iParam0) // Position - 0x103D7{
eCharacter character;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!func_13(character)) return false;
switch (iParam0){
case 9:
case 0:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_187() || Global_112695 || Global_32166 || func_181() || func_180(8, -1) || func_135() || func_186() || func_179() || func_185() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 1:
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_187() || Global_32166 || func_181() || func_180(8, -1) || func_179() || func_135() || func_186() || func_185() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 2:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_187() || Global_112695 || Global_32166 || func_181() || func_180(8, -1) || func_179() || func_135() || func_186() || func_185() || Global_113648.f_7690.f_919[character]==5 || Global_43804 !=-1) return false;
break;
case 3:
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_187() || Global_112695 || Global_32166 || func_181() || func_180(8, -1) || func_135() || func_186() || func_185() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 4:
if(func_187() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_180(8, -1) || func_185() || func_184() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 5:
if(func_180(8, -1) || func_135() || func_186() || func_184() || func_183()) return false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8) return false;
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_187() || Global_32166 || func_181() || func_180(8, -1) || func_186() || func_179() || func_185() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 7:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_187() || func_186() || Global_112695 || Global_32166 || func_181() || Global_44446 || func_180(8, -1) || func_179() || func_184() || func_185() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 8:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_187() || Global_112695 || Global_32166 || func_181() || func_180(8, -1) || func_179() || func_184() || func_135() || func_186() || func_185()) return false;
break;
}}else{
return false;
}}else{
return false;
}}else{
return false;
}
return true;
}
BOOL func_183() // Position - 0x10AF4{
return Global_100720.f_1;
}
BOOL func_184() // Position - 0x10B02{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_185() // Position - 0x10B25{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_186() // Position - 0x10B3F{
return Global_100733.f_388 > 0;
}
BOOL func_187() // Position - 0x10B50{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_188() // Position - 0x10B6C{
if(Global_100681==13 || Global_100681==10 || Global_100681==11 || Global_100681==12) return false;
return true;
}
BOOL func_189() // Position - 0x10BAA{
if(Global_113648.f_9087) return func_190(0, 15) && func_190(0, 16);
else return true;
return false;
}
BOOL func_190(int iParam0, int iParam1) // Position - 0x10BDA{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}

int func_191() // Position - 0x10C24{
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) return Global_98791;
if(func_185()) return Global_98791;
return 318;
}


void func_192() // Position - 0x10C4B{
if(!bLocal_80){
iLocal_79=PED::ADD_SCENARIO_BLOCKING_AREA({
40.073f, 4788.5586f, 2157.109f 
}
-{
25f, 25f, 25f 
}
,{
40.073f, 4788.5586f, 2157.109f 
}
+{
25f, 25f, 25f 
}
, false, true, true, true);
bLocal_80=true;
}
return;
}

int func_193(int iParam0) // Position - 0x10CA4{
int num;
int offset;
if(iParam0 <=31){
num=9;
offset=iParam0;
}else{
num=10;
offset=iParam0 - 32;
}
if(IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], offset)) return 0;
MISC::SET_BIT(&Global_113648.f_9087.f_99.f_219[num], offset);
return 1;
}


void func_194() // Position - 0x10CFB{
if(iLocal_79 !=0) PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_79, false);
func_177(true);
func_168(true);
func_197();
func_195();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_195() // Position - 0x10D26{
int i;
for (i=0;
i < 8;
i=i + 1){
if(Global_97614[i /*17*/] && !Global_97614[i /*17*/].f_1)if(Global_97614[i /*17*/].f_3==0)if(Global_97614[i /*17*/].f_5 !=88 && Global_97614[i /*17*/].f_5 !=89 && Global_97614[i /*17*/].f_5 !=92) func_196(Global_97614[i /*17*/].f_5, true);
}
return;
}


void func_196(int iParam0, BOOL bParam1) // Position - 0x10DAD{
if(bParam1)if(iParam0 !=88 && iParam0 !=89 && iParam0 !=92) Global_94666[iParam0 /*2*/]=1;
else Global_94666[iParam0 /*2*/]=0;
return;
}


void func_197() // Position - 0x10DEB{
int i;
iLocal_36=0;
WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_COMBATPISTOL"));
WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_STICKYBOMB"));
WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_ASSAULTSHOTGUN"));
WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_RPG"));
for (i=0;
i < 5;
i=i + 1){
if(OBJECT::DOES_PICKUP_EXIST(uLocal_67[i])) OBJECT::REMOVE_PICKUP(uLocal_67[i]);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_61[i])) OBJECT::DELETE_OBJECT(&uLocal_61[i]);
}
return;
}