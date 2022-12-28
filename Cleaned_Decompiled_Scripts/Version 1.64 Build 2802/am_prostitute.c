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
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
BOOL bLocal_56=0;
int iLocal_57=0;
var uLocal_58=32;
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
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
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
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uScriptParam_0=0;
var uScriptParam_1=-1;
var uScriptParam_2=-1;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=-1;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=-1;
var uScriptParam_17=0;
var uScriptParam_18=0;
var uScriptParam_19=-1;
var uScriptParam_20=-1;
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
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_51(uScriptParam_0);
else func_45();
iLocal_53=MISC::GET_GAME_TIMER();
while (true){
func_44();
if(_SHOULD_NETWORK_SCRIPT_TERMINATE() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() || func_35(PLAYER::PLAYER_ID()) || func_34(PLAYER::PLAYER_ID()) || func_31(PLAYER::PLAYER_ID())) func_45();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_2();
func_1();
iLocal_54=iLocal_54 + 1;
if(iLocal_54 >=NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()) iLocal_54=0;
}else{
func_45();
}}
return;
}


void func_1() // Position - 0x100{
int i;
int num;
Ped playerPed;
num=PLAYER::NETWORK_PLAYER_ID_TO_INT();
for (i=0;
i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
i=i + 1){
if(iLocal_54 % i==0){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i))){
playerPed=PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i)));
if(!ENTITY::IS_ENTITY_DEAD(playerPed, false)){
if(uLocal_58[i /*3*/].f_2){
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(playerPed, true)) <=22500f){
if(!bLocal_56){
STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh");
STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh");
STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
STREAMING::REQUEST_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
bLocal_56=true;
}
if(!IS_BIT_SET(iLocal_55, i)) MISC::SET_BIT(&iLocal_55, i);
}
elseif(IS_BIT_SET(iLocal_55, i)){
MISC::CLEAR_BIT(&iLocal_55, i);
}}elseif(IS_BIT_SET(iLocal_55, i)){
MISC::CLEAR_BIT(&iLocal_55, i);
}}elseif(IS_BIT_SET(iLocal_55, i)){
MISC::CLEAR_BIT(&iLocal_55, i);
}}}}
if(iLocal_55==0 && bLocal_56 && !uLocal_58[num /*3*/].f_2){
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
bLocal_56=false;
}
return;
}


void func_2() // Position - 0x232{
Ped ped;
Ped ped2;
int num;
BOOL flag;
var args;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) return;
if(iLocal_53 > MISC::GET_GAME_TIMER()) return;
ped=0;
num=PLAYER::NETWORK_PLAYER_ID_TO_INT();
flag=false;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ped2=PLAYER::PLAYER_PED_ID();
if(func_30(&ped2)) flag=true;
}}
switch (iLocal_52){
case 0:
if(func_27(PLAYER::PLAYER_ID(), true, false) || func_26() || !flag || func_17()){
iLocal_52=4;
}else{
ped=func_13();
if(ped !=func_12(num) && ped !=0){
func_11(ped);
iLocal_53=MISC::GET_GAME_TIMER() + 0;
iLocal_52=2;
}else{
iLocal_53=MISC::GET_GAME_TIMER() + 500;
}}
break;
case 2:
if(func_4()){
Global_32318=0f;
SCRIPT::REQUEST_SCRIPT("pb_prostitute");
iLocal_53=MISC::GET_GAME_TIMER() + 250;
uLocal_58[num /*3*/].f_2=0;
iLocal_52=3;
}else{
iLocal_53=MISC::GET_GAME_TIMER() + 250;
}
break;
case 3:
if(SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pb_prostitute")) <=0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), true, 0)){
args=func_12(num);
iLocal_57=SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &args, 1, FRIEND);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pb_prostitute");
iLocal_52=0;
}
iLocal_53=MISC::GET_GAME_TIMER() + 0;
break;
case 4:
if(func_4()){
uLocal_58[num /*3*/].f_2=0;
iLocal_53=MISC::GET_GAME_TIMER() + 250;
iLocal_52=5;
}else{
iLocal_53=MISC::GET_GAME_TIMER() + 500;
}
break;
case 5:
if(!func_27(PLAYER::PLAYER_ID(), true, false) && !func_26() && flag && !func_3()){
iLocal_53=MISC::GET_GAME_TIMER() + 250;
iLocal_52=0;
}else{
iLocal_53=MISC::GET_GAME_TIMER() + 500;
}
break;
}
return;
}
BOOL func_3() // Position - 0x414{
return Global_1968327;
}
BOOL func_4() // Position - 0x420{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pb_prostitute")) <=0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), true, 0)) return true;
if(iLocal_57==0) return true;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_5();
else unk_0x54919D7FFBD2B608("pb_prostitute", 1);
return false;
}


void func_5() // Position - 0x46E{
struct<2> eventData;
int playerBits;
eventData=-1763294690;
eventData.f_1=PLAYER::PLAYER_ID();
playerBits=_GET_LOBBY_SCRIPT_EVENT_BITS(true, true);
if(playerBits !=0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, playerBits);
return;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x49D{
var address;
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, false, false))if(player !=PLAYER::PLAYER_ID() || includeLocalPlayer)if(includeSpectators) MISC::SET_BIT(&address, i);
elseif(!_NETWORK_IS_PLAYER_IN_SCTV(player, 0)) MISC::SET_BIT(&address, i);
}
return address;
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x502{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_8(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_8(int iParam0, BOOL bParam1) // Position - 0x54D{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_9();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_9() // Position - 0x58E{
return Global_1574918;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x59A{
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


void func_11(Ped pedParam0) // Position - 0x5FA{
uLocal_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/]=pedParam0;
return;
}
Ped func_12(int iParam0) // Position - 0x60C{
if(iParam0==-1) return uLocal_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/];
return uLocal_58[iParam0 /*3*/];
}
Ped func_13() // Position - 0x62B{
Ped ped;
int num;
Ped ped2;
Vehicle vehiclePedIsIn;
Vector3 entityCoords;
Vector3 entityCoords2;
Vector3 entityCoords3;
float num2;
float num3;
ped=func_14();
num=PLAYER::NETWORK_PLAYER_ID_TO_INT();
if(!ENTITY::DOES_ENTITY_EXIST(func_12(num))){
func_11(0);
return ped;
}
if(iLocal_57 !=0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_57)){
if(uLocal_58[num /*3*/].f_2) return func_12(num);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ped2=PLAYER::PLAYER_PED_ID();
if(func_30(&ped2)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn)){
if(func_12(num)==VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false) || PED::IS_PED_IN_VEHICLE(func_12(num), vehiclePedIsIn, true)){
uLocal_58[num /*3*/].f_2=1;
return func_12(num);
}}
if(ped==0) return func_12(num);
entityCoords={
ENTITY::GET_ENTITY_COORDS(func_12(num), false) 
};
entityCoords2={
ENTITY::GET_ENTITY_COORDS(ped, false) 
};
entityCoords3={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) 
};
num2=SYSTEM::VDIST(entityCoords, entityCoords3);
num3=SYSTEM::VDIST(entityCoords3, entityCoords2);
if(num2 > num3)if(num2 - num3 > 25f) return ped;
elseif(num3 < 6f && num2 > 11f) return ped;
else return func_12(num);
else return func_12(num);
}}}}
return ped;
}

int func_14() // Position - 0x791{
int num;
var sizeAndPeds;
int pedNearbyPeds;
int i;
num=0;
sizeAndPeds=8;
pedNearbyPeds=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
if(pedNearbyPeds > 0){
for (i=0;
i <=7;
i=i + 1){
if(!PED::IS_PED_INJURED(sizeAndPeds[i]))if(PED::IS_PED_USING_SCENARIO(sizeAndPeds[i], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || PED::IS_PED_USING_SCENARIO(sizeAndPeds[i], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))if(func_16(sizeAndPeds[i]))if(!func_15(sizeAndPeds[i]))if(!PED::IS_PED_FLEEING(sizeAndPeds[i])) return sizeAndPeds[i];
}}
return num;
}
BOOL func_15(var uParam0) // Position - 0x82C{
int i;
i=0;
for (i=0;
i <=31;
i=i + 1){
if(uLocal_58[i /*3*/]==uParam0) return true;
}
return false;
}
BOOL func_16(Entity eParam0) // Position - 0x85A{
var script;
const char* entityScript;
entityScript=ENTITY::GET_ENTITY_SCRIPT(eParam0, &script);
if(!MISC::IS_STRING_NULL_OR_EMPTY(entityScript)){
if(MISC::ARE_STRINGS_EQUAL(entityScript, "GB_VEHICLE_EXPORT")) return false;
if(MISC::ARE_STRINGS_EQUAL(entityScript, "BUSINESS_BATTLES_SELL")) return false;
if(MISC::ARE_STRINGS_EQUAL(entityScript, "BUSINESS_BATTLES")) return false;
if(MISC::ARE_STRINGS_EQUAL(entityScript, "GB_CASINO")) return false;
if(MISC::ARE_STRINGS_EQUAL(entityScript, "GB_CASINO_HEIST")) return false;
}
return true;
}
BOOL func_17() // Position - 0x8CC{
if(func_3()) return true;
if(func_24(PLAYER::PLAYER_ID()) !=-1) return true;
if(func_22(PLAYER::PLAYER_ID())) return true;
if(func_20(PLAYER::PLAYER_ID())==309 || func_18(PLAYER::PLAYER_ID())==309) return true;
return false;
}

int func_18(Player plParam0) // Position - 0x924{
if(func_19(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_32;
return -1;
}
BOOL func_19(Player plParam0, BOOL bParam1) // Position - 0x947{
if(Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1) return true;
return false;
}

int func_20(Player plParam0) // Position - 0x982{
if(func_21(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}
BOOL func_21(Player plParam0, BOOL bParam1) // Position - 0x9A5{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}
BOOL func_22(Player plParam0) // Position - 0x9E0{
if(func_23(func_20(plParam0))) return true;
return false;
}
BOOL func_23(int iParam0) // Position - 0x9FA{
switch (iParam0){
case 243:
return true;
default:
}
return false;
}

int func_24(Player plParam0) // Position - 0xA14{
if(func_20(plParam0)==237 || func_20(plParam0)==250) return func_25(plParam0);
return -1;
}

int func_25(Player plParam0) // Position - 0xA41{
if(func_21(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}
BOOL func_26() // Position - 0xA64{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}
BOOL func_27(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA7D{
if(bParam1)if(func_28(plParam0)) return true;
!bParam2;
if(Global_1853910[plParam0 /*862*/]==-1) return false;
return true;
}
BOOL func_28(Player plParam0) // Position - 0xAAF{
return func_29(plParam0);
}
BOOL func_29(Player plParam0) // Position - 0xABD{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}
BOOL func_30(var uParam0) // Position - 0xAD4{
if(PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(*uParam0), -1, false)==*uParam0) return true;
return false;
}
BOOL func_31(Player plParam0) // Position - 0xAFF{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_32(Global_2657589[plParam0 /*466*/].f_321.f_7)==11;
return false;
}

int func_32(int iParam0) // Position - 0xB46{
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
Player _INVALID_PLAYER_INDEX() // Position - 0xFFA{
return -1;
}
BOOL func_34(Player plParam0) // Position - 0x1003{
return Global_2657589[plParam0 /*466*/].f_121==7;
}
BOOL func_35(Player plParam0) // Position - 0x1018{
return Global_2657589[plParam0 /*466*/].f_121==2;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x102D{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_43()) return true;
if(Global_2696915) return true;
if(func_42()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_40()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x10B1{
switch (func_39()){
case 0:
return func_38();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_38() // Position - 0x10E4{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_39() // Position - 0x1108{
return Global_32163;
}
BOOL func_40() // Position - 0x1113{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1122{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_42() // Position - 0x1139{
return Global_2694524;
}
BOOL func_43() // Position - 0x1145{
return Global_2683862.f_693;
}


void func_44() // Position - 0x1154{
SYSTEM::WAIT(0);
return;
}


void func_45() // Position - 0x1161{
if(bLocal_56){
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
}
if(!func_50(PLAYER::PLAYER_ID()) && !func_49(PLAYER::PLAYER_ID()) && !func_48(PLAYER::PLAYER_ID())) func_47();
func_4();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_5();
else unk_0x54919D7FFBD2B608("pb_prostitute", 1);
Global_2793044.f_4=0;
func_46();
return;
}


void func_46() // Position - 0x11E2{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_47() // Position - 0x11EE{
if(Global_2672505.f_946.f_10) Global_2672505.f_946.f_10=0;
return;
}
BOOL func_48(Player plParam0) // Position - 0x120C{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_5, 4);
return false;
}
BOOL func_49(Player plParam0) // Position - 0x1231{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 29);
return false;
}
BOOL func_50(Player plParam0) // Position - 0x1258{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_428.f_2, 16);
return false;
}


void func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x1281{
func_54(func_55(uParam0), uParam0);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_58, 97, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_5();
else unk_0x54919D7FFBD2B608("pb_prostitute", 1);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
return;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x12C4{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_46();
else return 0;
if(!func_53(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_46();
else return 0;
if(func_43())if(!bNoTerminate) func_46();
else return 0;
if(_DOES_EVENT_OF_TYPE_EXIST(157))if(!bNoTerminate) func_46();
else return 0;
}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bNoTerminate) func_46();
else return 0;
}}
SYSTEM::WAIT(0);
}
if(iParam1 > -1) Global_1574666=i;
if(iParam0==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_46();
else return 0;
elseif(!NETWORK::NETWORK_IS_IN_SESSION())if(!bNoTerminate) func_46();
else return 0;
return 1;
}
BOOL func_53(BOOL bParam0) // Position - 0x13DA{
bParam0;
return Global_1575035;
}


void func_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x13EB{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_46();
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
return;
}

int func_55(int iParam0) // Position - 0x140A{
switch (iParam0){
case 3:
return 2;
case 1:
return 32;
case 32:
return 32;
case 33:
return 32;
case 34:
return 32;
case 35:
return 32;
case 36:
return 32;
case 37:
return 32;
case 38:
return 32;
case 39:
return 32;
case 40:
return 32;
case 41:
return 32;
case 42:
return 32;
case 43:
return 32;
case 44:
return 32;
case 45:
return 32;
case 46:
return 32;
case 47:
return 32;
case 48:
return 32;
case 49:
return 32;
case 50:
return 4;
case 51:
return 32;
case 52:
return 32;
case 53:
return 32;
case 54:
return 32;
case 55:
return 32;
case 56:
return 32;
case 57:
return 32;
case 58:
return 32;
case 59:
return 32;
case 60:
return 32;
case 61:
return 32;
case 62:
return 32;
case 63:
return 32;
case 64:
return 4;
case 65:
return 32;
case 66:
return 4;
case 67:
return 4;
case 68:
return 32;
case 69:
return 32;
case 70:
return 4;
case 71:
return 32;
case 72:
return 32;
case 73:
case 74:
return 4;
case 75:
return 32;
case 76:
return 32;
case 77:
return 32;
case 78:
return 32;
case 79:
return 32;
case 80:
return 32;
case 81:
return 32;
case 82:
return 32;
case 84:
return 32;
case 83:
return 32;
case 85:
return 32;
case 86:
return 8;
case 87:
return 32;
case 88:
return 32;
case 89:
return 32;
case 90:
return 32;
case 91:
return 8;
case 92:
return 32;
case 93:
return 8;
case 94:
return 8;
case 102:
return 8;
case 95:
return 8;
case 96:
return 32;
case 97:
return 32;
case 98:
return 32;
case 99:
return 8;
case 100:
return 32;
case 101:
return 32;
case 103:
return 32;
case 104:
return 32;
case 105:
return 32;
case 106:
return 8;
case 107:
return 8;
case 108:
return 8;
case 109:
return 8;
case 110:
return 8;
case 111:
return 8;
case 112:
return 8;
case 113:
return 8;
case 114:
return 32;
case 115:
return 8;
case 116:
return 8;
case 117:
return 8;
case 118:
return 8;
case 119:
return 32;
case 120:
return 32;
case 121:
return 32;
case 122:
return 32;
case 123:
return 8;
case 124:
return 8;
case 125:
return 8;
case 126:
return 8;
case 12:
return 32;
case 4:
return 16;
case 13:
return 32;
case 5:
return 16;
case 6:
return 2;
case 8:
return 2;
case 9:
return 2;
case 7:
return 16;
case 10:
return 2;
case 11:
return 4;
case 15:
return 32;
case 16:
return 32;
case 27:
return 2;
case 25:
return 2;
case 26:
return 2;
case 18:
return 32;
case 28:
return 32;
case 29:
return 2;
case 30:
return 32;
case 31:
return 32;
case 17:
return 2;
case 173:
return 32;
case 174:
return 32;
case 19:
return 32;
case 22:
return 32;
case 23:
return 32;
case 24:
return 32;
case 20:
return 2;
case 0:
return 0;
case 21:
return 32;
case 185:
return 32;
case 186:
return 32;
case 175:
return 32;
case 176:
return 32;
case 180:
return 32;
case 178:
return 32;
case 179:
return 32;
case 183:
return 32;
case 184:
return 32;
case 181:
return 32;
case 182:
return 32;
case 187:
return 32;
case 188:
return 32;
case 189:
return 32;
case 190:
return 32;
case 191:
return 2;
case 196:
return 1;
case 192:
return 2;
case 193:
return 4;
case 194:
return 2;
case 195:
return 2;
case 177:
return 1;
case 197:
return 2;
case 198:
case 199:
case 200:
case 201:
case 202:
case 203:
return 0;
case 219:
return 1;
case 204:
return 4;
case 207:
return 4;
case 208:
return 1;
case 209:
return 1;
case 215:
return 1;
case 211:
return 2;
case 216:
return 1;
case 212:
return 1;
case 210:
return 2;
case 213:
return 8;
case 214:
return 8;
case 217:
return 1;
case 218:
return 2;
case 142:
return 8;
case 148:
return 1;
case 170:
return 1;
case 205:
return 16;
case 206:
return 32;
default:
}
switch (func_56(func_57(iParam0, true))){
case 0:
return 8;
case 1:
return 32;
case 2:
return 32;
default:
}
return 0;
}

int func_56(int iParam0) // Position - 0x1B8B{
switch (iParam0){
case 150:
return 1;
case 24:
return 2;
case 26:
return 2;
case 256:
return 0;
case 258:
return 0;
case 259:
return 2;
case 271:
return 0;
case 273:
return 2;
case 276:
return 0;
case 277:
return 0;
case 262:
return 0;
case 263:
return 0;
case 264:
return 0;
case 269:
return 2;
case 270:
return 2;
case 275:
return 2;
case 268:
return 2;
case 286:
return 2;
case 267:
return 0;
case 266:
return 2;
case 287:
return 2;
case 289:
return 2;
case 147:
return 2;
case 291:
return 0;
case 292:
return 0;
case 293:
return 0;
case 294:
return 0;
case 295:
return 0;
case 296:
return 0;
case 297:
return 0;
case 298:
return 0;
case 299:
return 0;
case 300:
return 0;
case 301:
return 0;
case 288:
return 2;
case 290:
return 2;
case 304:
return 0;
case 305:
return 0;
case 306:
return 0;
case 307:
return 0;
case 308:
return 0;
case 309:
return 0;
case 310:
return 2;
case 311:
return 2;
default:
}
return -1;
}

int func_57(int iParam0, BOOL bParam1) // Position - 0x1D53{
switch (iParam0){
case 191:
return 15;
case 198:
return 8;
case 192:
return 14;
case 196:
return 122;
case 199:
return 1;
case 197:
return 5;
case 200:
return 6;
case 193:
return 11;
case 201:
return 0;
case 202:
return 2;
case 194:
return 13;
case 203:
return 3;
case 195:
return 12;
case 49:
return 148;
case 52:
return 151;
case 53:
return 152;
case 54:
return 157;
case 55:
return 153;
case 56:
return 154;
case 57:
return 155;
case 58:
return 159;
case 51:
return 162;
case 60:
return 142;
case 62:
return 160;
case 63:
return 164;
case 64:
return 163;
case 65:
return 166;
case 66:
return 167;
case 67:
return 168;
case 68:
return 169;
case 69:
return 170;
case 70:
return 171;
case 71:
return 172;
case 72:
return 173;
case 73:
return 178;
case 74:
return 188;
case 75:
return 214;
case 76:
return 215;
case 77:
return 216;
case 78:
return 217;
case 79:
return 218;
case 80:
return 219;
case 81:
return 220;
case 82:
return 221;
case 84:
return 179;
case 83:
return 189;
case 85:
return 180;
case 87:
return 182;
case 88:
return 183;
case 89:
return 185;
case 90:
return 186;
case 91:
return 190;
case 92:
return 191;
case 93:
return 192;
case 94:
return 193;
case 102:
return 205;
case 95:
return 194;
case 96:
return 197;
case 97:
return 198;
case 99:
return 199;
case 100:
return 200;
case 101:
return 201;
case 103:
return 207;
case 104:
return 208;
case 105:
return 209;
case 106:
return 210;
case 98:
return 195;
case 107:
return 225;
case 108:
return 226;
case 109:
return 227;
case 110:
return 229;
case 111:
return 230;
case 113:
return 233;
case 115:
return 237;
case 116:
return 238;
case 117:
return 239;
case 118:
return 240;
case 119:
return 241;
case 120:
return 242;
case 121:
return 244;
case 122:
return 248;
case 123:
return 249;
case 124:
return 250;
case 125:
return 243;
case 126:
return 158;
case 86:
return 181;
case 127:
return 150;
case 128:
return 24;
case 129:
return 26;
case 130:
return 256;
case 131:
return 258;
case 133:
return 259;
case 134:
return 271;
case 135:
return 273;
case 136:
return 276;
case 137:
return 277;
case 138:
return 262;
case 139:
return 263;
case 140:
return 264;
case 141:
return 268;
case 143:
return 269;
case 144:
return 270;
case 145:
return 275;
case 146:
return 286;
case 148:
return 267;
case 147:
return 266;
case 151:
return 147;
case 149:
return 287;
case 152:
return 291;
case 153:
return 292;
case 154:
return 293;
case 155:
return 294;
case 156:
return 295;
case 157:
return 296;
case 158:
return 297;
case 159:
return 298;
case 160:
return 299;
case 161:
return 300;
case 162:
return 301;
case 163:
return 288;
case 164:
return 290;
case 165:
return 304;
case 166:
return 305;
case 167:
return 306;
case 168:
return 307;
case 169:
return 308;
case 170:
return 309;
case 171:
return 310;
case 172:
return 311;
default:
}
bParam1;
return 312;
}