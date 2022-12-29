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
int iLocal_20=0;
int iLocal_21=0;
var uLocal_22=16;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
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
var uLocal_56=0;
var uLocal_57=0;
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
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
int iLocal_187=0;
Ped pedLocal_188=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)) func_32();
if(!func_31()) func_32();
while (true){
SYSTEM::WAIT(0);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!_GET_CURRENT_PLAYER_CHARACTER()==CHAR_TREVOR){
func_32();
}elseif(!func_24()){
func_23(101, 1);
STATS::STAT_SET_BOOL(joaat("SP_KILLED_AL"), true, true);
if(!IS_BIT_SET(Global_113648.f_18576.f_382, 5)) MISC::SET_BIT(&(Global_113648.f_18576.f_382), 5);
func_32();
}elseif(!func_22()){
func_32();
}else{
switch (iLocal_20){
case 0:
func_20();
break;
case 1:
func_1();
break;
}}}}
return;
}


void func_1() // Position - 0xF6{
switch (iLocal_21){
case 0:
if(MISC::GET_GAME_TIMER() - iLocal_187 > 5000 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_188, PLAYER::PLAYER_PED_ID(), true)){
if(_CONVERSATION_ADD_LINE(&uLocal_22, "NIGE3AU", "NIGEL3_REACT", 7, 0, 0, 0)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_188);
iLocal_21=1;
}}elseif(MISC::GET_GAME_TIMER() - iLocal_187 > 12000 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_188, true)) <=900f){
if(_CONVERSATION_ADD_LINE(&uLocal_22, "NIGE3AU", "NIGEL3_REACT", 7, 0, 0, 0)) iLocal_21=1;
}
break;
case 1:
if(!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
iLocal_187=MISC::GET_GAME_TIMER();
iLocal_21=0;
}
break;
}
return;
}
BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x1A6{
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return true;
return false;
}
BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1C8{
func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7)if(iParam3 < 12) iParam3=7;
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_4(sParam2, iParam3, false);
}
BOOL func_4(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x216{
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=false;
Global_20382=0;
}else{
func_18();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return 0;
if(func_17(8, -1)) return 0;
Global_21801={
Global_21795 
};
func_16();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3) return 0;
}
if(Global_20349==1) return 0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) return 0;
if(func_13()) return 0;
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) return 0;
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"))) return 0;
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) return 0;
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)) return 0;
}}
if(func_12()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
case 8:
return 0;
case 9:
break;
case 10:
break;
default:
break;
}
if(IS_BIT_SET(Global_8253, 9)) return 0;
}
func_11();
Global_21735=bParam2;
}
Global_21727=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
Global_20591=0;
func_10();
func_5();
return 1;
}
if(Global_21725==5) return 0;
if(iParam1 < Global_21727 || iParam1==Global_21727) return 0;
if(iParam1==2){}else{
func_18();
}
return 0;
}


void func_5() // Position - 0x4E4{
if(!func_6()) return;
if(Global_21731){
TEXT_LABEL_COPY(&(Global_1977511.f_1),{
Global_21344 
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}
return;
}
BOOL func_6() // Position - 0x51B{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_7(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_7(Player plParam0) // Position - 0x57E{
return func_8(plParam0, 20);
}
BOOL func_8(Player plParam0, int iParam1) // Position - 0x58E{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Player _INVALID_PLAYER_INDEX() // Position - 0x5A6{
return -1;
}


void func_10() // Position - 0x5AF{
int i;
for (i=0;
i <=69;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=1;
return;
}


void func_11() // Position - 0x5E0{
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
return;
}
BOOL func_12() // Position - 0x675{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}
BOOL func_13() // Position - 0x69C{
int num;
int weaponHash;
if(Global_78558){
num=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_REMOTESNIPER")) num=1;
if(CAM::IS_AIM_CAM_ACTIVE() && num==1) return true;
else return false;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)) return true;
else return false;
return true;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x735{
if(func_15(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]) Global_20383=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) Global_20383=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) Global_20383=CHAR_TREVOR;
else Global_20383=CHAR_MICHAEL;
}else{
Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383==_CHAR_NULL) Global_20383=CHAR_MULTIPLAYER;
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
}
return;
}
BOOL func_15(int iParam0) // Position - 0x7D7{
return Global_43257==iParam0;
}


void func_16() // Position - 0x7E5{
int i;
for (i=0;
i <=15;
i=i + 1){
Global_21014[i /*10*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
Global_21014[i /*10*/].f_7=0;
Global_21014[i /*10*/].f_8=0;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
return;
}
BOOL func_17(int iParam0, int iParam1) // Position - 0x83C{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_18() // Position - 0x874{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9 || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}
return;
}


void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x8CB{
Global_21179={
*uParam0 
};
Global_7569=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
Global_22714=iParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}
return;
}


void func_20() // Position - 0x921{
iLocal_187=MISC::GET_GAME_TIMER();
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_22, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_22, 5, pedLocal_188, "DINAPOLI", 0, 1);
iLocal_20=1;
return;
}


void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x950{
uParam0->[iParam1 /*10*/].f_7==1;
uParam0->[iParam1 /*10*/]=pedParam2;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
uParam0->[iParam1 /*10*/].f_7=1;
uParam0->[iParam1 /*10*/].f_8=iParam4;
uParam0->[iParam1 /*10*/].f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_8==0) PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
else PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_9==0) TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
else TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
}
return;
}
BOOL func_22() // Position - 0x9EB{
float num;
num=200f;
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_188, true)) >=num * num && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_188)) return false;
return true;
}


void func_23(int iParam0, int iParam1) // Position - 0xA28{
if(iParam0==146 || iParam0==-1) return;
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1) return;
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
return;
}
BOOL func_24() // Position - 0xA6D{
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_188))if(!PED::IS_PED_INJURED(pedLocal_188)) return true;
return false;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xA8D{
func_26();
return Global_113648.f_2365.f_539.f_4321;
}


void func_26() // Position - 0xAA6{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_27(character) && !func_15(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_27(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_27(eCharacter echParam0) // Position - 0xBA3{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xBAF{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xBEC{
if(func_27(character)) return func_30(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_30(eCharacter echParam0) // Position - 0xC11{
return Global_2028[echParam0 /*29*/];
}
BOOL func_31() // Position - 0xC20{
var sizeAndPeds;
int pedNearbyPeds;
int i;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
sizeAndPeds=16;
pedNearbyPeds=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
for (i=0;
i <=pedNearbyPeds - 1;
i=i + 1){
if(sizeAndPeds[i] !=0 && ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i])){
if(ENTITY::GET_ENTITY_MODEL(sizeAndPeds[i])==joaat("U_M_M_Aldinapoli")){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sizeAndPeds[i], true, true);
pedLocal_188=sizeAndPeds[i];
return true;
}}}}
return false;
}


void func_32() // Position - 0xCAE{
func_33(&uLocal_22, 1);
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_188)) ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_188);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_33(var uParam0, int iParam1) // Position - 0xCD0{
if(uParam0->[iParam1 /*10*/].f_7==1) uParam0->[iParam1 /*10*/].f_7=0;
return;
}