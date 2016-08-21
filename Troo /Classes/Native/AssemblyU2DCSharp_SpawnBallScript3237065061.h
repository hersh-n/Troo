#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnBallScript
struct  SpawnBallScript_t3237065061  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] SpawnBallScript::Balls
	GameObjectU5BU5D_t3499186955* ___Balls_2;
	// System.Single SpawnBallScript::delay
	float ___delay_3;
	// UnityEngine.GameObject SpawnBallScript::blueball
	GameObject_t4012695102 * ___blueball_4;
	// UnityEngine.GameObject SpawnBallScript::greenball
	GameObject_t4012695102 * ___greenball_5;
	// UnityEngine.GameObject SpawnBallScript::pinkball
	GameObject_t4012695102 * ___pinkball_6;
	// UnityEngine.GameObject SpawnBallScript::yellowball
	GameObject_t4012695102 * ___yellowball_7;
	// UnityEngine.GameObject SpawnBallScript::ballprefab
	GameObject_t4012695102 * ___ballprefab_8;
	// UnityEngine.GameObject SpawnBallScript::blueindi
	GameObject_t4012695102 * ___blueindi_9;
	// UnityEngine.GameObject SpawnBallScript::yellowindi
	GameObject_t4012695102 * ___yellowindi_10;
	// UnityEngine.GameObject SpawnBallScript::greenindi
	GameObject_t4012695102 * ___greenindi_11;
	// UnityEngine.GameObject SpawnBallScript::pinkindi
	GameObject_t4012695102 * ___pinkindi_12;
	// UnityEngine.GameObject SpawnBallScript::circleindi
	GameObject_t4012695102 * ___circleindi_13;
	// UnityEngine.GameObject SpawnBallScript::AllBallFallingAnimation
	GameObject_t4012695102 * ___AllBallFallingAnimation_14;
	// UnityEngine.UI.Text SpawnBallScript::scoreLabel
	Text_t3286458198 * ___scoreLabel_15;
	// System.Int32 SpawnBallScript::score
	int32_t ___score_16;
	// System.Boolean SpawnBallScript::bluepressed
	bool ___bluepressed_17;
	// System.Boolean SpawnBallScript::pinkpressed
	bool ___pinkpressed_18;
	// System.Boolean SpawnBallScript::greenpressed
	bool ___greenpressed_19;
	// System.Boolean SpawnBallScript::yellowpressed
	bool ___yellowpressed_20;

public:
	inline static int32_t get_offset_of_Balls_2() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___Balls_2)); }
	inline GameObjectU5BU5D_t3499186955* get_Balls_2() const { return ___Balls_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_Balls_2() { return &___Balls_2; }
	inline void set_Balls_2(GameObjectU5BU5D_t3499186955* value)
	{
		___Balls_2 = value;
		Il2CppCodeGenWriteBarrier(&___Balls_2, value);
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_blueball_4() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___blueball_4)); }
	inline GameObject_t4012695102 * get_blueball_4() const { return ___blueball_4; }
	inline GameObject_t4012695102 ** get_address_of_blueball_4() { return &___blueball_4; }
	inline void set_blueball_4(GameObject_t4012695102 * value)
	{
		___blueball_4 = value;
		Il2CppCodeGenWriteBarrier(&___blueball_4, value);
	}

	inline static int32_t get_offset_of_greenball_5() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___greenball_5)); }
	inline GameObject_t4012695102 * get_greenball_5() const { return ___greenball_5; }
	inline GameObject_t4012695102 ** get_address_of_greenball_5() { return &___greenball_5; }
	inline void set_greenball_5(GameObject_t4012695102 * value)
	{
		___greenball_5 = value;
		Il2CppCodeGenWriteBarrier(&___greenball_5, value);
	}

	inline static int32_t get_offset_of_pinkball_6() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___pinkball_6)); }
	inline GameObject_t4012695102 * get_pinkball_6() const { return ___pinkball_6; }
	inline GameObject_t4012695102 ** get_address_of_pinkball_6() { return &___pinkball_6; }
	inline void set_pinkball_6(GameObject_t4012695102 * value)
	{
		___pinkball_6 = value;
		Il2CppCodeGenWriteBarrier(&___pinkball_6, value);
	}

	inline static int32_t get_offset_of_yellowball_7() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___yellowball_7)); }
	inline GameObject_t4012695102 * get_yellowball_7() const { return ___yellowball_7; }
	inline GameObject_t4012695102 ** get_address_of_yellowball_7() { return &___yellowball_7; }
	inline void set_yellowball_7(GameObject_t4012695102 * value)
	{
		___yellowball_7 = value;
		Il2CppCodeGenWriteBarrier(&___yellowball_7, value);
	}

	inline static int32_t get_offset_of_ballprefab_8() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___ballprefab_8)); }
	inline GameObject_t4012695102 * get_ballprefab_8() const { return ___ballprefab_8; }
	inline GameObject_t4012695102 ** get_address_of_ballprefab_8() { return &___ballprefab_8; }
	inline void set_ballprefab_8(GameObject_t4012695102 * value)
	{
		___ballprefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___ballprefab_8, value);
	}

	inline static int32_t get_offset_of_blueindi_9() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___blueindi_9)); }
	inline GameObject_t4012695102 * get_blueindi_9() const { return ___blueindi_9; }
	inline GameObject_t4012695102 ** get_address_of_blueindi_9() { return &___blueindi_9; }
	inline void set_blueindi_9(GameObject_t4012695102 * value)
	{
		___blueindi_9 = value;
		Il2CppCodeGenWriteBarrier(&___blueindi_9, value);
	}

	inline static int32_t get_offset_of_yellowindi_10() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___yellowindi_10)); }
	inline GameObject_t4012695102 * get_yellowindi_10() const { return ___yellowindi_10; }
	inline GameObject_t4012695102 ** get_address_of_yellowindi_10() { return &___yellowindi_10; }
	inline void set_yellowindi_10(GameObject_t4012695102 * value)
	{
		___yellowindi_10 = value;
		Il2CppCodeGenWriteBarrier(&___yellowindi_10, value);
	}

	inline static int32_t get_offset_of_greenindi_11() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___greenindi_11)); }
	inline GameObject_t4012695102 * get_greenindi_11() const { return ___greenindi_11; }
	inline GameObject_t4012695102 ** get_address_of_greenindi_11() { return &___greenindi_11; }
	inline void set_greenindi_11(GameObject_t4012695102 * value)
	{
		___greenindi_11 = value;
		Il2CppCodeGenWriteBarrier(&___greenindi_11, value);
	}

	inline static int32_t get_offset_of_pinkindi_12() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___pinkindi_12)); }
	inline GameObject_t4012695102 * get_pinkindi_12() const { return ___pinkindi_12; }
	inline GameObject_t4012695102 ** get_address_of_pinkindi_12() { return &___pinkindi_12; }
	inline void set_pinkindi_12(GameObject_t4012695102 * value)
	{
		___pinkindi_12 = value;
		Il2CppCodeGenWriteBarrier(&___pinkindi_12, value);
	}

	inline static int32_t get_offset_of_circleindi_13() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___circleindi_13)); }
	inline GameObject_t4012695102 * get_circleindi_13() const { return ___circleindi_13; }
	inline GameObject_t4012695102 ** get_address_of_circleindi_13() { return &___circleindi_13; }
	inline void set_circleindi_13(GameObject_t4012695102 * value)
	{
		___circleindi_13 = value;
		Il2CppCodeGenWriteBarrier(&___circleindi_13, value);
	}

	inline static int32_t get_offset_of_AllBallFallingAnimation_14() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___AllBallFallingAnimation_14)); }
	inline GameObject_t4012695102 * get_AllBallFallingAnimation_14() const { return ___AllBallFallingAnimation_14; }
	inline GameObject_t4012695102 ** get_address_of_AllBallFallingAnimation_14() { return &___AllBallFallingAnimation_14; }
	inline void set_AllBallFallingAnimation_14(GameObject_t4012695102 * value)
	{
		___AllBallFallingAnimation_14 = value;
		Il2CppCodeGenWriteBarrier(&___AllBallFallingAnimation_14, value);
	}

	inline static int32_t get_offset_of_scoreLabel_15() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___scoreLabel_15)); }
	inline Text_t3286458198 * get_scoreLabel_15() const { return ___scoreLabel_15; }
	inline Text_t3286458198 ** get_address_of_scoreLabel_15() { return &___scoreLabel_15; }
	inline void set_scoreLabel_15(Text_t3286458198 * value)
	{
		___scoreLabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_15, value);
	}

	inline static int32_t get_offset_of_score_16() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___score_16)); }
	inline int32_t get_score_16() const { return ___score_16; }
	inline int32_t* get_address_of_score_16() { return &___score_16; }
	inline void set_score_16(int32_t value)
	{
		___score_16 = value;
	}

	inline static int32_t get_offset_of_bluepressed_17() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___bluepressed_17)); }
	inline bool get_bluepressed_17() const { return ___bluepressed_17; }
	inline bool* get_address_of_bluepressed_17() { return &___bluepressed_17; }
	inline void set_bluepressed_17(bool value)
	{
		___bluepressed_17 = value;
	}

	inline static int32_t get_offset_of_pinkpressed_18() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___pinkpressed_18)); }
	inline bool get_pinkpressed_18() const { return ___pinkpressed_18; }
	inline bool* get_address_of_pinkpressed_18() { return &___pinkpressed_18; }
	inline void set_pinkpressed_18(bool value)
	{
		___pinkpressed_18 = value;
	}

	inline static int32_t get_offset_of_greenpressed_19() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___greenpressed_19)); }
	inline bool get_greenpressed_19() const { return ___greenpressed_19; }
	inline bool* get_address_of_greenpressed_19() { return &___greenpressed_19; }
	inline void set_greenpressed_19(bool value)
	{
		___greenpressed_19 = value;
	}

	inline static int32_t get_offset_of_yellowpressed_20() { return static_cast<int32_t>(offsetof(SpawnBallScript_t3237065061, ___yellowpressed_20)); }
	inline bool get_yellowpressed_20() const { return ___yellowpressed_20; }
	inline bool* get_address_of_yellowpressed_20() { return &___yellowpressed_20; }
	inline void set_yellowpressed_20(bool value)
	{
		___yellowpressed_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
