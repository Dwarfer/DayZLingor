
class CfgMovesBasic {
	access = ReadAndCreate;
	skeletonName = "";
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a", "1c", "2c", "3c", "4c", "5c", "6c", "7c", "8c"};
	collisionGeomCompPattern[] = {1, 3};
	
	class Default {
		access = ReadOnlyVerified;
		actions = "NoActions";
		file = "";
		looped = "true";
		speed = 0.5;
		disableWeapons = "false";
		enableOptics = "true";
		disableWeaponsLong = "false";
		showWeaponAim = "true";
		enableMissile = "false";
		enableBinocular = "false";
		showItemInHand = "false";
		showItemInRightHand = "false";
		showHandGun = "false";
		onLandBeg = "false";
		onLandEnd = "false";
		onLadder = "false";
		canPullTrigger = "true";
		duty = -0.5;
		visibleSize = 0.75012;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = "true";
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = "false";
		limitGunMovement = "true";
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5, 10, 20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		leaning = "leaningDefault";
		legs = "legsDefault";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		interpolationSpeed = 6;
		interpolationRestart = "false";
		enableDirectControl = 1;
		headBobMode = 0;
		headBobStrength = 0;
		collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wrfl.p3d";
		hasCollShapeSafe = "false";
		collisionShapeSafe = "";
		boundingSphere = "true";
		enableAutoActions = "false";
		leftHandIKBeg = "false";
		leftHandIKEnd = "false";
		rightHandIKBeg = "false";
		rightHandIKEnd = "false";
		leftHandIKCurve[] = {};
		rightHandIKCurve[] = {};
		weaponIK = 0;
		preload = "false";
		walkcycles = 1;
		forceAim = 0;
	};
	
	class HealBase : Default {
		disableWeapons = "true";
		disableWeaponsLong = "true";
		enableOptics = "false";
		showWeaponAim = "false";
		canPullTrigger = "false";
		duty = 0.2;
		limitGunMovement = "false";
		aiming = "empty";
		aimingBody = "empty";
		actions = "HealActionBase";
		looped = "false";
	};
	
	class HealBaseRfl : HealBase {
		actions = "HealActionBase";
		looped = "false";
	};
	
	class StandBase : Default {
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		disableWeapons = "true";
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
		headBobMode = 2;
		headBobStrength = 0.20398;
	};
	
	class DefaultDie : Default {
		aiming = "aimingNo";
		aimingBody = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = "true";
		interpolationRestart = "true";
		soundEdge[] = {0.45};
		boundingSphere = 1.5;
		enableDirectControl = 0;
		showWeaponAim = "false";
		canPullTrigger = "false";
		headBobMode = 1;
		headBobStrength = -1;
	};
	
	class ManActions {
		SceneCommanderTalk = "UnaErcVelitelProslov2";
		SceneSleepC = "AidlPpneMstpSnonWnonDnon_SleepC_sleep";
		SceneSleepB = "AidlPpneMstpSnonWnonDnon_SleepB_sleep1";
		SceneSleepA = "AidlPpneMstpSnonWnonDnon_SleepA_sleepS";
		SceneSitUnarm_R = "sitUnarm_R_idleLoop";
		SceneSitUnarm_L = "sitUnarm_L_idleLoop";
		SceneSitRfl_L = "sitRfl_L_BidleLoop";
		SceneSitRfl_R = "sitRfl_R_BidleLoop";
		ScenePoslechVelitele = "UnaErcPoslechVelitele1";
		dooraction = "amovpercmwlksnonwnondf";
		GestureLegPush = "";
		agonyStart = "AinjPpneMstpSnonWnonDnon";
		agonyStop = "AmovPpneMstpSnonWnonDnon";
		medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
		medicStart = "AinvPknlMstpSnonWnonDnon_medic0S";
		medicStartRightSide = "AinvPknlMstpSnonWnonDr_medic0S";
		GestureAgonyCargo = "";
		grabCarry = "";
		grabCarried = "";
		grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
		grabDragged = "AinjPpneMstpSnonWrflDb_grab";
		carriedStill = "AinjPfalMstpSnonWrflDnon_carried_still";
		released = "";
		releasedBad = "";
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		Default = "";
		JumpOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		saluteOff = "";
		GetOver = "";
		Diary = "";
		Surrender = "";
		Gear = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		gestureAttack = "";
		gestureGo = "";
		gestureGoB = "";
		gestureFreeze = "";
		gesturePoint = "";
		gestureCeaseFire = "";
		gestureCover = "";
		gestureUp = "";
		gestureNo = "";
		gestureYes = "";
		gestureFollow = "";
		gestureAdvance = "";
		gestureHi = "";
		gestureHiB = "";
		gestureHiC = "";
		gestureNod = "";
		GestureSpasm0 = "";
		GestureSpasm1 = "";
		GestureSpasm2 = "";
		GestureSpasm3 = "";
		GestureSpasm4 = "";
		GestureSpasm5 = "";
		GestureSpasm6 = "";
		GestureSpasm0weak = "";
		GestureSpasm1weak = "";
		GestureSpasm2weak = "";
		GestureSpasm3weak = "";
		GestureSpasm4weak = "";
		GestureSpasm5weak = "";
		GestureSpasm6weak = "";
		healedStart = "";
		healedStop = "";
		TestDriver = "BasicDriver";
		TestDriverOut = "BasicDriverOut";
		TestGunner = "BasicSittingGunner";
	};
	
	class Actions {
		class NoActions : ManActions {
			GestureLegPush[] = {"GestureLegPush", "Gesture"};
			GestureNod[] = {"GestureNod", "Gesture"};
			GestureAgonyCargo[] = {"GestureAgonyCargo", "Gesture"};
			access = ReadOnlyVerified;
			ladderOnDown = "LadderCivilOn";
			ladderOnUp = "LadderCivilOn";
			turnSpeed = 1;
			upDegree = -1;
			limitFast = 5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			useFastMove = 0;
			GestureSpasm0[] = {"GestureSpasm0", "Gesture"};
			GestureSpasm1[] = {"GestureSpasm1", "Gesture"};
			GestureSpasm2[] = {"GestureSpasm2", "Gesture"};
			GestureSpasm3[] = {"GestureSpasm3", "Gesture"};
			GestureSpasm4[] = {"GestureSpasm4", "Gesture"};
			GestureSpasm5[] = {"GestureSpasm5", "Gesture"};
			GestureSpasm6[] = {"GestureSpasm6", "Gesture"};
			GestureSpasm0weak[] = {"GestureSpasm0weak", "Gesture"};
			GestureSpasm1weak[] = {"GestureSpasm1weak", "Gesture"};
			GestureSpasm2weak[] = {"GestureSpasm2weak", "Gesture"};
			GestureSpasm3weak[] = {"GestureSpasm3weak", "Gesture"};
			GestureSpasm4weak[] = {"GestureSpasm4weak", "Gesture"};
			GestureSpasm5weak[] = {"GestureSpasm5weak", "Gesture"};
			GestureSpasm6weak[] = {"GestureSpasm6weak", "Gesture"};
			grabCarried = "AinjPfalMstpSnonWrflDnon_carried_Up";
		};
		
		class DeadActions : NoActions {
			upDegree = "ManPosDead";
			LadderOnDown = "";
			LadderOnUp = "";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
		};
		
		class CargoActions : NoActions {
			die = "DeadState";
		};
		
		class RifleBaseLowStandActions : NoActions {
			stop = "AmovPercMstpSlowWrflDnon";
			default = "AmovPercMstpSlowWrflDnon";
			StopRelaxed = "AidlPercMstpSlowWrflDnon0S";
			turnL = "AmovPercMstpSlowWrflDnon_turnL";
			turnR = "AmovPercMstpSlowWrflDnon_turnR";
			turnLRelaxed = "AmovPercMstpSlowWrflDnon_turnL";
			turnRRelaxed = "AmovPercMstpSlowWrflDnon_turnR";
			reloadMagazine[] = {"WeaponMagazineReloadStand", "Gesture"};
			gestureAttack[] = {"GestureAttackStand", "Gesture"};
			gestureGo[] = {"GestureGoStand", "Gesture"};
			gestureGoB[] = {"GestureGoBStand", "Gesture"};
			gestureFreeze[] = {"GestureFreezeStand", "Gesture"};
			gesturePoint[] = {"GesturePointStand", "Gesture"};
			gestureCeaseFire[] = {"GestureCeaseFire", "Gesture"};
			gestureCover[] = {"GestureCover", "Gesture"};
			gestureUp[] = {"GestureUp", "Gesture"};
			gestureNo[] = {"GestureNo", "Gesture"};
			gestureYes[] = {"GestureYes", "Gesture"};
			gestureFollow[] = {"GestureFollow", "Gesture"};
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			gestureNod[] = {"GestureNod", "Gesture"};
			reloadMGun = "AmovPercMstpSlowWrflDnon";
			reloadMortar = "AmovPercMstpSlowWrflDnon";
			throwGrenade = "AwopPercMstpSgthWrflDnon_Throw1";
			walkF = "AmovPercMwlkSlowWrflDf";
			walkLF = "AmovPercMwlkSlowWrflDfl";
			walkRF = "AmovPercMwlkSlowWrflDfr";
			walkL = "AmovPercMwlkSlowWrflDl";
			walkR = "AmovPercMwlkSlowWrflDr";
			walkLB = "AmovPercMwlkSlowWrflDbl";
			walkRB = "AmovPercMwlkSlowWrflDbr";
			walkB = "AmovPercMwlkSlowWrflDb";
			slowF = "AmovPercMrunSlowWrflDf";
			slowLF = "AmovPercMrunSlowWrflDfl";
			slowRF = "AmovPercMrunSlowWrflDfr";
			slowL = "AmovPercMrunSlowWrflDl";
			slowR = "AmovPercMrunSlowWrflDr";
			slowLB = "AmovPercMrunSlowWrflDbl";
			slowRB = "AmovPercMrunSlowWrflDbr";
			slowB = "AmovPercMrunSlowWrflDb";
			fastF = "AmovPercMevaSlowWrflDf";
			fastLF = "AmovPercMevaSlowWrflDfl";
			fastRF = "AmovPercMevaSlowWrflDfr";
			fastL = "AmovPercMrunSlowWrflDl";
			fastR = "AmovPercMrunSlowWrflDr";
			fastLB = "AmovPercMrunSlowWrflDbl";
			fastRB = "AmovPercMrunSlowWrflDbr";
			fastB = "AmovPercMrunSlowWrflDb";
			EvasiveForward = "AmovPercMevaSlowWrflDf";
			EvasiveLeft = "AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl";
			EvasiveRight = "AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr";
			EvasiveBack = "AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb";
			down = "AmovPpneMstpSrasWrflDnon";
			up = "AmovPknlMstpSlowWrflDnon";
			die = "AdthPercMstpSlowWrflDnon_r05";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPercMstpSrasWrflDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_rfl";
			binocOff = "AmovPercMstpSrasWrflDnon";
			handGunOn = "AmovPercMstpSrasWpstDnon";
			takeFlag = "AinvPknlMstpSlayWrflDnon";
			putDown = "AinvPknlMstpSlayWrflDnon";
			medic = "AinvPknlMstpSlayWrflDnon_medic";
			treated = "AinvPknlMstpSlayWrflDnon_healed";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			PlayerCrouch = "AmovPknlMstpSlowWrflDnon";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSlowWrflDnon";
			CanNotMove = "AmovPercMstpSrasWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPercMstpSrasWrflDnon";
			ladderOnDown = "LadderRifleOn";
			ladderOnUp = "LadderRifleOn";
			strokeFist = "";
			strokeGun = "AmovPercMstpSrasWrflDnon";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			sitDown = "AmovPsitMstpSlowWrflDnon";
			getOver = "AovrPercMstpSlowWrflDf";
			salute = "AmovPercMstpSlowWrflDnon_salute";
			turnSpeed = 8;
			limitFast = 5.5;
			leanRRot = 0.5;
			leanRShift = 0.01;
			leanLRot = 0.5;
			leanLShift = 0.01;
			startSwim = "AswmPercMrunSnonWnonDf";
			upDegree = "ManPosStand";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic0S";
			medicStartRightSide = "AinvPknlMstpSnonWrflDr_medic0S";
			healedStop = "AinjPpneMstpSnonWrflDnon";
			healedStart = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			Diary = "AmovPknlMstpSlowWrflDnon";
			Surrender = "AmovPercMstpSsurWnonDnon";
			Gear = "AmovPercMstpSlowWrflDnon_gear";
			saluteOff = "AmovPercMstpSlowWrflDnon";
		};
		
		class RifleLowStandActions : RifleBaseLowStandActions {
			PlayerStand = "";
			Diary = "AmovPercMstpSlowWrflDnon_diary";
			Gear = "AmovPercMstpSlowWrflDnon_gear";
			Stop = "AidlPercMstpSlowWrflDnon_player_0S";
			Die = "AdthPercMstpSlowWrflDnon_r05";
		};
		
		class RifleLowStandActions_gear : RifleLowStandActions {
			Stop = "AmovPercMstpSlowWrflDnon_gear";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_gear";
			Default = "AmovPercMstpSlowWrflDnon_gear";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			HandGunOn = "AmovPercMstpSrasWpstDnon_gear";
		};
		
		class RifleLowStandActions_diary : RifleLowStandActions_gear {
			Stop = "AmovPercMstpSlowWrflDnon_diary";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_diary";
			Default = "AmovPercMstpSlowWrflDnon_diary";
		};
		
		class RifleLowStandActionsWlkF : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDf";
			Up = "AmovPknlMwlkSlowWrflDf";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleLowStandActionsRunF : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDf";
			Up = "AmovPknlMrunSlowWrflDf";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
			Die = "AdthPercMstpSlowWrflDnon_r05";
		};
		
		class RifleLowStandActionsWlkFL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDfl";
			Up = "AmovPknlMwlkSlowWrflDfl";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleLowStandActionsRunFL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDfl";
			Up = "AmovPknlMrunSlowWrflDfl";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleLowStandActionsWlkL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDl";
			Up = "AmovPknlMwlkSlowWrflDl";
		};
		
		class RifleLowStandActionsRunL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDl";
			Up = "AmovPknlMrunSlowWrflDl";
		};
		
		class RifleLowStandActionsWlkBL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDbl";
			Up = "AmovPknlMwlkSlowWrflDbl";
		};
		
		class RifleLowStandActionsRunBL : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDbl";
			Up = "AmovPknlMrunSlowWrflDbl";
		};
		
		class RifleLowStandActionsWlkB : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDb";
			Up = "AmovPknlMwlkSlowWrflDb";
		};
		
		class RifleLowStandActionsRunB : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDb";
			Up = "AmovPknlMrunSlowWrflDb";
		};
		
		class RifleLowStandActionsWlkBR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDbr";
			Up = "AmovPknlMwlkSlowWrflDbr";
		};
		
		class RifleLowStandActionsRunBR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDbr";
			Up = "AmovPknlMrunSlowWrflDbr";
		};
		
		class RifleLowStandActionsWlkR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDr";
			Up = "AmovPknlMwlkSlowWrflDr";
		};
		
		class RifleLowStandActionsRunR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDr";
			Up = "AmovPknlMrunSlowWrflDr";
		};
		
		class RifleLowStandActionsWlkFR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMwlkSlowWrflDfr";
			Up = "AmovPknlMwlkSlowWrflDfr";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleLowStandActionsRunFR : RifleLowStandActions {
			PlayerCrouch = "AmovPknlMrunSlowWrflDfr";
			Up = "AmovPknlMrunSlowWrflDfr";
			ThrowGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandLowEvasiveActions : RifleLowStandActions {
			fastF = "AmovPercMevaSlowWrflDf";
			fastLF = "AmovPercMevaSlowWrflDfl";
			fastRF = "AmovPercMevaSlowWrflDfr";
			throwGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
			salute = "";
			sitDown = "";
			limitFast = 5.5;
			Die = "AdthPercMrunSlowWrflDf_A1short";
		};
		
		class RifleLowStandActions_talkCalm : RifleLowStandActions {
			Stop = "AidlPercSlowWrflDnon_talkCalm";
			StopRelaxed = "AidlPercSlowWrflDnon_talkCalm";
			Default = "AidlPercSlowWrflDnon_talkCalm";
		};
		
		class RifleLowStandActions_talking01 : RifleLowStandActions {
			Stop = "ActsPercMstpSnonWnonDnon_talking01a";
			StopRelaxed = "ActsPercMstpSnonWnonDnon_talking01a";
			Default = "ActsPercMstpSnonWnonDnon_talking01a";
		};
		
		class RifleLowStandActions_listening01 : RifleLowStandActions {
			Stop = "AidlPercSlowWrflDnon_talkListeningS";
			StopRelaxed = "AidlPercSlowWrflDnon_talkListeningS";
			Default = "AidlPercSlowWrflDnon_talkListeningS";
			Salute = "";
			saluteOff = "";
		};
		
		class RifleLowStandActions_genericStani : RifleLowStandActions {
			Salute = "";
			Default = "c4coming2cdf_genericstani";
			Stop = "c4coming2cdf_genericstani";
			StopRelaxed = "c4coming2cdf_genericstani";
			Stand = "c4coming2cdf_genericstani";
			saluteOff = "c4coming2cdf_genericstani";
		};
		
		class RifleLowStandActions_evasiveActions : RifleLowStandActions {
			Die = "AdthPercMrunSlowWrflDf_6";
		};
		
		class RifleBaseStandActions : RifleBaseLowStandActions {
			stop = "AmovPercMstpSrasWrflDnon";
			default = "AmovPercMstpSrasWrflDnon";
			StopRelaxed = "AidlPercMstpSrasWrflDnon0S";
			turnL = "AmovPercMstpSrasWrflDnon_turnL";
			turnR = "AmovPercMstpSrasWrflDnon_turnR";
			turnLRelaxed = "AidlPercMstpSrasWrflDnon_turnL";
			turnRRelaxed = "AidlPercMstpSrasWrflDnon_turnR";
			reloadMagazine[] = {"WeaponMagazineReloadStand", "Gesture"};
			gestureAttack[] = {"GestureAttackStand", "Gesture"};
			reloadMGun = "AmovPercMstpSrasWrflDnon";
			reloadMortar = "AmovPercMstpSrasWrflDnon";
			throwGrenade = "AwopPercMstpSgthWrflDnon_Throw2";
			walkF = "AmovPercMwlkSrasWrflDf";
			walkLF = "AmovPercMwlkSrasWrflDfl";
			walkRF = "AmovPercMwlkSrasWrflDfr";
			walkL = "AmovPercMwlkSrasWrflDl";
			walkR = "AmovPercMwlkSrasWrflDr";
			walkLB = "AmovPercMwlkSrasWrflDbl";
			walkRB = "AmovPercMwlkSrasWrflDbr";
			walkB = "AmovPercMwlkSrasWrflDb";
			slowF = "AmovPercMrunSrasWrflDf";
			slowLF = "AmovPercMrunSrasWrflDfl";
			slowRF = "AmovPercMrunSrasWrflDfr";
			slowL = "AmovPercMrunSrasWrflDl";
			slowR = "AmovPercMrunSrasWrflDr";
			slowLB = "AmovPercMrunSrasWrflDbl";
			slowRB = "AmovPercMrunSrasWrflDbr";
			slowB = "AmovPercMrunSrasWrflDb";
			fastF = "AmovPercMevaSrasWrflDf";
			fastLF = "AmovPercMevaSrasWrflDfl";
			fastRF = "AmovPercMevaSrasWrflDfr";
			fastL = "AmovPercMrunSrasWrflDl";
			fastR = "AmovPercMrunSrasWrflDr";
			fastLB = "AmovPercMrunSrasWrflDbl";
			fastRB = "AmovPercMrunSrasWrflDbr";
			fastB = "AmovPercMrunSrasWrflDb";
			EvasiveLeft = "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl";
			EvasiveRight = "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr";
			EvasiveBack = "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb";
			down = "AmovPpneMstpSrasWrflDnon";
			up = "AmovPknlMstpSrasWrflDnon";
			sitDown = "AmovPsitMstpSrasWrflDnon";
			getOver = "AovrPercMstpSrasWrflDf";
			salute = "AmovPercMstpSrasWrflDnon_salute";
			PlayerStand = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosCombat";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			FireNotPossible = "AmovPercMstpSrasWrflDnon";
			WeaponOn = "amovpercmstpsraswlnrdnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			CanNotMove = "AmovPercMstpSlowWrflDnon";
			EvasiveForward = "AmovPercMevaSrasWrflDf";
			saluteOff = "AmovPercMstpSrasWrflDnon";
		};
		
		class RifleStandActions : RifleBaseStandActions {
			PlayerStand = "";
			Die = "AdthPercMstpSrasWrflDnon_r05";
			TurnR = "AmovPercMstpSrasWrflDnon_turnR";
			TurnL = "AmovPercMstpSrasWrflDnon_turnL";
			Diary = "AmovPercMstpSrasWrflDnon_diary";
			Gear = "AmovPercMstpSrasWrflDnon_gear";
			Stop = "AidlPercMstpSrasWrflDnon_aiming0S";
		};
		
		class RifleStandActions_genericStani : RifleStandActions {
			Default = "c4coming2cdf_genericstani";
			Stop = "c4coming2cdf_genericstani";
			StopRelaxed = "c4coming2cdf_genericstani";
			Salute = "";
		};
		
		class RifleLowStandActions_beatingDoctor : RifleStandActions {
			Stop = "CtsDoktor_Vojak_vyslechStand2unaerc";
			StopRelaxed = "CtsDoktor_Vojak_vyslechStand2unaerc";
			Default = "CtsDoktor_Vojak_vyslechStand2unaerc";
			Salute = "";
			Die = "AdthPercMstpSlowWrf_beating";
		};
		
		class RifleStandActions_gear : RifleStandActions {
			Stop = "AmovPercMstpSrasWrflDnon_gear";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_gear";
			Default = "AmovPercMstpSrasWrflDnon_gear";
			PlayerStand = "AmovPercMstpSrasWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			HandGunOn = "AmovPercMstpSrasWpstDnon_gear";
		};
		
		class RifleStandActions_diary : RifleStandActions_gear {
			Stop = "AmovPercMstpSrasWrflDnon_diary";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_diary";
			Default = "AmovPercMstpSrasWrflDnon_diary";
		};
		
		class RifleStandActions_Idle : RifleStandActions {
			updegree = "manposcombat";
			Stop = "AmovPercMstpSrasWrflDnon";
			StopRelaxed = "AidlPercMstpSrasWrflDnon0S";
			Default = "AmovPercMstpSrasWrflDnon";
			Die = "AdthPercMstpSlowWrflDnon_r05";
			saluteOff = "AidlPercMstpSrasWrflDnon0S";
			WalkF = "AidlPercMwlkSrasWrflDf";
			SlowF = "AidlPercMrunSrasWrflDf";
			FastF = "AidlPercMevaSrasWrflDf";
			Salute = "AidlPercMstpSrasWrflDnon_Salute";
			WalkB = "AidlPercMwlkSrasWrflDb";
		};
		
		class RifleStandEvasiveActions_Idle : RifleStandActions_Idle {
			Die = "AdthPercMrunSlowWrflDf_A1short";
		};
		
		class RifleStandSaluteActions_Idle : RifleStandActions_Idle {
			StopRelaxed = "AidlPercMstpSrasWrflDnon_Salute";
			Stop = "AidlPercMstpSrasWrflDnon_Salute";
			Default = "AidlPercMstpSrasWrflDnon_Salute";
			saluteOff = "AidlPercMstpSrasWrflDnon0S";
			Salute = "AidlPercMstpSrasWrflDnon0S";
			SitDown = "";
		};
		
		class RifleStandActionsRunF : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDf";
			Up = "AmovPknlMrunSrasWrflDf";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandActionsWlkF : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDf";
			Up = "AmovPknlMwlkSrasWrflDf";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandActionsRunFL : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDfl";
			Up = "AmovPknlMrunSrasWrflDfl";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandActionsWlkFL : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDfl";
			Up = "AmovPknlMwlkSrasWrflDfl";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandActionsRunL : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDl";
			Up = "AmovPknlMrunSrasWrflDl";
		};
		
		class RifleStandActionsWlkL : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDl";
			Up = "AmovPknlMwlkSrasWrflDl";
		};
		
		class RifleStandActionsRunBL : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDbl";
			Up = "AmovPknlMrunSrasWrflDbl";
		};
		
		class RifleStandActionsWlkBL : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDbl";
			Up = "AmovPknlMwlkSrasWrflDbl";
		};
		
		class RifleStandActionsRunB : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDb";
			Up = "AmovPknlMrunSrasWrflDb";
		};
		
		class RifleStandActionsWlkB : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDb";
			Up = "AmovPknlMwlkSrasWrflDb";
		};
		
		class RifleStandActionsRunBR : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDbr";
			Up = "AmovPknlMrunSrasWrflDbr";
		};
		
		class RifleStandActionsWlkBR : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDbr";
			Up = "AmovPknlMwlkSrasWrflDbr";
		};
		
		class RifleStandActionsRunR : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDr";
			Up = "AmovPknlMrunSrasWrflDr";
		};
		
		class RifleStandActionsWlkR : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDr";
			Up = "AmovPknlMwlkSrasWrflDr";
		};
		
		class RifleStandActionsRunFR : RifleStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWrflDfr";
			Up = "AmovPknlMrunSrasWrflDfr";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandActionsWlkFR : RifleStandActions {
			PlayerCrouch = "AmovPknlMwlkSrasWrflDfr";
			Up = "AmovPknlMwlkSrasWrflDfr";
			ThrowGrenade = "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
		};
		
		class RifleStandEvasiveActions : RifleStandActions {
			fastF = "AmovPercMevaSrasWrflDf";
			fastLF = "AmovPercMevaSrasWrflDfl";
			fastRF = "AmovPercMevaSrasWrflDfr";
			throwGrenade = "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
			salute = "";
			sitDown = "";
			limitFast = 5.5;
			Die = "AdthPercMrunSlowWrflDf_A1short";
			PlayerCrouch = "AmovPknlMevaSrasWrflDf";
			Down = "AmovPpneMstpSrasWrflDnon";
			Up = "AmovPknlMevaSrasWrflDf";
		};
		
		class RifleKneelEvasiveActions : RifleStandEvasiveActions {
			upDegree = "ManPosCrouch";
			FastF = "AmovPknlMevaSrasWrflDf";
			FastLF = "AmovPknlMevaSrasWrflDfl";
			FastRF = "AmovPknlMevaSrasWrflDfr";
			WalkF = "AmovPknlMwlkSrasWrflDf";
			WalkLF = "AmovPknlMwlkSrasWrflDfl";
			WalkRF = "AmovPknlMwlkSrasWrflDfr";
			WalkL = "AmovPknlMwlkSrasWrflDl";
			WalkR = "AmovPknlMwlkSrasWrflDr";
			WalkLB = "AmovPknlMwlkSrasWrflDbl";
			WalkRB = "AmovPknlMwlkSrasWrflDbr";
			WalkB = "AmovPknlMwlkSrasWrflDb";
			Up = "AmovPercMevaSrasWrflDf";
			PlayerCrouch = "";
			PlayerStand = "AmovPercMevaSrasWrflDf";
		};
		
		class RifleLowStandSaluteActions : RifleBaseLowStandActions {
			stop = "AmovPercMstpSlowWrflDnon_Salute";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_Salute";
			default = "AmovPercMstpSlowWrflDnon_Salute";
			salute = "AmovPercMstpSlowWrflDnon";
			sitDown = "";
		};
		
		class RifleStandSaluteActions : RifleBaseStandActions {
			stop = "AmovPercMstpSrasWrflDnon_Salute";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_Salute";
			default = "AmovPercMstpSrasWrflDnon_Salute";
			salute = "AmovPercMstpSrasWrflDnon";
			sitDown = "";
		};
		
		class RifleLowSitActions : RifleBaseLowStandActions {
			turnL = "";
			turnR = "";
			stop = "AmovPsitMstpSlowWrflDnon";
			StopRelaxed = "AmovPsitMstpSlowWrflDnon";
			default = "AmovPsitMstpSlowWrflDnon";
			strokeFist = "";
			sitDown = "AmovPercMstpSlowWrflDnon";
			die = "AdthPsitMstpSlowWrflDnon";
			Gear = "";
			Diary = "";
			GetOver = "";
		};
		
		class RifleSitActions : RifleBaseStandActions {
			turnSpeed = 0;
			turnL = "";
			turnR = "";
			stop = "AmovPsitMstpSrasWrflDnon";
			StopRelaxed = "AmovPsitMstpSrasWrflDnon";
			default = "AmovPsitMstpSrasWrflDnon";
			strokeFist = "";
			sitDown = "AmovPercMstpSrasWrflDnon";
			die = "AdthPsitMstpSlowWrflDnon";
			Gear = "";
			Diary = "";
			GetOver = "";
		};
		
		class RifleSitActionTest : RifleSitActions {
			Stop = "sitRfl_R_BidleLoopTest";
			StopRelaxed = "sitRfl_R_BidleLoopTest";
			Default = "sitRfl_R_BidleLoopTest";
		};
		
		class RifleSitActions_BidleLoop : RifleSitActions {};
		
		class RifleSitActions_BidleLoopB : RifleSitActions {
			Stop = "sitRfl_R_BidleLoop";
			StopRelaxed = "sitRfl_R_BidleLoop";
			Default = "sitRfl_R_BidleLoop";
		};
		
		class RifleSitAction_talkLong : RifleSitActions {
			Stop = "sitRfl_L_talkLong";
			StopRelaxed = "sitRfl_L_talkLong";
			Default = "sitRfl_L_talkLong";
		};
		
		class sitTableRfl_listening : RifleSitActions {
			Stop = "sitTableRfl_listening";
			StopRelaxed = "sitTableRfl_listening";
			Default = "sitTableRfl_listening";
		};
		
		class RidleSitActions_Table_readingPointing : RifleSitActions {
			Stop = "sitTableRfl_readingPointing";
			StopRelaxed = "sitTableRfl_readingPointing";
			Default = "sitTableRfl_readingPointing";
		};
		
		class RifleSitActions_Table_talking : RifleSitActions {
			Stop = "sitTableRfl_talking";
			StopRelaxed = "sitTableRfl_talking";
			Default = "sitTableRfl_talking";
		};
		
		class RifleSittingSleeping02Actions : RifleSitActions {
			stop = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			StopRelaxed = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			default = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			die = "DeadState";
		};
		
		class RifleSittingSleeping01Actions : RifleSitActions {
			stop = "ActsPsitMstpSnonWrflDnon_varSittingSleeping01";
			StopRelaxed = "ActsPsitMstpSnonWrflDnon_varSittingSleeping01";
			default = "ActsPsitMstpSnonWrflDnon_varSittingSleeping01";
			die = "DeadState";
		};
		
		class RifleSittingOnTheWallActions : RifleBaseStandActions {
			turnL = "";
			turnR = "";
			stop = "ActsPsitMstpSnonWnonDnon_varSittingOnTheWall";
			StopRelaxed = "ActsPsitMstpSnonWnonDnon_varSittingOnTheWall";
			default = "ActsPsitMstpSnonWnonDnon_varSittingOnTheWall";
			die = "DeadState";
		};
		
		class RifleSittingDrinking02Actions : RifleBaseStandActions {
			turnL = "";
			turnR = "";
			stop = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			StopRelaxed = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			default = "ActsPsitMstpSnonWrflDnon_varSittingSleeping02";
			die = "DeadState";
		};
		
		class RifleSittingDrinkingActions : RifleBaseStandActions {
			turnL = "";
			turnR = "";
			stop = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			StopRelaxed = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			default = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			die = "DeadState";
		};
		
		class RifleSittingDrinking03Actions : RifleBaseStandActions {
			turnL = "";
			turnR = "";
			stop = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			StopRelaxed = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			default = "ActsPsitMstpSnonWrflDnon_varSittingDrinking";
			die = "DeadState";
		};
		
		class RifleStayLeantActions : RifleBaseStandActions {
			turnL = "";
			turnR = "";
			stop = "ActsPercMstpSnonWnonDnon_varStayLeant";
			StopRelaxed = "ActsPercMstpSnonWnonDnon_varStayLeant";
			default = "ActsPercMstpSnonWnonDnon_varStayLeant";
			die = "DeadState";
		};
		
		class RifleStandTakeActions : RifleBaseLowStandActions {
			stop = "AinvPknlMstpSlayWrflDnon";
			StopRelaxed = "AinvPknlMstpSlayWrflDnon";
			default = "AmovPknlMstpSrasWrflDnon";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSlayWrflDnon_inventory";
			PutDown = "AmovPknlMstpSrasWrflDnon";
		};
		
		class RifleKneelActions : RifleBaseStandActions {
			stop = "AmovPknlMstpSrasWrflDnon";
			default = "AmovPknlMstpSrasWrflDnon";
			stopRelaxed = "AidlPknlMstpSlowWrflDnon0S";
			turnL = "AmovPknlMstpSrasWrflDnon_turnL";
			turnR = "AmovPknlMstpSrasWrflDnon_turnR";
			turnLRelaxed = "AmovPknlMstpSrasWrflDnon_turnL";
			turnRRelaxed = "AmovPknlMstpSrasWrflDnon_turnR";
			reloadMagazine[] = {"WeaponMagazineReloadStand", "Gesture"};
			reloadMGun = "AmovPknlMstpSrasWrflDnon";
			reloadMortar = "AmovPknlMstpSrasWrflDnon";
			throwGrenade = "AwopPknlMstpSgthWrflDnon_Throw";
			walkF = "AmovPknlMwlkSrasWrflDf";
			walkLF = "AmovPknlMwlkSrasWrflDfl";
			walkRF = "AmovPknlMwlkSrasWrflDfr";
			walkL = "AmovPknlMwlkSrasWrflDl";
			walkR = "AmovPknlMwlkSrasWrflDr";
			walkLB = "AmovPknlMwlkSrasWrflDbl";
			walkRB = "AmovPknlMwlkSrasWrflDbr";
			walkB = "AmovPknlMwlkSrasWrflDb";
			slowF = "AmovPknlMrunSrasWrflDf";
			slowLF = "AmovPknlMrunSrasWrflDfl";
			slowRF = "AmovPknlMrunSrasWrflDfr";
			slowL = "AmovPknlMrunSrasWrflDl";
			slowR = "AmovPknlMrunSrasWrflDr";
			slowLB = "AmovPknlMrunSrasWrflDbl";
			slowRB = "AmovPknlMrunSrasWrflDbr";
			slowB = "AmovPknlMrunSrasWrflDb";
			fastF = "AmovPknlMevaSrasWrflDf";
			fastLF = "AmovPknlMevaSrasWrflDfl";
			fastRF = "AmovPknlMevaSrasWrflDfr";
			fastL = "AmovPknlMrunSrasWrflDl";
			fastR = "AmovPknlMrunSrasWrflDr";
			fastLB = "AmovPknlMrunSrasWrflDbl";
			fastRB = "AmovPknlMrunSrasWrflDbr";
			fastB = "AmovPknlMrunSrasWrflDb";
			EvasiveLeft = "AmovPknlMevaSrasWrflDfl";
			EvasiveRight = "AmovPknlMevaSrasWrflDfr";
			EvasiveBack = "AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb";
			down = "AmovPpneMstpSrasWrflDnon";
			up = "AmovPercMstpSrasWrflDnon";
			die = "AdthPknlMstpSrasWrflDnon_1";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPknlMstpSrasWrflDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_rfl";
			binocOff = "AmovPknlMstpSrasWrflDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			takeFlag = "AinvPknlMstpSlayWrflDnon_1";
			putDown = "AinvPknlMstpSlayWrflDnon_1";
			treated = "AinvPknlMstpSlayWrflDnon_healed";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon";
			Stand = "AmovPknlMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			CanNotMove = "AmovPknlMstpSrasWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPknlMstpSrasWrflDnon";
			strokeFist = "";
			strokeGun = "AmovPknlMstpSrasWrflDnon";
			salute = "";
			turnSpeed = 6;
			limitFast = 5.5;
			upDegree = "ManPosCrouch";
			PlayerCrouch = "";
			EvasiveForward = "AmovPknlMevaSrasWrflDf";
			Diary = "AmovPknlMstpSrasWrflDnon_diary";
			Gear = "AmovPknlMstpSrasWrflDnon_gear";
		};
		
		class RifleKneelActions_gear : RifleKneelActions {
			Stop = "AmovPknlMstpSrasWrflDnon_gear";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon_gear";
			Default = "AmovPknlMstpSrasWrflDnon_gear";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			HandGunOn = "AmovPknlMstpSrasWpstDnon_gear";
		};
		
		class RifleKneelActions_diary : RifleKneelActions_gear {
			Stop = "AmovPknlMstpSrasWrflDnon_diary";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon_diary";
			Default = "AmovPknlMstpSrasWrflDnon_diary";
		};
		
		class RifleKneelLowActions : RifleKneelActions {
			Stop = "AidlPknlMstpSlowWrflDnon_player_0S";
			StopRelaxed = "AidlPknlMstpSlowWrflDnon0S";
			Default = "AmovPknlMstpSlowWrflDnon";
			TurnL = "AmovPknlMstpSlowWrflDnon_turnL";
			TurnR = "AmovPknlMstpSlowWrflDnon_turnR";
			TurnLRelaxed = "AmovPknlMstpSlowWrflDnon_turnL";
			TurnRRelaxed = "AmovPknlMstpSlowWrflDnon_turnR";
			WalkF = "AmovPknlMwlkSlowWrflDf";
			WalkLF = "AmovPknlMwlkSlowWrflDfl";
			WalkRF = "AmovPknlMwlkSlowWrflDfr";
			WalkL = "AmovPknlMwlkSlowWrflDl";
			WalkR = "AmovPknlMwlkSlowWrflDr";
			WalkLB = "AmovPknlMwlkSlowWrflDbl";
			WalkRB = "AmovPknlMwlkSlowWrflDbr";
			WalkB = "AmovPknlMwlkSlowWrflDb";
			Up = "AmovPercMstpSlowWrflDnon";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			CanNotMove = "AmovPknlMstpSlowWrflDnon";
			FireNotPossible = "AmovPknlMstpSrasWrflDnon";
			WeaponOff = "AmovPknlMstpSlowWrflDnon";
			PlayerCrouch = "";
			SlowF = "AmovPknlMrunSlowWrflDf";
			SlowLF = "AmovPknlMrunSlowWrflDfl";
			SlowRF = "AmovPknlMrunSlowWrflDfr";
			SlowL = "AmovPknlMrunSlowWrflDl";
			SlowR = "AmovPknlMrunSlowWrflDr";
			SlowLB = "AmovPknlMrunSlowWrflDbl";
			SlowRB = "AmovPknlMrunSlowWrflDbr";
			SlowB = "AmovPknlMrunSlowWrflDb";
			FastL = "AmovPknlMrunSlowWrflDl";
			FastR = "AmovPknlMrunSlowWrflDr";
			FastLB = "AmovPknlMrunSlowWrflDbl";
			FastRB = "AmovPknlMrunSlowWrflDbr";
			FastB = "AmovPknlMrunSlowWrflDb";
			FastF = "AmovPknlMevaSrasWrflDf";
			FastLF = "AmovPknlMevaSrasWrflDfl";
			FastRF = "AmovPknlMevaSrasWrflDfr";
			EvasiveForward = "AmovPknlMevaSrasWrflDf";
			EvasiveLeft = "AmovPknlMevaSrasWrflDfl";
			EvasiveRight = "AmovPknlMevaSrasWrflDfr";
			Diary = "AmovPknlMstpSlowWrflDnon_diary";
			Gear = "AmovPknlMstpSlowWrflDnon_gear";
			GetOver = "AovrPercMstpSlowWrflDf";
		};
		
		class RifleKneelLowActions_gear : RifleKneelLowActions {
			Stop = "AmovPknlMstpSlowWrflDnon_gear";
			StopRelaxed = "AmovPknlMstpSlowWrflDnon_gear";
			Default = "AmovPknlMstpSlowWrflDnon_gear";
			PlayerCrouch = "AmovPknlMstpSlowWrflDnon";
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			HandGunOn = "AmovPknlMstpSrasWpstDnon_gear";
		};
		
		class RifleKneelLowActions_diary : RifleKneelLowActions_gear {
			Stop = "AmovPknlMstpSlowWrflDnon_diary";
			StopRelaxed = "AmovPknlMstpSlowWrflDnon_diary";
			Default = "AmovPknlMstpSlowWrflDnon_diary";
		};
		
		class RifleKneelLowActionsRunF : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDf";
			Up = "AmovPercMrunSlowWrflDf";
		};
		
		class RifleKneelLowActionsWlkF : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDf";
			Up = "AmovPercMwlkSlowWrflDf";
		};
		
		class RifleKneelLowActionsRunFL : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDfl";
			Up = "AmovPercMrunSlowWrflDfl";
		};
		
		class RifleKneelLowActionsWlkFL : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDfl";
			Up = "AmovPercMwlkSlowWrflDfl";
		};
		
		class RifleKneelLowActionsRunL : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDl";
			Up = "AmovPercMrunSlowWrflDl";
		};
		
		class RifleKneelLowActionsWlkL : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDl";
			Up = "AmovPercMwlkSlowWrflDl";
		};
		
		class RifleKneelLowActionsRunBL : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDbl";
			Up = "AmovPercMrunSlowWrflDbl";
		};
		
		class RifleKneelLowActionsWlkBL : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDbl";
			Up = "AmovPercMwlkSlowWrflDbl";
		};
		
		class RifleKneelLowActionsRunB : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDb";
			Up = "AmovPercMrunSlowWrflDb";
		};
		
		class RifleKneelLowActionsWlkB : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDb";
			Up = "AmovPercMwlkSlowWrflDb";
		};
		
		class RifleKneelLowActionsRunBR : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDbr";
			Up = "AmovPercMrunSlowWrflDbr";
		};
		
		class RifleKneelLowActionsWlkBR : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDbr";
			Up = "AmovPercMwlkSlowWrflDbr";
		};
		
		class RifleKneelLowActionsRunR : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDr";
			Up = "AmovPercMrunSlowWrflDr";
		};
		
		class RifleKneelLowActionsWlkR : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDr";
			Up = "AmovPercMwlkSlowWrflDr";
		};
		
		class RifleKneelLowActionsRunFR : RifleKneelLowActions {
			PlayerStand = "AmovPercMrunSlowWrflDfr";
			Up = "AmovPercMrunSlowWrflDfr";
		};
		
		class RifleKneelLowActionsWlkFR : RifleKneelLowActions {
			PlayerStand = "AmovPercMwlkSlowWrflDfr";
			Up = "AmovPercMwlkSlowWrflDfr";
		};
		
		class RifleKneelTakeActions : RifleKneelActions {
			stop = "AinvPknlMstpSlayWrflDnon_1";
			StopRelaxed = "AinvPknlMstpSlayWrflDnon_1";
			default = "AinvPknlMstpSlayWrflDnon_1";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSlayWrflDnon_inventory";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
		};
		
		class RifleProneActions : RifleBaseStandActions {
			gestureAttack[] = {"GestureAttackProne", "Gesture"};
			gestureGo[] = {"GestureGoBProne", "Gesture"};
			gestureGoB[] = {"GestureGoBProne", "Gesture"};
			gestureFreeze[] = {"GestureFreezeProne", "Gesture"};
			gesturePoint[] = {"", "Gesture"};
			gestureCeaseFire[] = {"", "Gesture"};
			gestureCover[] = {"", "Gesture"};
			gestureUp[] = {"GestureGoBProne", "Gesture"};
			gestureNo[] = {"", "Gesture"};
			gestureYes[] = {"", "Gesture"};
			gestureFollow[] = {"", "Gesture"};
			gestureAdvance[] = {"GestureAdvanceProne", "Gesture"};
			stop = "AmovPpneMstpSrasWrflDnon";
			default = "AmovPpneMstpSrasWrflDnon";
			stopRelaxed = "AidlPpneMstpSrasWrflDnon01";
			turnL = "AmovPpneMstpSrasWrflDnon_turnL";
			turnR = "AmovPpneMstpSrasWrflDnon_turnR";
			turnLRelaxed = "AmovPpneMstpSrasWrflDnon_turnL";
			turnRRelaxed = "AmovPpneMstpSrasWrflDnon_turnR";
			reloadMagazine = "WeaponMagazineReloadProne";
			reloadMGun = "AmovPpneMstpSrasWrflDnon";
			reloadMortar = "AmovPpneMstpSrasWrflDnon";
			throwGrenade = "AwopPpneMstpSgthWrflDnon_Throw";
			walkF = "AmovPpneMrunSlowWrflDf";
			walkLF = "AmovPpneMrunSlowWrflDfl";
			walkRF = "AmovPpneMrunSlowWrflDfr";
			walkL = "AmovPpneMrunSlowWrflDl";
			walkR = "AmovPpneMrunSlowWrflDr";
			walkLB = "AmovPpneMrunSlowWrflDbl";
			walkRB = "AmovPpneMrunSlowWrflDbr";
			walkB = "AmovPpneMrunSlowWrflDb";
			slowF = "AmovPpneMsprSlowWrflDf";
			slowLF = "AmovPpneMsprSlowWrflDfl";
			slowRF = "AmovPpneMsprSlowWrflDfr";
			slowL = "AmovPpneMsprSlowWrflDl";
			slowR = "AmovPpneMsprSlowWrflDr";
			slowLB = "AmovPpneMsprSlowWrflDbl";
			slowRB = "AmovPpneMsprSlowWrflDbr";
			slowB = "AmovPpneMsprSlowWrflDb";
			fastF = "AmovPpneMsprSlowWrflDf";
			fastLF = "AmovPpneMsprSlowWrflDfl";
			fastRF = "AmovPpneMsprSlowWrflDfr";
			fastL = "AmovPpneMsprSlowWrflDl";
			fastR = "AmovPpneMsprSlowWrflDr";
			fastLB = "AmovPpneMsprSlowWrflDbl";
			fastRB = "AmovPpneMsprSlowWrflDbr";
			fastB = "AmovPpneMsprSlowWrflDb";
			EvasiveLeft = "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl";
			EvasiveRight = "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr";
			down = "AmovPercMstpSrasWrflDnon";
			up = "AmovPknlMstpSrasWrflDnon";
			die = "AdthPpneMstpSrasWrflDnon_1";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPpneMstpSrasWrflDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_rfl";
			binocOff = "AmovPpneMstpSrasWrflDnon";
			handGunOn = "AmovPpneMstpSrasWpstDnon";
			takeFlag = "AmovPpneMstpSrasWrflDnon";
			putDown = "AmovPpneMstpSrasWrflDnon";
			treated = "AmovPpneMstpSrasWrflDnon_healed";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			CanNotMove = "AmovPpneMstpSrasWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPpneMstpSrasWrflDnon";
			strokeFist = "";
			strokeGun = "AmovPpneMstpSrasWrflDnon";
			sitDown = "";
			salute = "";
			turnSpeed = 4;
			limitFast = 5.5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			upDegree = "ManPosLying";
			diary = "";
			EvasiveForward = "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf";
			PlayerProne = "";
			Gear = "";
			GetOver = "";
		};
		
		class RifleProneActionsRunF : RifleProneActions {
			PlayerStand = "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf";
		};
		
		class PistolStandActions : NoActions {
			gestureAttack[] = {"GestureAttackStand", "Gesture"};
			gestureGo[] = {"GestureGoStand", "Gesture"};
			gestureGoB[] = {"GestureGoBStand", "Gesture"};
			gestureFreeze[] = {"GestureFreezeStand", "Gesture"};
			gesturePoint[] = {"GesturePointStand", "Gesture"};
			gestureCeaseFire[] = {"GestureCeaseFire", "Gesture"};
			gestureCover[] = {"GestureCover", "Gesture"};
			gestureUp[] = {"GestureUp", "Gesture"};
			gestureNo[] = {"GestureNo", "Gesture"};
			gestureYes[] = {"GestureYes", "Gesture"};
			gestureFollow[] = {"GestureFollow", "Gesture"};
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			stop = "AidlPercMstpSrasWpstDnon_player_0S";
			default = "AmovPercMstpSrasWpstDnon";
			stopRelaxed = "AidlPercMstpSrasWpstDnon0S";
			turnL = "AmovPercMstpSrasWpstDnon_turnL";
			turnR = "AmovPercMstpSrasWpstDnon_turnR";
			turnLRelaxed = "AmovPercMstpSrasWpstDnon_turnL";
			turnRRelaxed = "AmovPercMstpSrasWpstDnon_turnR";
			reloadMagazine[] = {"PistolMagazineReloadStand", "Gesture"};
			reloadMGun = "AmovPercMstpSrasWpstDnon";
			reloadMortar = "AmovPercMstpSrasWpstDnon";
			throwGrenade = "AwopPercMstpSgthWpstDnon_Part3";
			walkF = "AmovPercMwlkSrasWpstDf";
			walkLF = "AmovPercMwlkSrasWpstDfl";
			walkRF = "AmovPercMwlkSrasWpstDfr";
			walkL = "AmovPercMwlkSrasWpstDl";
			walkR = "AmovPercMwlkSrasWpstDr";
			walkLB = "AmovPercMwlkSrasWpstDbl";
			walkRB = "AmovPercMwlkSrasWpstDbr";
			walkB = "AmovPercMwlkSrasWpstDb";
			slowF = "AmovPercMrunSrasWpstDf";
			slowLF = "AmovPercMrunSrasWpstDfl";
			slowRF = "AmovPercMrunSrasWpstDfr";
			slowL = "AmovPercMrunSrasWpstDl";
			slowR = "AmovPercMrunSrasWpstDr";
			slowLB = "AmovPercMrunSrasWpstDbl";
			slowRB = "AmovPercMrunSrasWpstDbr";
			slowB = "AmovPercMrunSrasWpstDb";
			fastF = "AmovPercMevaSrasWpstDf";
			fastLF = "AmovPercMevaSrasWpstDfl";
			fastRF = "AmovPercMevaSrasWpstDfr";
			fastL = "AmovPercMrunSrasWpstDl";
			fastR = "AmovPercMrunSrasWpstDr";
			fastLB = "AmovPercMrunSrasWpstDbl";
			fastRB = "AmovPercMrunSrasWpstDbr";
			fastB = "AmovPercMrunSrasWpstDb";
			down = "AmovPpneMstpSrasWpstDnon";
			up = "AmovPknlMstpSrasWpstDnon";
			PlayerStand = "";
			PlayerCrouch = "AmovPknlMstpSrasWpstDnon";
			PlayerProne = "AmovPpneMstpSrasWpstDnon";
			EvasiveForward = "AmovPercMevaSrasWpstDf";
			die = "AdthPercMstpSrasWpstDnon_1";
			weaponOn = "AmovPercMstpSrasWlnrDnon";
			weaponOff = "AmovPercMstpSrasWpstDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_pst";
			binocOff = "AmovPercMstpSrasWpstDnon";
			handGunOn = "AmovPercMstpSrasWrflDnon";
			takeFlag = "AinvPknlMstpSnonWnonDnon_1";
			putDown = "AinvPknlMstpSnonWnonDnon_1";
			medic = "AinvPknlMstpSnonWnonDnon_medic_1";
			treated = "AinvPknlMstpSnonWnonDnon_healed_1";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWpstDnon";
			Stand = "AmovPercMstpSlowWpstDnon";
			Crouch = "AmovPknlMstpSrasWpstDnon";
			CanNotMove = "AmovPercMstpSrasWpstDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPercMstpSrasWpstDnon";
			strokeFist = "";
			strokeGun = "AmovPercMstpSrasWpstDnon";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			startSwim = "AswmPercMrunSnonWnonDf";
			sitDown = "AmovPsitMstpSnonWpstDnon_ground";
			getOver = "AovrPercMstpSrasWpstDf";
			salute = "AmovPercMstpSrasWpstDnon_salute";
			leanRRot = 0.5;
			leanRShift = 0.01;
			leanLRot = 0.5;
			leanLShift = 0.01;
			turnSpeed = 8;
			limitFast = 5.5;
			upDegree = "ManPosHandGunStand";
			EvasiveLeft = "AmovPercMevaSrasWpstDfl";
			EvasiveRight = "AmovPercMevaSrasWpstDfr";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			diary = "AmovPknlMstpSrasWpstDnon";
			Surrender = "AmovPercMstpSsurWnonDnon";
			saluteOff = "AmovPercMstpSrasWpstDnon";
			Gear = "AmovPercMstpSrasWpstDnon_gear";
		};
		
		class PistolStandActions_gear : PistolStandActions {
			Stop = "AmovPercMstpSrasWpstDnon_gear";
			StopRelaxed = "AmovPercMstpSrasWpstDnon_gear";
			Default = "AmovPercMstpSrasWpstDnon_gear";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			HandGunOn = "AmovPercMstpSrasWrflDnon_gear";
		};
		
		class PistolStandActionsRunF : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDf";
			Up = "AmovPknlMrunSrasWpstDf";
			Crouch = "AmovPknlMrunSrasWpstDf";
		};
		
		class PistolStandActionsRunFL : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDfl";
			Up = "AmovPknlMrunSrasWpstDfl";
			Crouch = "AmovPknlMrunSrasWpstDfl";
		};
		
		class PistolStandActionsRunL : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDl";
			Up = "AmovPknlMrunSrasWpstDl";
			Crouch = "AmovPknlMrunSrasWpstDl";
		};
		
		class PistolStandActionsRunBL : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDbl";
			Up = "AmovPknlMrunSrasWpstDbl";
			Crouch = "AmovPknlMrunSrasWpstDbl";
		};
		
		class PistolStandActionsRunB : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDb";
			Up = "AmovPknlMrunSrasWpstDb";
			Crouch = "AmovPknlMrunSrasWpstDb";
		};
		
		class PistolStandActionsRunBR : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDbr";
			Up = "AmovPknlMrunSrasWpstDbr";
			Crouch = "AmovPknlMrunSrasWpstDbr";
		};
		
		class PistolStandActionsRunR : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDr";
			Up = "AmovPknlMrunSrasWpstDr";
			Crouch = "AmovPknlMrunSrasWpstDr";
		};
		
		class PistolStandActionsRunFR : PistolStandActions {
			PlayerCrouch = "AmovPknlMrunSrasWpstDfr";
			Up = "AmovPknlMrunSrasWpstDfr";
			Crouch = "AmovPknlMrunSrasWpstDfr";
		};
		
		class PistolStandActionsWlkF : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDf";
			Up = "AmovPknlMwlkSrasWpstDf";
			Crouch = "AmovPknlMwlkSrasWpstDf";
		};
		
		class PistolStandActionsWlkFL : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDfl";
			Up = "AmovPknlMwlkSrasWpstDfl";
			Crouch = "AmovPknlMwlkSrasWpstDfl";
		};
		
		class PistolStandActionsWlkL : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDl";
			Up = "AmovPknlMwlkSrasWpstDl";
			Crouch = "AmovPknlMwlkSrasWpstDl";
		};
		
		class PistolStandActionsWlkBL : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDbl";
			Up = "AmovPknlMwlkSrasWpstDbl";
			Crouch = "AmovPknlMwlkSrasWpstDbl";
		};
		
		class PistolStandActionsWlkB : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDb";
			Up = "AmovPknlMwlkSrasWpstDb";
			Crouch = "AmovPknlMwlkSrasWpstDb";
		};
		
		class PistolStandActionsWlkBR : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDbr";
			Up = "AmovPknlMwlkSrasWpstDbr";
			Crouch = "AmovPknlMwlkSrasWpstDbr";
		};
		
		class PistolStandActionsWlkR : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDr";
			Up = "AmovPknlMwlkSrasWpstDr";
			Crouch = "AmovPknlMwlkSrasWpstDr";
		};
		
		class PistolStandActionsWlkFR : PistolStandActionsRunF {
			PlayerCrouch = "AmovPknlMwlkSrasWpstDfr";
			Up = "AmovPknlMwlkSrasWpstDfr";
			Crouch = "AmovPknlMwlkSrasWpstDfr";
		};
		
		class PistolLowStandActions : PistolStandActions {
			upDegree = "ManPosStand";
			Stop = "AidlPercMstpSlowWpstDnon_player_0S";
			Default = "AmovPercMstpSlowWpstDnon";
			WalkF = "AmovPercMwlkSlowWpstDf";
			WalkLF = "AmovPercMwlkSlowWpstDfl";
			WalkRF = "AmovPercMwlkSlowWpstDfr";
			WalkL = "AmovPercMwlkSlowWpstDl";
			WalkR = "AmovPercMwlkSlowWpstDr";
			WalkLB = "AmovPercMwlkSlowWpstDbl";
			WalkRB = "AmovPercMwlkSlowWpstDbr";
			WalkB = "AmovPercMwlkSlowWpstDb";
			SlowF = "AmovPercMrunSlowWpstDf";
			SlowLF = "AmovPercMrunSlowWpstDfl";
			SlowRF = "AmovPercMrunSlowWpstDfr";
			SlowL = "AmovPercMrunSlowWpstDl";
			SlowR = "AmovPercMrunSlowWpstDr";
			SlowLB = "AmovPercMrunSlowWpstDbl";
			SlowRB = "AmovPercMrunSlowWpstDbr";
			SlowB = "AmovPercMrunSlowWpstDb";
			FastF = "AmovPercMevaSlowWpstDf";
			FastLF = "AmovPercMevaSlowWpstDfl";
			FastRF = "AmovPercMevaSlowWpstDfr";
			FastL = "AmovPercMrunSlowWpstDl";
			FastR = "AmovPercMrunSlowWpstDr";
			FastLB = "AmovPercMrunSlowWpstDbl";
			FastRB = "AmovPercMrunSlowWpstDbr";
			FastB = "AmovPercMrunSlowWpstDb";
			EvasiveForward = "AmovPercMevaSlowWpstDf";
			EvasiveLeft = "AmovPercMevaSlowWpstDfl";
			EvasiveRight = "AmovPercMevaSlowWpstDfr";
			GetOver = "AovrPercMstpSlowWpstDf";
		};
		
		class PistolStandEvasiveActions : PistolStandActions {
			fastF = "AmovPercMevaSrasWpstDf";
			fastLF = "AmovPercMevaSrasWpstDfl";
			fastRF = "AmovPercMevaSrasWpstDfr";
			salute = "";
			limitFast = 5.5;
		};
		
		class PistolRunFActions : PistolStandActions {
			die = "AdthPercMstpSrasWpstDf_2";
			throwGrenade = "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
		};
		
		class PistolWalkFActions : PistolStandActions {
			die = "AdthPercMstpSrasWpstDf_2";
			throwGrenade = "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
		};
		
		class PistolStandSaluteActions : PistolStandActions {
			stop = "AmovPercMstpSrasWpstDnon_Salute";
			stopRelaxed = "AmovPercMstpSrasWpstDnon_Salute";
			default = "AmovPercMstpSrasWpstDnon_Salute";
			salute = "AmovPercMstpSrasWpstDnon";
		};
		
		class PistolStandTakeActions : PistolStandActions {
			stop = "AinvPknlMstpSnonWnonDnon_1";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_1";
			default = "AinvPknlMstpSnonWnonDnon_1";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSnonWnonDnon_inventory";
		};
		
		class PistolSitActions : PistolStandActions {
			turnL = "";
			turnR = "";
			stop = "AmovPsitMstpSnonWpstDnon_ground";
			StopRelaxed = "AmovPsitMstpSnonWpstDnon_ground";
			default = "AmovPsitMstpSnonWpstDnon_ground";
			strokeFist = "";
			sitDown = "AmovPercMstpSrasWpstDnon";
			die = "AdthPsitMstpSlowWrflDnon";
			Diary = "";
			GetOver = "";
		};
		
		class PistolKneelActions : PistolStandActions {
			stop = "AidlPknlMstpSrasWpstDnon_player_0S";
			default = "AmovPknlMstpSrasWpstDnon";
			stopRelaxed = "AidlPknlMstpSrasWpstDnon0S";
			turnL = "AmovPknlMstpSrasWpstDnon_turnL";
			turnR = "AmovPknlMstpSrasWpstDnon_turnR";
			turnLRelaxed = "AmovPknlMstpSrasWpstDnon_turnL";
			turnRRelaxed = "AmovPknlMstpSrasWpstDnon_turnR";
			reloadMagazine[] = {"PistolMagazineReloadKneel", "Gesture"};
			reloadMGun = "AmovPknlMstpSrasWpstDnon";
			reloadMortar = "AmovPknlMstpSrasWpstDnon";
			throwGrenade = "AwopPknlMstpSgthWpstDnon_Part3";
			walkF = "AmovPknlMwlkSrasWpstDf";
			walkLF = "AmovPknlMwlkSrasWpstDfl";
			walkRF = "AmovPknlMwlkSrasWpstDfr";
			walkL = "AmovPknlMwlkSrasWpstDl";
			walkR = "AmovPknlMwlkSrasWpstDr";
			walkLB = "AmovPknlMwlkSrasWpstDbl";
			walkRB = "AmovPknlMwlkSrasWpstDbr";
			walkB = "AmovPknlMwlkSrasWpstDb";
			slowF = "AmovPknlMrunSrasWpstDf";
			slowLF = "AmovPknlMrunSrasWpstDfl";
			slowRF = "AmovPknlMrunSrasWpstDfr";
			slowL = "AmovPknlMrunSrasWpstDl";
			slowR = "AmovPknlMrunSrasWpstDr";
			slowLB = "AmovPknlMrunSrasWpstDbl";
			slowRB = "AmovPknlMrunSrasWpstDbr";
			slowB = "AmovPknlMrunSrasWpstDb";
			fastF = "AmovPercMevaSrasWpstDf";
			fastLF = "AmovPercMevaSrasWpstDfl";
			fastRF = "AmovPercMevaSrasWpstDfr";
			fastL = "AmovPknlMrunSrasWpstDl";
			fastR = "AmovPknlMrunSrasWpstDr";
			fastLB = "AmovPknlMrunSrasWpstDbl";
			fastRB = "AmovPknlMrunSrasWpstDbr";
			fastB = "AmovPknlMrunSrasWpstDb";
			down = "AmovPpneMstpSrasWpstDnon";
			up = "AmovPercMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerCrouch = "";
			PlayerProne = "AmovPpneMstpSrasWpstDnon";
			die = "AdthPknlMstpSrasWpstDnon_1";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPknlMstpSrasWpstDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_pst";
			binocOff = "AmovPknlMstpSrasWpstDnon";
			handGunOn = "AmovPknlMstpSrasWrflDnon";
			takeFlag = "AinvPknlMstpSnonWnonDnon_2";
			putDown = "AinvPknlMstpSnonWnonDnon_2";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWpstDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWpstDnon";
			Civil = "AmovPknlMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			CanNotMove = "AmovPknlMstpSrasWpstDnon";
			FireNotPossible = "AmovPknlMstpSrasWpstDnon";
			strokeFist = "";
			strokeGun = "AmovPknlMstpSrasWpstDnon";
			sitDown = "";
			salute = "";
			turnSpeed = 6;
			limitFast = 5.5;
			upDegree = "ManPosHandGunCrouch";
			Gear = "AmovPknlMstpSrasWpstDnon_gear";
		};
		
		class PistolKneelActions_gear : PistolKneelActions {
			Stop = "AmovPknlMstpSrasWpstDnon_gear";
			StopRelaxed = "AmovPknlMstpSrasWpstDnon_gear";
			Default = "AmovPknlMstpSrasWpstDnon_gear";
			PlayerCrouch = "AmovPknlMstpSrasWpstDnon";
			HandGunOn = "AmovPknlMstpSrasWrflDnon_gear";
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
		};
		
		class PistolKneelActionsRunF : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDf";
			Up = "AmovPercMrunSrasWpstDf";
		};
		
		class PistolKneelActionsRunFL : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDfl";
			Up = "AmovPercMrunSrasWpstDfl";
		};
		
		class PistolKneelActionsRunL : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDl";
			Up = "AmovPercMrunSrasWpstDl";
		};
		
		class PistolKneelActionsRunBL : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDbl";
			Up = "AmovPercMrunSrasWpstDbl";
		};
		
		class PistolKneelActionsRunB : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDb";
			Up = "AmovPercMrunSrasWpstDb";
		};
		
		class PistolKneelActionsRunBR : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDbr";
			Up = "AmovPercMrunSrasWpstDbr";
		};
		
		class PistolKneelActionsRunR : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDr";
			Up = "AmovPercMrunSrasWpstDr";
		};
		
		class PistolKneelActionsRunFr : PistolKneelActions {
			PlayerStand = "AmovPercMrunSrasWpstDfr";
			Up = "AmovPercMrunSrasWpstDfr";
		};
		
		class PistolKneelActionsWlkF : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDf";
			Up = "AmovPercMwlkSrasWpstDf";
		};
		
		class PistolKneelActionsWlkFL : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDfl";
			Up = "AmovPercMwlkSrasWpstDfl";
		};
		
		class PistolKneelActionsWlkL : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDl";
			Up = "AmovPercMwlkSrasWpstDl";
		};
		
		class PistolKneelActionsWlkBL : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDbl";
			Up = "AmovPercMwlkSrasWpstDbl";
		};
		
		class PistolKneelActionsWlkB : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDb";
			Up = "AmovPercMwlkSrasWpstDb";
		};
		
		class PistolKneelActionsWlkBR : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDbr";
			Up = "AmovPercMwlkSrasWpstDbr";
		};
		
		class PistolKneelActionsWlkR : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDr";
			Up = "AmovPercMwlkSrasWpstDr";
		};
		
		class PistolKneelActionsWlkFR : PistolKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSrasWpstDfr";
			Up = "AmovPercMwlkSrasWpstDfr";
		};
		
		class PistolLowKneelActions : PistolKneelActions {
			Stop = "AmovPknlMstpSlowWpstDnon";
			WalkF = "AmovPknlMwlkSlowWpstDf";
			WalkLF = "AmovPknlMwlkSlowWpstDfl";
			WalkRF = "AmovPknlMwlkSlowWpstDfr";
			WalkL = "AmovPknlMwlkSlowWpstDl";
			WalkR = "AmovPknlMwlkSlowWpstDr";
			WalkLB = "AmovPknlMwlkSlowWpstDbl";
			WalkRB = "AmovPknlMwlkSlowWpstDbr";
			WalkB = "AmovPknlMwlkSlowWpstDb";
			SlowF = "AmovPknlMrunSlowWpstDf";
			SlowLF = "AmovPknlMrunSlowWpstDfl";
			SlowRF = "AmovPknlMrunSlowWpstDfr";
			SlowL = "AmovPknlMrunSlowWpstDl";
			SlowR = "AmovPknlMrunSlowWpstDr";
			SlowLB = "AmovPknlMrunSlowWpstDbl";
			SlowRB = "AmovPknlMrunSlowWpstDbr";
			SlowB = "AmovPknlMrunSlowWpstDb";
			FastL = "AmovPknlMrunSlowWpstDl";
			FastR = "AmovPknlMrunSlowWpstDr";
			FastLB = "AmovPknlMrunSlowWpstDbl";
			FastRB = "AmovPknlMrunSlowWpstDbr";
			FastB = "AmovPknlMrunSlowWpstDb";
		};
		
		class PistolKneelTakeActions : PistolKneelActions {
			stop = "AinvPknlMstpSnonWnonDnon_2";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_2";
			default = "AinvPknlMstpSnonWnonDnon_2";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSnonWnonDnon_inventory";
		};
		
		class PistolProneActions : PistolStandActions {
			gestureAttack[] = {"GestureAttackProne", "Gesture"};
			gestureGo[] = {"GestureGoBProne", "Gesture"};
			gestureGoB[] = {"GestureGoBProne", "Gesture"};
			gestureFreeze[] = {"GestureFreezeProne", "Gesture"};
			gesturePoint[] = {"", "Gesture"};
			gestureCeaseFire[] = {"", "Gesture"};
			gestureCover[] = {"", "Gesture"};
			gestureUp[] = {"GestureGoBProne", "Gesture"};
			gestureNo[] = {"", "Gesture"};
			gestureYes[] = {"", "Gesture"};
			gestureFollow[] = {"", "Gesture"};
			gestureAdvance[] = {"GestureAdvanceProne", "Gesture"};
			stop = "AmovPpneMstpSrasWpstDnon";
			default = "AmovPpneMstpSrasWpstDnon";
			stopRelaxed = "AidlPpneMstpSrasWpstDnon01";
			turnL = "AmovPpneMstpSrasWpstDnon_turnL";
			turnR = "AmovPpneMstpSrasWpstDnon_turnR";
			turnLRelaxed = "AmovPpneMstpSrasWpstDnon_turnL";
			turnRRelaxed = "AmovPpneMstpSrasWpstDnon_turnR";
			reloadMagazine = "PistolMagazineReloadProne";
			reloadMGun = "AmovPpneMstpSrasWpstDnon";
			reloadMortar = "AmovPpneMstpSrasWpstDnon";
			throwGrenade = "AwopPpneMstpSgthWpstDnon_Part3";
			walkF = "AmovPpneMrunSlowWpstDf";
			walkLF = "AmovPpneMrunSlowWpstDfl";
			walkRF = "AmovPpneMrunSlowWpstDfr";
			walkL = "AmovPpneMrunSlowWpstDl";
			walkR = "AmovPpneMrunSlowWpstDr";
			walkLB = "AmovPpneMrunSlowWpstDbl";
			walkRB = "AmovPpneMrunSlowWpstDbr";
			walkB = "AmovPpneMrunSlowWpstDb";
			slowF = "AmovPpneMrunSlowWpstDf";
			slowLF = "AmovPpneMrunSlowWpstDfl";
			slowRF = "AmovPpneMrunSlowWpstDfr";
			slowL = "AmovPpneMrunSlowWpstDl";
			slowR = "AmovPpneMrunSlowWpstDr";
			slowLB = "AmovPpneMrunSlowWpstDbl";
			slowRB = "AmovPpneMrunSlowWpstDbr";
			slowB = "AmovPpneMrunSlowWpstDb";
			fastF = "AmovPpneMrunSlowWpstDf";
			fastLF = "AmovPercMrunSrasWpstDfl";
			fastRF = "AmovPercMrunSrasWpstDfr";
			fastL = "AmovPpneMrunSlowWpstDl";
			fastR = "AmovPpneMrunSlowWpstDr";
			fastLB = "AmovPpneMrunSlowWpstDbl";
			fastRB = "AmovPpneMrunSlowWpstDbr";
			fastB = "AmovPpneMrunSlowWpstDb";
			EvasiveLeft = "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl";
			EvasiveRight = "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr";
			down = "AmovPercMstpSrasWpstDnon";
			up = "AmovPknlMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerCrouch = "AmovPknlMstpSrasWpstDnon";
			PlayerProne = "AmovPpneMstpSrasWpstDnon";
			die = "AdthPpneMstpSrasWpstDnon_1";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPpneMstpSrasWpstDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_pst";
			binocOff = "AmovPpneMstpSrasWpstDnon";
			handGunOn = "AmovPpneMstpSrasWrflDnon";
			takeFlag = "AmovPpneMstpSrasWpstDnon";
			putDown = "AmovPpneMstpSrasWpstDnon";
			treated = "AmovPpneMstpSrasWpstDnon_healed";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWpstDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWpstDnon";
			CanNotMove = "AmovPpneMstpSrasWpstDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPpneMstpSrasWpstDnon";
			strokeFist = "";
			strokeGun = "AmovPpneMstpSrasWpstDnon";
			sitDown = "";
			salute = "";
			turnSpeed = 4;
			limitFast = 5.5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			upDegree = "ManPosHandGunLying";
			diary = "";
			GetOver = "";
		};
		
		class CivilStandActions : NoActions {
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			gestureNod[] = {"GestureNod", "Gesture"};
			stop = "AidlPercMstpSnonWnonDnon_player";
			default = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AidlPercMstpSnonWnonDnon";
			turnL = "AmovPercMstpSnonWnonDnon_turnL";
			turnR = "AmovPercMstpSnonWnonDnon_turnR";
			turnLRelaxed = "AmovPercMstpSnonWnonDnon_turnL";
			turnRRelaxed = "AmovPercMstpSnonWnonDnon_turnR";
			reloadMagazine = "AmovPercMstpSnonWnonDnon";
			reloadMGun = "AmovPercMstpSnonWnonDnon";
			reloadMortar = "AmovPercMstpSnonWnonDnon";
			throwGrenade = "AwopPercMstpSgthWnonDnon_throw";
			walkF = "AmovPercMwlkSnonWnonDf";
			walkLF = "AmovPercMwlkSnonWnonDfl";
			walkRF = "AmovPercMwlkSnonWnonDfr";
			walkL = "AmovPercMwlkSnonWnonDl";
			walkR = "AmovPercMwlkSnonWnonDr";
			walkLB = "AmovPercMwlkSnonWnonDbl";
			walkRB = "AmovPercMwlkSnonWnonDbr";
			walkB = "AmovPercMwlkSnonWnonDb";
			slowF = "AmovPercMrunSnonWnonDf";
			slowLF = "AmovPercMrunSnonWnonDfl";
			slowRF = "AmovPercMrunSnonWnonDfr";
			slowL = "AmovPercMrunSnonWnonDl";
			slowR = "AmovPercMrunSnonWnonDr";
			slowLB = "AmovPercMrunSnonWnonDbl";
			slowRB = "AmovPercMrunSnonWnonDbr";
			slowB = "AmovPercMrunSnonWnonDb";
			fastF = "AmovPercMevaSnonWnonDf";
			fastLF = "AmovPercMevaSnonWnonDfl";
			fastRF = "AmovPercMevaSnonWnonDfr";
			fastL = "AmovPercMrunSnonWnonDl";
			fastR = "AmovPercMrunSnonWnonDr";
			fastLB = "AmovPercMrunSnonWnonDbl";
			fastRB = "AmovPercMrunSnonWnonDbr";
			fastB = "AmovPercMrunSnonWnonDb";
			EvasiveForward = "AmovPercMevaSnonWnonDf";
			down = "AmovPpneMstpSnonWnonDnon";
			up = "AmovPknlMstpSnonWnonDnon";
			die = "AdthPercMstpSnonWnonDnon_1";
			weaponOn = "AmovPercMstpSrasWlnrDnon";
			weaponOff = "AmovPercMstpSnonWnonDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_non";
			binocOff = "AmovPercMstpSnonWnonDnon";
			handGunOn = "AmovPercMstpSrasWpstDnon";
			takeFlag = "AinvPknlMstpSnonWnonDnon_3";
			putDown = "AinvPknlMstpSnonWnonDnon_3";
			medic = "AinvPknlMstpSnonWnonDnon_medic_2";
			treated = "AinvPknlMstpSnonWnonDnon_healed_2";
			PlayerStand = "";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSnonWnonDnon";
			Stand = "AmovPercMstpSnonWnonDnon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			CanNotMove = "AmovPercMstpSnonWnonDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPercMstpSnonWnonDnon";
			strokeFist = "";
			strokeGun = "AmovPercMstpSnonWnonDnon";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			startSwim = "AswmPercMrunSnonWnonDf";
			sitDown = "AmovPsitMstpSnonWnonDnon_ground";
			getOver = "AovrPercMstpSnonWnonDf";
			salute = "AmovPercMstpSnonWnonDnon_salute";
			turnSpeed = 8;
			limitFast = 4;
			leanRRot = 0.57;
			leanRShift = 0.1;
			leanLRot = 0.57;
			leanLShift = 0.07;
			upDegree = "ManPosNoWeapon";
			EvasiveLeft = "AmovPercMevaSnonWnonDfl";
			EvasiveRight = "AmovPercMevaSnonWnonDfr";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			diary = "AmovPercMstpSnonWnonDnon";
			Surrender = "AmovPercMstpSsurWnonDnon";
			saluteOff = "AmovPercMstpSnonWnonDnon";
		};
		
		class CivilStandActions_noCollision : CivilStandActions {
			Stop = "AmovPercMstpSnonWnonDnon_nocollision";
			StopRelaxed = "AmovPercMstpSnonWnonDnon_nocollision";
			Default = "AmovPercMstpSnonWnonDnon_nocollision";
		};
		
		class CivilStandActions_CommanderTalk : CivilStandActions {
			Default = "UnaErcVelitelProslov2";
			Stop = "UnaErcVelitelProslov2";
			StopRelaxed = "UnaErcVelitelProslov2";
			SceneCommanderTalk = "UnaErcVelitelProslov2";
		};
		
		class CivilStandActions_Doktor_idleni0 : CivilStandActions {
			Stop = "CtsDoktor_Doktor_idleni0";
			StopRelaxed = "CtsDoktor_Doktor_idleni0";
			Default = "CtsDoktor_Doktor_idleni0";
			Civil = "CtsDoktor_Doktor_idleni0";
			Die = "CtsDoktor_Doktor_death";
		};
		
		class CivilStandActions_idleni1 : CivilStandActions {
			Stop = "CtsPercMstpSnonWnonDnon_idleLoop";
			StopRelaxed = "CtsPercMstpSnonWnonDnon_idleLoop";
			Default = "CtsPercMstpSnonWnonDnon_idleLoop";
		};
		
		class CivilStandAction_OprenOZabradli : CivilStandActions {
			Default = "Csdr_LHD_oprenOzabradli118cm_A";
			Stop = "Csdr_LHD_oprenOzabradli118cm_A";
			StopRelaxed = "Csdr_LHD_oprenOzabradli118cm_A";
		};
		
		class CivilStandActions_CommanderListen : CivilStandActions {
			Stop = "UnaErcPoslechVelitele1";
			StopRelaxed = "UnaErcPoslechVelitele1";
			Default = "UnaErcPoslechVelitele1";
			Stand = "UnaErcPoslechVelitele1";
			CanNotMove = "UnaErcPoslechVelitele1";
			PlayerStand = "UnaErcPoslechVelitele1";
			Up = "UnaErcPoslechVelitele1";
		};
		
		class CivilStandActions_talkHeated : CivilStandActions {
			Die = "AdthPercMstpSlowWrflDnon_1";
		};
		
		class CivilStandActions_assembling : CivilStandActions {
			Stop = "ActsPercSnonWnonDnon_assembling";
			StopRelaxed = "ActsPercSnonWnonDnon_assembling";
			Default = "ActsPercSnonWnonDnon_assembling";
		};
		
		class CivilStandActions_talking01 : CivilStandActions {
			Stop = "ActsPercMstpSnonWnonDnon_talking01";
			StopRelaxed = "ActsPercMstpSnonWnonDnon_talking01";
			Default = "ActsPercMstpSnonWnonDnon_talking01";
			Stand = "ActsPercMstpSnonWnonDnon_talking01";
		};
		
		class CivilStandActions_talkingA : CivilStandActions {
			Stop = "AidlPercSnonWnonDnon_talkAS";
			StopRelaxed = "AidlPercSnonWnonDnon_talkAS";
			Default = "AidlPercSnonWnonDnon_talkAS";
			saluteOff = "";
			Salute = "";
		};
		
		class CivilStandActions_talkingB : CivilStandActions {
			Stop = "AidlPercSnonWnonDnon_talkBS";
			StopRelaxed = "AidlPercSnonWnonDnon_talkBS";
			Default = "AidlPercSnonWnonDnon_talkBS";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilStandActions_talking02 : CivilStandActions_talking01 {
			Stop = "ActsPercMstpSnonWnonDnon_talking02";
			StopRelaxed = "ActsPercMstpSnonWnonDnon_talking02";
			Default = "ActsPercMstpSnonWnonDnon_talking02";
		};
		
		class CivilStandActions_talking03 : CivilStandActions_talking01 {
			Stop = "ActsPercMstpSnonWnonDnon_talking03";
			StopRelaxed = "ActsPercMstpSnonWnonDnon_talking03";
			Default = "ActsPercMstpSnonWnonDnon_talking03";
		};
		
		class CivilStandActions_talking04 : CivilStandActions_talking01 {
			StopRelaxed = "ActsPercMstpSnonWnonDnon_talking04";
			Stop = "ActsPercMstpSnonWnonDnon_talking04";
			Default = "ActsPercMstpSnonWnonDnon_talking04";
		};
		
		class CivilStandAction_c0briefing_shaftoe : CivilStandActions {
			Stop = "shaftoe_c0briefing_otazky_loop";
			StopRelaxed = "shaftoe_c0briefing_otazky_loop";
			Default = "shaftoe_c0briefing_otazky_loop";
		};
		
		class CIvilStandActions_c0briefing_miles : CivilStandActions {
			Stop = "miles_c0briefing_otazky_loop";
			StopRelaxed = "miles_c0briefing_otazky_loop";
			Default = "miles_c0briefing_otazky_loop";
		};
		
		class CivilStandActions_c0briefing_promitac : CivilStandActions {
			Stop = "promitac_c0briefing_otazky_loop";
			StopRelaxed = "promitac_c0briefing_otazky_loop";
			Default = "promitac_c0briefing_otazky_loop";
		};
		
		class CivilStandActions_poslouchani : CivilStandActions {
			Stop = "AmovPercMstpSnonWnonDnon_zevl";
			StopRelaxed = "AmovPercMstpSnonWnonDnon_zevl";
			Default = "AmovPercMstpSnonWnonDnon_zevl";
		};
		
		class CivilStandActions_poslouchaniRuceVBok : CivilStandActions {
			Stop = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbok";
			StopRelaxed = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbok";
			Default = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbok";
		};
		
		class CivilStandActions_poslouchaniRuceVSobe : CivilStandActions {
			Stop = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVsobePanev";
			StopRelaxed = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVsobePanev";
			Default = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVsobePanev";
		};
		
		class CivilStandActions_poslouchaniRukaVtvar45st : CivilStandActions {
			Stop = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_rukaVtvar45st";
			StopRelaxed = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_rukaVtvar45st";
			Default = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_rukaVtvar45st";
		};
		
		class CivilStandActions_poslouchaniRuceZaZady : CivilStandActions {
			Stop = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceZaZady";
			StopRelaxed = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceZaZady";
			Default = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceZaZady";
		};
		
		class CivilStandActions_poslouchaniRuceVbokA : CivilStandActions {
			Stop = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbokA";
			StopRelaxed = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbokA";
			Default = "poslouchaniproslovgenerala_CsdrAidlPercMstpSnon_ruceVbokA";
		};
		
		class CivilStandActions_crowdcheers : CivilStandActions {
			Stop = "c7a_bravoTOerc_idle";
			StopRelaxed = "c7a_bravoTOerc_idle";
			Salute = "";
			saluteOff = "";
			Default = "c7a_bravoTOerc_idle";
		};
		
		class CivilStandActions_crowdcheerspotlesk : CivilStandActions {
			Stop = "c7a_bravoTleskani_idle";
			StopRelaxed = "c7a_bravoTleskani_idle";
			Default = "c7a_bravoTleskani_idle";
			Salute = "";
		};
		
		class CivilStandActions_crowdcheerssalute : CivilStandActions {
			Stop = "c7a_bravo_dovadeni6_idle";
			StopRelaxed = "c7a_bravo_dovadeni6_idle";
			Default = "c7a_bravo_dovadeni6_idle";
			Salute = "";
		};
		
		class CivilStandActions_noSalute : CivilStandActions {
			Salute = "";
		};
		
		class CivilStandActions_dovadeni2 : CivilStandActions {
			Stop = "c7a_bravo_dovadeni2";
			StopRelaxed = "c7a_bravo_dovadeni2";
			Default = "c7a_bravo_dovadeni2";
			Salute = "";
		};
		
		class CivilStandActions_dovadeni3 : CivilStandActions_dovadeni2 {
			Stop = "c7a_bravo_dovadeni3";
			StopRelaxed = "c7a_bravo_dovadeni3";
			Default = "c7a_bravo_dovadeni3";
		};
		
		class CivilStandActions_dovadeni4 : CivilStandActions_dovadeni2 {
			Stop = "c7a_bravo_dovadeni4";
			StopRelaxed = "c7a_bravo_dovadeni4";
			Default = "c7a_bravo_dovadeni4";
		};
		
		class CivilStandActions_dovadeni5 : CivilStandActions_dovadeni2 {
			Stop = "c7a_bravo_dovadeni5";
			StopRelaxed = "c7a_bravo_dovadeni5";
			Default = "c7a_bravo_dovadeni5";
		};
		
		class CivilStandActions_dovadeni7 : CivilStandActions_dovadeni2 {
			Stop = "c7a_bravo_dovadeni7";
			StopRelaxed = "c7a_bravo_dovadeni7";
			Default = "c7a_bravo_dovadeni7";
		};
		
		class CivilStandActions_dovadeni1 : CivilStandActions_dovadeni2 {
			Stop = "c7a_bravo_dovadeni1";
			StopRelaxed = "c7a_bravo_dovadeni1";
			Default = "c7a_bravo_dovadeni1";
		};
		
		class CivilStandActions_TowingTractorSupport : CivilStandActions {
			Stop = "TowingTractorSupport";
			StopRelaxed = "TowingTractorSupport";
			saluteOff = "";
			Salute = "";
			Default = "TowingTractorSupport";
		};
		
		class CivilStandActions_RepairingErc : CivilStandActions {
			Stop = "RepairingErc";
			StopRelaxed = "RepairingErc";
			Default = "RepairingErc";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilStandActions_LHD_hiDeck : CivilStandActions {
			Stop = "LHD_hiDeck";
			StopRelaxed = "LHD_hiDeck";
			Default = "LHD_hiDeck";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilStandActions_LHD_krajPaluby : CivilStandActions {
			Stop = "LHD_krajPaluby";
			StopRelaxed = "LHD_krajPaluby";
			Default = "LHD_krajPaluby";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilStandActions_LHD_midDeck : CivilStandActions {
			Stop = "LHD_midDeck";
			StopRelaxed = "LHD_midDeck";
			Default = "LHD_midDeck";
			saluteOff = "";
			Salute = "";
		};
		
		class CivilStandActions_AmovPercMstpSnonWnonDnon_initLoop : CivilStandActions {
			Stop = "AmovPercMstpSnonWnonDnon_initLoop";
			StopRelaxed = "AmovPercMstpSnonWnonDnon_initLoop";
			Default = "AmovPercMstpSnonWnonDnon_initLoop";
			saluteOff = "";
			Salute = "";
		};
		
		class CivilStandActions_kliky : CivilStandActions_AmovPercMstpSnonWnonDnon_initLoop {
			Die = "AdthPpneMstpSnonWnonDnon";
		};
		
		class CivilStandActions_AlexLoopIngame : CivilStandActions {
			Stop = "c5efe_AlexLoopIngame";
			StopRelaxed = "c5efe_AlexLoopIngame";
			Default = "c5efe_AlexLoopIngame";
			Die = "c5efe_AlexDeath";
		};
		
		class CivilStandActions_honza : CivilStandActions {
			Stop = "C5efe_honzaLoop";
			StopRelaxed = "C5efe_honzaLoop";
			Default = "C5efe_honzaLoop";
		};
		
		class CivilStandActions_alex : CivilStandActions {
			Stop = "C5efe_alexLoopIngame";
			StopRelaxed = "C5efe_alexLoopIngame";
			Default = "C5efe_alexLoopIngame";
		};
		
		class CivilStandActions_michal : CivilStandActions {
			Stop = "c5efe_MichalLoop";
			StopRelaxed = "c5efe_MichalLoop";
			Default = "c5efe_MichalLoop";
		};
		
		class CivilStandActions_zbyshek : CivilStandActions {
			Stop = "c5efe_ZbyshekLoop";
			StopRelaxed = "c5efe_ZbyshekLoop";
			Default = "c5efe_ZbyshekLoop";
		};
		
		class Action_AnimViewControl : CivilStandActions {
			Stop = "AnimViewControl";
			StopRelaxed = "AnimViewControl";
			Stand = "AnimViewControl";
			Default = "AnimViewControl";
		};
		
		class CivilRunActions : CivilStandActions {
			throwGrenade = "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow";
			salute = "";
			die = "CzmbAdthPercMrunSnonWnonDf";
		};
		
		class CivilRunActionsF : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDf";
			PlayerCrouch = "AmovPknlMrunSnonWnonDf";
			Up = "AmovPknlMrunSnonWnonDf";
		};
		
		class CivilRunActionsFL : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDfl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDfl";
			Up = "AmovPknlMrunSnonWnonDfl";
		};
		
		class CivilRunActionsL : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDl";
			Up = "AmovPknlMrunSnonWnonDl";
		};
		
		class CivilRunActionsBL : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDbl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDbl";
			Up = "AmovPknlMrunSnonWnonDbl";
		};
		
		class CivilRunActionsB : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDb";
			PlayerCrouch = "AmovPknlMrunSnonWnonDb";
			Up = "AmovPknlMrunSnonWnonDb";
		};
		
		class CivilRunActionsBR : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDbr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDbr";
			Up = "AmovPknlMrunSnonWnonDbr";
		};
		
		class CivilRunActionsR : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDr";
			Up = "AmovPknlMrunSnonWnonDr";
		};
		
		class CivilRunActionsFR : CivilRunActions {
			Crouch = "AmovPknlMrunSnonWnonDfr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDfr";
			Up = "AmovPknlMrunSnonWnonDfr";
		};
		
		class CivilWlkActionsF : CivilRunActionsF {
			PlayerCrouch = "AmovPknlMwlkSnonWnonDf";
			Crouch = "AmovPknlMwlkSnonWnonDf";
			Up = "AmovPknlMwlkSnonWnonDf";
			Die = "ZombieWalkingDeath";
		};
		
		class CivilWlkActionsFL : CivilWlkActionsF {
			PlayerCrouch = "AmovPknlMwlkSnonWnonDfl";
			Crouch = "AmovPknlMwlkSnonWnonDfl";
			Up = "AmovPknlMwlkSnonWnonDfl";
		};
		
		class CivilWlkActionsL : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDl";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDl";
			Up = "AmovPknlMwlkSnonWnonDl";
		};
		
		class CivilWlkActionsBL : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDbl";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDbl";
			Up = "AmovPknlMwlkSnonWnonDbl";
		};
		
		class CivilWlkActionsB : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDb";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDb";
			Up = "AmovPknlMwlkSnonWnonDb";
		};
		
		class CivilWlkActionsBR : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDbr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDbr";
			Up = "AmovPknlMwlkSnonWnonDbr";
		};
		
		class CivilWlkActionsR : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDr";
			Up = "AmovPknlMwlkSnonWnonDr";
		};
		
		class CivilWlkActionsFR : CivilWlkActionsF {
			Crouch = "AmovPknlMwlkSnonWnonDfr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDfr";
			Up = "AmovPknlMwlkSnonWnonDfr";
		};
		
		class CivilStandActions_NikitinDead : CivilStandActions {
			toAgony = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
			Stop = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
			StopRelaxed = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
			Lying = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
			CanNotMove = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
			Die = "AdthPercMstpSrasWrflDnon_NikitinDead2";
			Default = "ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead";
		};
		
		class CivilEvasiveActions : CivilStandActions {
			fastF = "AmovPercMevaSnonWnonDf";
			fastLF = "AmovPercMevaSnonWnonDfl";
			fastRF = "AmovPercMevaSnonWnonDfr";
			throwGrenade = "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow";
			salute = "";
			limitFast = 5.5;
		};
		
		class CivilStandSaluteActions : CivilStandActions {
			stop = "AmovPercMstpSnonWnonDnon_Salute";
			stopRelaxed = "AmovPercMstpSnonWnonDnon_Salute";
			default = "AmovPercMstpSnonWnonDnon_Salute";
			salute = "AmovPercMstpSnonWnonDnon";
		};
		
		class CivilStandTakeActions : CivilStandActions {
			stop = "AinvPknlMstpSnonWnonDnon_3";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_3";
			default = "AinvPknlMstpSnonWnonDnon_3";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSnonWnonDnon_inventory";
		};
		
		class CivilSitActions : CivilStandActions {
			turnL = "";
			turnR = "";
			stop = "AmovPsitMstpSnonWnonDnon_ground";
			StopRelaxed = "AmovPsitMstpSnonWnonDnon_ground";
			default = "AmovPsitMstpSnonWnonDnon_ground";
			strokeFist = "";
			sitDown = "AmovPercMstpSnonWnonDnon";
			die = "AdthPsitMstpSlowWrflDnon";
			Diary = "";
			GetOver = "";
		};
		
		class CivilSitActions_beatingDoctor : CivilSitActions {
			Stop = "CtsDoktor_Doktor_uder3";
			StopRelaxed = "CtsDoktor_Doktor_uder3";
			Default = "CtsDoktor_Doktor_uder3";
			Die = "CtsDoktor_Doktor_death";
		};
		
		class CivilSitActions_idleLoop : CivilSitActions {
			Stop = "sitUnarm_L_idleLoop";
			StopRelaxed = "sitUnarm_L_idleLoop";
			Default = "sitUnarm_L_idleLoop";
			Die = "adthpsitmstpsnonwnondnon_forgoten";
		};
		
		class CivilSitActions_idleLoop_Pallets1 : CivilSitActions_idleLoop {
			Default = "sitUnarm_L_idleLoop_onFoiledPallets";
			Stop = "sitUnarm_L_idleLoop_onFoiledPallets";
			StopRelaxed = "sitUnarm_L_idleLoop_onFoiledPallets";
		};
		
		class CivilSitActions_idleLoop_Pallets2 : CivilSitActions_idleLoop {
			Default = "sitUnarm_L_idleLoop_onFoiledPallets2";
			Stop = "sitUnarm_L_idleLoop_onFoiledPallets2";
			StopRelaxed = "sitUnarm_L_idleLoop_onFoiledPallets2";
		};
		
		class CivilSitActions_idleLoop_UH1Y : CivilSitActions_idleLoop {
			Default = "sitUnarm_L_idleLoop_inUH1Y";
			Stop = "sitUnarm_L_idleLoop_inUH1Y";
			StopRelaxed = "sitUnarm_L_idleLoop_inUH1Y";
		};
		
		class CivilSitActions_idleLoop_TTractor : CivilSitActions {
			Stop = "sitTableRfl_listening_onTTractor";
			StopRelaxed = "sitTableRfl_listening_onTTractor";
			Default = "sitTableRfl_listening_onTTractor";
		};
		
		class CivilSitActions_idleLoopR : CivilSitActions {
			Stop = "sitUnarm_R_idleLoop";
			StopRelaxed = "sitUnarm_R_idleLoop";
			Default = "sitUnarm_R_idleLoop";
			Die = "adthpsitmstpsnonwnondnon_forgoten";
		};
		
		class CivilSitActions_UnarmSitTable : CivilSitActions {
			Stop = "sitTableUnarm_talkingListening";
			StopRelaxed = "sitTableUnarm_talkingListening";
			Default = "sitTableUnarm_talkingListening";
		};
		
		class CivilSitActions_UnarmSitTableTTractor : CivilSitActions {
			Stop = "sitTableUnarm_talkingListening_TowingTractor";
			StopRelaxed = "sitTableUnarm_talkingListening_TowingTractor";
			Default = "sitTableUnarm_talkingListening_TowingTractor";
		};
		
		class CivilSitActions_c0Briefing_cooper : CivilSitActions {
			Stop = "cooper_c0Briefing_loop";
			StopRelaxed = "cooper_c0Briefing_loop";
			Default = "cooper_c0Briefing_loop";
			WalkF = "cooper_c0Briefing_loop";
			WalkLF = "cooper_c0Briefing_loop";
			SlowF = "cooper_c0Briefing_loop";
			EvasiveForward = "cooper_c0Briefing_loop";
			WalkRF = "cooper_c0Briefing_loop";
			SlowRF = "cooper_c0Briefing_loop";
			SlowLF = "cooper_c0Briefing_loop";
			FastF = "cooper_c0Briefing_loop";
			FastLF = "cooper_c0Briefing_loop";
			FastRF = "cooper_c0Briefing_loop";
			Up = "cooper_c0Briefing_loop";
			Down = "cooper_c0Briefing_loop";
			PlayerStand = "cooper_c0Briefing_loop";
			PlayerCrouch = "cooper_c0Briefing_loop";
			PlayerProne = "cooper_c0Briefing_loop";
			Stand = "cooper_c0Briefing_loop";
			Salute = "cooper_c0Briefing_loop";
			saluteOff = "cooper_c0Briefing_loop";
			GetOver = "cooper_c0Briefing_loop";
		};
		
		class CivilSitActions_c0Briefing_ohara : CivilSitActions {
			Stop = "ohara_c0briefing_loop";
			StopRelaxed = "ohara_c0briefing_loop";
			Default = "ohara_c0briefing_loop";
		};
		
		class CivilSitActions_c0Briefing_rodriguez : CivilSitActions {
			Stop = "rodriguez_c0briefing_loop";
			StopRelaxed = "rodriguez_c0briefing_loop";
			Default = "rodriguez_c0briefing_loop";
		};
		
		class CivilSitActions_c0Briefing_sykes : CivilSitActions {
			Stop = "sykes_c0briefing_loop";
			StopRelaxed = "sykes_c0briefing_loop";
			Default = "sykes_c0briefing_loop";
		};
		
		class CivilSitActions_c0briefing_shaftoe_odpovedel : CivilSitActions {
			Stop = "shaftoe_c0briefing_odpovedel_loop";
			StopRelaxed = "shaftoe_c0briefing_odpovedel_loop";
			Default = "shaftoe_c0briefing_odpovedel_loop";
		};
		
		class CivilSitActions_c0briefing_miles_odpovedel : CivilSitActions {
			Stop = "miles_c0briefing_odpovedel_loop";
			StopRelaxed = "miles_c0briefing_odpovedel_loop";
			Default = "miles_c0briefing_odpovedel_loop";
		};
		
		class CivilSitActions_c0briefing_promitac_odpovedel : CivilSitActions {
			Stop = "promitac_c0briefing_odpovedel_loop";
			StopRelaxed = "promitac_c0briefing_odpovedel_loop";
			Default = "promitac_c0briefing_odpovedel_loop";
		};
		
		class CivilSitActions_SitInHigh : CivilSitActions {
			Stop = "SitInHigh";
			StopRelaxed = "SitInHigh";
			Default = "SitInHigh";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilSitActions_CivilSitting : CivilSitActions {
			Stop = "CivilSitting";
			StopRelaxed = "CivilSitting";
			Default = "CivilSitting";
			Salute = "";
			saluteOff = "";
			SitDown = "";
			Die = "c1galkina_svazanyMuzDeath";
		};
		
		class CivilSitActions_HonzaLoop : CivilSitActions {
			Stop = "c5efe_HonzaLoop";
			StopRelaxed = "c5efe_HonzaLoop";
			Default = "c5efe_HonzaLoop";
			Die = "c5efe_HonzaDeath";
		};
		
		class CivilSitActions_MichalLoop : CivilSitActions {
			Default = "c5efe_MichalLoop";
			Stop = "c5efe_MichalLoop";
			StopRelaxed = "c5efe_MichalLoop";
			Die = "c5efe_MichalDeath";
		};
		
		class CivilSitActions_ZbyshekLoop : CivilSitActions {
			Stop = "c5efe_ZbyshekLoop";
			StopRelaxed = "c5efe_ZbyshekLoop";
			Default = "c5efe_ZbyshekLoop";
			Die = "c5efe_ZbyshekDeath";
		};
		
		class CivilStandSurrenderActions : CivilStandActions {
			turnL = "";
			turnR = "";
			stop = "AmovPercMstpSsurWnonDnon";
			StopRelaxed = "AmovPercMstpSsurWnonDnon";
			default = "AmovPercMstpSsurWnonDnon";
		};
		
		class CivilKneelActions : CivilStandActions {
			stop = "AidlPknlMstpSnonWnonDnon_player";
			default = "AmovPknlMstpSnonWnonDnon";
			stopRelaxed = "AidlPknlMstpSnonWnonDnon";
			turnL = "AmovPknlMstpSnonWnonDnon_turnL";
			turnR = "AmovPknlMstpSnonWnonDnon_turnR";
			turnLRelaxed = "AmovPknlMstpSnonWnonDnon_turnL";
			turnRRelaxed = "AmovPknlMstpSnonWnonDnon_turnR";
			reloadMagazine = "AmovPknlMstpSnonWnonDnon";
			reloadMGun = "AmovPknlMstpSnonWnonDnon";
			walkF = "AmovPknlMwlkSnonWnonDf";
			walkLF = "AmovPknlMwlkSnonWnonDfl";
			walkRF = "AmovPknlMwlkSnonWnonDfr";
			walkL = "AmovPknlMwlkSnonWnonDl";
			walkR = "AmovPknlMwlkSnonWnonDr";
			walkLB = "AmovPknlMwlkSnonWnonDbl";
			walkRB = "AmovPknlMwlkSnonWnonDbr";
			walkB = "AmovPknlMwlkSnonWnonDb";
			slowF = "AmovPknlMrunSnonWnonDf";
			slowLF = "AmovPknlMrunSnonWnonDfl";
			slowRF = "AmovPknlMrunSnonWnonDfr";
			slowL = "AmovPknlMrunSnonWnonDl";
			slowR = "AmovPknlMrunSnonWnonDr";
			slowLB = "AmovPknlMrunSnonWnonDbl";
			slowRB = "AmovPknlMrunSnonWnonDbr";
			slowB = "AmovPknlMrunSnonWnonDb";
			fastF = "AmovPercMevaSnonWnonDf";
			fastLF = "AmovPercMevaSnonWnonDfl";
			fastRF = "AmovPercMevaSnonWnonDfr";
			fastL = "AmovPknlMrunSnonWnonDl";
			fastR = "AmovPknlMrunSnonWnonDr";
			fastLB = "AmovPknlMrunSnonWnonDbl";
			fastRB = "AmovPknlMrunSnonWnonDbr";
			fastB = "AmovPknlMrunSnonWnonDb";
			down = "AmovPpneMstpSnonWnonDnon";
			up = "AmovPercMstpSnonWnonDnon";
			die = "AdthPknlMstpSnonWnonDnon_1";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPknlMstpSnonWnonDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_non";
			binocOff = "AmovPknlMstpSnonWnonDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			takeFlag = "AinvPknlMstpSnonWnonDnon_4";
			putDown = "AinvPknlMstpSnonWnonDnon_4";
			Combat = "AmovPknlMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSnonWnonDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			CanNotMove = "AmovPknlMstpSnonWnonDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPknlMstpSnonWnonDnon";
			strokeFist = "";
			strokeGun = "AmovPknlMstpSnonWnonDnon";
			sitDown = "";
			salute = "";
			turnSpeed = 6;
			limitFast = 5.5;
			PlayerCrouch = "";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			ReloadAT = "AmovPknlMstpSnonWnonDnon";
			ReloadMortar = "AmovPknlMstpSnonWnonDnon";
		};
		
		class CivilKneelActions_gear : CivilKneelActions {
			Stop = "AmovPknlMstpSnonWnonDnon_gear";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AmovPknlMstpSnonWnonDnon_gear";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
		};
		
		class CivilKneelActionsRunF : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDf";
			Stand = "AmovPercMrunSnonWnonDf";
			Up = "AmovPercMrunSnonWnonDf";
		};
		
		class CivilKneelActionsRunFl : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDfl";
			Stand = "AmovPercMrunSnonWnonDfl";
			Up = "AmovPercMrunSnonWnonDfl";
		};
		
		class CivilKneelActionsRunL : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDl";
			Stand = "AmovPercMrunSnonWnonDl";
			Up = "AmovPercMrunSnonWnonDl";
		};
		
		class CivilKneelActionsRunBL : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDbl";
			Stand = "AmovPercMrunSnonWnonDbl";
			Up = "AmovPercMrunSnonWnonDbl";
		};
		
		class CivilKneelActionsRunB : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDb";
			Stand = "AmovPercMrunSnonWnonDb";
			Up = "AmovPercMrunSnonWnonDb";
		};
		
		class CivilKneelActionsRunBR : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDbr";
			Stand = "AmovPercMrunSnonWnonDbr";
			Up = "AmovPercMrunSnonWnonDbr";
		};
		
		class CivilKneelActionsRunR : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDr";
			Stand = "AmovPercMrunSnonWnonDr";
			Up = "AmovPercMrunSnonWnonDr";
		};
		
		class CivilKneelActionsRunFR : CivilKneelActions {
			PlayerStand = "AmovPercMrunSnonWnonDfr";
			Stand = "AmovPercMrunSnonWnonDfr";
			Up = "AmovPercMrunSnonWnonDfr";
		};
		
		class CivilKneelActionsWlkF : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDf";
			Stand = "AmovPercMwlkSnonWnonDf";
			Up = "AmovPercMwlkSnonWnonDf";
		};
		
		class CivilKneelActionsWlkFL : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDfl";
			Stand = "AmovPercMwlkSnonWnonDfl";
			Up = "AmovPercMwlkSnonWnonDfl";
		};
		
		class CivilKneelActionsWlkL : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDl";
			Stand = "AmovPercMwlkSnonWnonDl";
			Up = "AmovPercMwlkSnonWnonDl";
		};
		
		class CivilKneelActionsWlkBL : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDbl";
			Stand = "AmovPercMwlkSnonWnonDbl";
			Up = "AmovPercMwlkSnonWnonDbl";
		};
		
		class CivilKneelActionsWlkB : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDb";
			Stand = "AmovPercMwlkSnonWnonDb";
			Up = "AmovPercMwlkSnonWnonDb";
		};
		
		class CivilKneelActionsWlkBR : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDbr";
			Stand = "AmovPercMwlkSnonWnonDbr";
			Up = "AmovPercMwlkSnonWnonDbr";
		};
		
		class CivilKneelActionsWlkR : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDr";
			Stand = "AmovPercMwlkSnonWnonDr";
			Up = "AmovPercMwlkSnonWnonDr";
		};
		
		class CivilKneelActionsWlkFR : CivilKneelActionsRunF {
			PlayerStand = "AmovPercMwlkSnonWnonDfr";
			Stand = "AmovPercMwlkSnonWnonDfr";
			Up = "AmovPercMwlkSnonWnonDfr";
		};
		
		class CivilKneelActions_fixing : CivilKneelActions {
			Stop = "ActsPercSnonWnonDnon_carFixing2";
			StopRelaxed = "ActsPercSnonWnonDnon_carFixing2";
			Default = "ActsPercSnonWnonDnon_carFixing2";
		};
		
		class CivilKneelTakeActions : CivilKneelActions {
			stop = "AinvPknlMstpSnonWnonDnon_4";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_4";
			default = "AinvPknlMstpSnonWnonDnon_4";
			salute = "";
			sitDown = "";
			die = "AdthPknlMstpSnonWnonDnon_inventory";
		};
		
		class CivilKneelActions_RepairingKneel : CivilKneelActions {
			Stop = "RepairingKneel";
			StopRelaxed = "RepairingKneel";
			Default = "RepairingKneel";
			Salute = "";
			saluteOff = "";
		};
		
		class CivilKneelActions_crowdCheers : CivilKneelActions {
			Stop = "c7a_bravoKnl_idle";
			StopRelaxed = "c7a_bravoKnl_idle";
			Default = "c7a_bravoKnl_idle";
		};
		
		class CivilProneActions : CivilStandActions {
			stop = "AmovPpneMstpSnonWnonDnon";
			default = "AmovPpneMstpSnonWnonDnon";
			stopRelaxed = "AidlPpneMstpSnonWnonDnon01";
			turnL = "AmovPpneMstpSnonWnonDnon_turnL";
			turnR = "AmovPpneMstpSnonWnonDnon_turnR";
			turnLRelaxed = "AmovPpneMstpSnonWnonDnon_turnL";
			turnRRelaxed = "AmovPpneMstpSnonWnonDnon_turnR";
			reloadMagazine = "AmovPpneMstpSnonWnonDnon";
			reloadMGun = "AmovPpneMstpSnonWnonDnon";
			reloadMortar = "AmovPpneMstpSnonWnonDnon";
			throwGrenade = "AwopPpneMstpSgthWnonDnon_throw";
			walkF = "AmovPpneMrunSnonWnonDf";
			walkLF = "AmovPpneMrunSnonWnonDfl";
			walkRF = "AmovPpneMrunSnonWnonDfr";
			walkL = "AmovPpneMrunSnonWnonDl";
			walkR = "AmovPpneMrunSnonWnonDr";
			walkLB = "AmovPpneMrunSnonWnonDbl";
			walkRB = "AmovPpneMrunSnonWnonDbr";
			walkB = "AmovPpneMrunSnonWnonDb";
			slowF = "AmovPpneMrunSnonWnonDf";
			slowLF = "AmovPpneMrunSnonWnonDfl";
			slowRF = "AmovPpneMrunSnonWnonDfr";
			slowL = "AmovPpneMrunSnonWnonDl";
			slowR = "AmovPpneMrunSnonWnonDr";
			slowLB = "AmovPpneMrunSnonWnonDbl";
			slowRB = "AmovPpneMrunSnonWnonDbr";
			slowB = "AmovPpneMrunSnonWnonDb";
			fastF = "AmovPpneMrunSnonWnonDf";
			fastLF = "AmovPpneMrunSnonWnonDfl";
			fastRF = "AmovPpneMrunSnonWnonDfr";
			fastL = "AmovPpneMrunSnonWnonDl";
			fastR = "AmovPpneMrunSnonWnonDr";
			fastLB = "AmovPpneMrunSnonWnonDbl";
			fastRB = "AmovPpneMrunSnonWnonDbr";
			fastB = "AmovPpneMrunSnonWnonDb";
			EvasiveLeft = "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl";
			EvasiveRight = "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr";
			down = "AmovPercMstpSnonWnonDnon";
			up = "AmovPknlMstpSnonWnonDnon";
			die = "AdthPpneMstpSnonWnonDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPpneMstpSnonWnonDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_non";
			binocOff = "AmovPpneMstpSnonWnonDnon";
			handGunOn = "AmovPpneMstpSrasWpstDnon";
			takeFlag = "AmovPpneMstpSnonWnonDnon";
			putDown = "AmovPpneMstpSnonWnonDnon";
			treated = "AmovPpneMstpSnonWnonDnon_healed";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon";
			Stand = "AmovPercMstpSnonWnonDnon";
			Crouch = "AmovPpneMstpSnonWnonDnon";
			CanNotMove = "AmovPpneMstpSnonWnonDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			FireNotPossible = "AmovPpneMstpSnonWnonDnon";
			strokeFist = "";
			strokeGun = "AmovPpneMstpSnonWnonDnon";
			sitDown = "";
			salute = "";
			turnSpeed = 4;
			limitFast = 5.5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			upDegree = "ManPosLyingNoWeapon";
			diary = "";
			EvasiveForward = "AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2";
			GetOver = "";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
		};
		
		class CivilProneActions_fixing : CivilProneActions {
			Stop = "ActsPercSnonWnonDnon_carFixing";
			StopRelaxed = "ActsPercSnonWnonDnon_carFixing";
			Default = "ActsPercSnonWnonDnon_carFixing";
		};
		
		class LauncherKneelActions : NoActions {
			leanRRot = 0.5;
			leanRShift = 0.01;
			leanLRot = 0.5;
			leanLShift = 0.01;
			stop = "AmovPknlMstpSrasWlnrDnon";
			default = "AmovPknlMstpSrasWlnrDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
			weaponOff = "AmovPknlMstpSrasWrflDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_lnr";
			binocOff = "AmovPknlMstpSrasWlnrDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			down = "AmovPpneMstpSnonWnonDnon";
			reloadMagazine[] = {"LauncherMagazineReloadStand", "gesture"};
			reloadAT[] = {"LauncherMagazineReloadStand", "Gesture"};
			up = "AmovPercMstpSnonWnonDnon";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			PlayerCrouch = "AmovPknlMstpSrasWlnrDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon";
			Stand = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			die = "AdthPknlMwlkSrasWlnrDf_1";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			walkF = "AmovPknlMwlkSrasWlnrDf";
			walkLF = "AmovPknlMwlkSrasWlnrDfl";
			walkRF = "AmovPknlMwlkSrasWlnrDfr";
			walkL = "AmovPknlMwlkSrasWlnrDl";
			walkR = "AmovPknlMwlkSrasWlnrDr";
			walkLB = "AmovPknlMwlkSrasWlnrDbl";
			walkRB = "AmovPknlMwlkSrasWlnrDbr";
			walkB = "AmovPknlMwlkSrasWlnrDb";
			slowF = "AmovPknlMrunSrasWlnrDf";
			slowLF = "AmovPknlMrunSrasWlnrDfl";
			slowRF = "AmovPknlMrunSrasWlnrDfr";
			slowL = "AmovPknlMrunSrasWlnrDl";
			slowR = "AmovPknlMrunSrasWlnrDr";
			slowLB = "AmovPknlMrunSrasWlnrDbl";
			slowRB = "AmovPknlMrunSrasWlnrDbr";
			slowB = "AmovPknlMrunSrasWlnrDb";
			fastF = "AmovPercMevaSlowWlnrDf";
			fastLF = "AmovPercMevaSlowWlnrDfl";
			fastRF = "AmovPercMevaSlowWlnrDfr";
			fastL = "AmovPknlMrunSrasWlnrDl";
			fastR = "AmovPknlMrunSrasWlnrDr";
			fastLB = "AmovPknlMrunSrasWlnrDbl";
			fastRB = "AmovPknlMrunSrasWlnrDbr";
			fastB = "AmovPknlMrunSrasWlnrDb";
			EvasiveForward = "AmovPercMevaSlowWlnrDf";
			turnL = "AmovPknlMstpSrasWlnrDnon_turnL";
			turnR = "AmovPknlMstpSrasWlnrDnon_turnR";
			turnLRelaxed = "AmovPknlMstpSrasWlnrDnon_turnL";
			turnRRelaxed = "AmovPknlMstpSrasWlnrDnon_turnR";
			getInCar = "AmovPknlMstpSrasWrflDnon";
			getOutCar = "AmovPknlMstpSrasWrflDnon";
			getInTank = "AmovPknlMstpSrasWrflDnon";
			getOutTank = "AmovPknlMstpSrasWrflDnon";
			upDegree = "ManPosWeapon";
			treated = "AinvPknlMstpSnonWnonDnon_healed_2";
			turnSpeed = 6;
			StartSwim = "AswmPercMrunSnonWnonDf";
			EvasiveLeft = "AmovPercMevaSlowWlnrDfl";
			EvasiveRight = "AmovPercMevaSlowWlnrDfr";
			diary = "AmovPknlMstpSrasWlnrDnon";
			Surrender = "AmovPercMstpSsurWnonDnon";
			PutDown = "AinvPknlMstpSnonWnonDnon_2";
			Medic = "AinvPknlMstpSnonWnonDnon_medic_2";
		};
		
		class CivilProneActions_sleep : CivilStandActions {
			Stop = "AidlPpneMstpSnonWnonDnon_SleepA_sleepS";
			StopRelaxed = "AidlPpneMstpSnonWnonDnon_SleepA_sleepS";
			Default = "AidlPpneMstpSnonWnonDnon_SleepA_sleepS";
			Die = "AidlPpneMstpSnonWnonDnon_SleepA_death";
		};
		
		class CivilProneActions_sleepB : CivilProneActions {
			Stop = "AidlPpneMstpSnonWnonDnon_SleepB_sleep1";
			StopRelaxed = "AidlPpneMstpSnonWnonDnon_SleepB_sleep1";
			Default = "AidlPpneMstpSnonWnonDnon_SleepB_sleep1";
		};
		
		class CivilProneActions_talk01 : CivilProneActions {
			Stop = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
			StopRelaxed = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
			Default = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
			Die = "AidlPpneMstpSnonWnonDnon_SleepC_death";
			Down = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
			Up = "";
			saluteOff = "";
			Stand = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
			Civil = "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
		};
		
		class LauncherKneelStpActions : LauncherKneelActions {
			die = "AdthPknlMstpSrasWlnrDnon_1";
			Up = "amovpercmstpsraswlnrdnon";
			PlayerStand = "amovpercmstpsraswlnrdnon";
			Stand = "amovpercmstpsraswlnrdnon";
			Combat = "AmovPercMstpSrasWlnrDnon";
			Crouch = "AmovPknlMstpSrasWlnrDnon";
			StopRelaxed = "AidlPknlMstpSrasWlnrDnon0S";
			diary = "AmovPknlMstpSrasWlnrDnon";
			PlayerCrouch = "";
			Stop = "AidlPknlMstpSrasWlnrDnon_player_0S";
		};
		
		class LauncherKneelStpActionsRunF : LauncherKneelStpActions {
			PlayerStand = "amovpercmrunsraswlnrdf";
			Stand = "amovpercmrunsraswlnrdf";
			Up = "amovpercmrunsraswlnrdf";
		};
		
		class LauncherKneelStpActionsRunFL : LauncherKneelStpActionsRunF {
			Up = "amovpercmrunsraswlnrdfl";
			PlayerStand = "amovpercmrunsraswlnrdfl";
			Stand = "amovpercmrunsraswlnrdfl";
		};
		
		class LauncherKneelStpActionsRunL : LauncherKneelStpActionsRunF {
			Up = "amovpercmrunsraswlnrdl";
			PlayerStand = "amovpercmrunsraswlnrdl";
			Stand = "amovpercmrunsraswlnrdl";
		};
		
		class LauncherKneelStpActionsRunBL : LauncherKneelStpActionsRunF {
			PlayerStand = "amovpercmrunsraswlnrdbl";
			Up = "amovpercmrunsraswlnrdbl";
			Stand = "amovpercmrunsraswlnrdbl";
		};
		
		class LauncherKneelStpActionsRunB : LauncherKneelStpActionsRunF {
			PlayerStand = "amovpercmrunsraswlnrdb";
			Up = "amovpercmrunsraswlnrdb";
			Stand = "amovpercmrunsraswlnrdb";
		};
		
		class LauncherKneelStpActionsRunBR : LauncherKneelStpActionsRunF {
			Stand = "amovpercmrunsraswlnrdbr";
			PlayerStand = "amovpercmrunsraswlnrdbr";
			Up = "amovpercmrunsraswlnrdbr";
		};
		
		class LauncherKneelStpActionsRunR : LauncherKneelStpActionsRunF {
			Up = "amovpercmrunsraswlnrdr";
			PlayerStand = "amovpercmrunsraswlnrdr";
			Stand = "amovpercmrunsraswlnrdr";
		};
		
		class LauncherKneelStpActionsRunFR : LauncherKneelStpActionsRunF {
			PlayerStand = "amovpercmrunsraswlnrdfr";
			Up = "amovpercmrunsraswlnrdfr";
			Stand = "amovpercmrunsraswlnrdfr";
		};
		
		class LauncherKneelActionsWlkF : LauncherKneelStpActions {
			PlayerStand = "amovpercmwlksraswlnrdf";
			Stand = "amovpercmwlksraswlnrdf";
			Up = "amovpercmwlksraswlnrdf";
		};
		
		class LauncherKneelActionsWlkFL : LauncherKneelActionsWlkF {
			PlayerStand = "amovpercmwlksraswlnrdfl";
			Up = "amovpercmwlksraswlnrdfl";
			Stand = "amovpercmwlksraswlnrdfl";
		};
		
		class LauncherKneelActionsWlkL : LauncherKneelActionsWlkF {
			Stand = "amovpercmwlksraswlnrdl";
			PlayerStand = "amovpercmwlksraswlnrdl";
			Up = "amovpercmwlksraswlnrdl";
		};
		
		class LauncherKneelActionsWlkBL : LauncherKneelActionsWlkF {
			PlayerStand = "amovpercmwlksraswlnrdbl";
			Up = "amovpercmwlksraswlnrdbl";
			Stand = "amovpercmwlksraswlnrdbl";
		};
		
		class LauncherKneelActionsWlkB : LauncherKneelActionsWlkF {
			PlayerStand = "amovpercmwlksraswlnrdb";
			Up = "amovpercmwlksraswlnrdb";
			Stand = "amovpercmwlksraswlnrdb";
		};
		
		class LauncherKneelActionsWlkBR : LauncherKneelActionsWlkF {
			Stand = "amovpercmwlksraswlnrdbr";
			PlayerStand = "amovpercmwlksraswlnrdbr";
			Up = "amovpercmwlksraswlnrdbr";
		};
		
		class LauncherKneelActionsWlkR : LauncherKneelActionsWlkF {
			Stand = "amovpercmwlksraswlnrdr";
			PlayerStand = "amovpercmwlksraswlnrdr";
			Up = "amovpercmwlksraswlnrdr";
		};
		
		class LauncherKneelActionsWlkFR : LauncherKneelActionsWlkF {
			PlayerStand = "amovpercmwlksraswlnrdfr";
			Up = "amovpercmwlksraswlnrdfr";
			Stand = "amovpercmwlksraswlnrdfr";
		};
		
		class LauncherKneelRunFActions : LauncherKneelStpActions {
			Die = "AdthPercMrunSlowWlnrDf_1";
		};
		
		class LauncherKneelRunBActions : LauncherKneelRunFActions {
			Die = "AdthPercMrunSlowWlnrDb_1";
		};
		
		class LauncherStandStpActions : LauncherKneelActions {
			die = "DeadState";
			PlayerStand = "";
			PlayerCrouch = "AmovPknlMstpSrasWlnrDnon";
			StopRelaxed = "AidlPercMstpSrasWlnrDnon_S0";
			Default = "AmovPercMstpSrasWlnrDnon";
			Combat = "AmovPercMstpSrasWlnrDnon";
			Stand = "AmovPercMstpSrasWlnrDnon";
			Up = "AmovPknlMstpSrasWlnrDnon";
			TurnL = "amovpercmstpsraswlnrdnon_turnl";
			TurnLRelaxed = "amovpercmstpsraswlnrdnon_turnl";
			TurnR = "amovpercmstpSraswlnrdnon_turnr";
			TurnRRelaxed = "amovpercmstpSraswlnrdnon_turnr";
			Stop = "AidlPercMstpSrasWlnrDnon_player_S0";
			WalkB = "AmovPercMwlkSrasWlnrDb";
			WalkRB = "AmovPercMwlkSrasWlnrDbr";
			WalkLB = "AmovPercMwlkSrasWlnrDbl";
			WalkR = "AmovPercMwlkSrasWlnrDr";
			WalkL = "AmovPercMwlkSrasWlnrDl";
			WalkRF = "AmovPercMwlkSrasWlnrDfr";
			WalkLF = "AmovPercMwlkSrasWlnrDfl";
			WalkF = "AmovPercMwlkSrasWlnrDf";
			WeaponOff = "AmovPercMstpSrasWrflDnon";
			WeaponOn = "AmovPercMstpSrasWlnrDnon";
			BinocOff = "AmovPercMstpSrasWlnrDnon";
			Crouch = "AmovPknlMstpSrasWlnrDnon";
			EvasiveLeft = "AmovPercMrunSrasWlnrDfl";
			EvasiveRight = "AmovPercMrunSrasWlnrDfr";
			BinocOn = "AwopPercMstpSoptWbinDnon_lnr";
			HandGunOn = "AmovPercMstpSrasWpstDnon";
			SlowF = "AmovPercMrunSrasWlnrDf";
			SlowLF = "AmovPercMrunSrasWlnrDfl";
			SlowRF = "AmovPercMrunSrasWlnrDfr";
			SlowL = "AmovPercMrunSrasWlnrDl";
			SlowR = "AmovPercMrunSrasWlnrDr";
			SlowLB = "AmovPercMrunSrasWlnrDbl";
			SlowRB = "AmovPercMrunSrasWlnrDbr";
			SlowB = "AmovPercMrunSrasWlnrDb";
			FastF = "AmovPercMrunSrasWlnrDf";
			FastLF = "AmovPercMrunSrasWlnrDfl";
			FastRF = "AmovPercMrunSrasWlnrDfr";
			FastL = "AmovPercMrunSrasWlnrDl";
			FastR = "AmovPercMrunSrasWlnrDr";
			FastLB = "AmovPercMrunSrasWlnrDbl";
			FastRB = "AmovPercMrunSrasWlnrDr";
			FastB = "AmovPercMrunSrasWlnrDb";
			GetOver = "AovrPercMstpSrasWlnrDf";
			EvasiveForward = "AmovPercMrunSrasWlnrDf";
		};
		
		class LauncherStandStpActionsRunF : LauncherStandStpActions {
			Crouch = "AmovPknlMrunSrasWlnrDf";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDf";
			Up = "AmovPknlMrunSrasWlnrDf";
		};
		
		class LauncherStandStpActionsRunFL : LauncherStandStpActionsRunF {
			PlayerCrouch = "AmovPknlMrunSrasWlnrDfl";
			Up = "AmovPknlMrunSrasWlnrDfl";
			Crouch = "AmovPknlMrunSrasWlnrDfl";
		};
		
		class LauncherStandStpActionsRunL : LauncherStandStpActionsRunF {
			PlayerCrouch = "AmovPknlMrunSrasWlnrDl";
			Up = "AmovPknlMrunSrasWlnrDl";
			Crouch = "AmovPknlMrunSrasWlnrDl";
		};
		
		class LauncherStandStpActionsRunBL : LauncherStandStpActionsRunF {
			PlayerCrouch = "AmovPknlMrunSrasWlnrDbl";
			Up = "AmovPknlMrunSrasWlnrDbl";
			Crouch = "AmovPknlMrunSrasWlnrDbl";
		};
		
		class LauncherStandStpActionsRunB : LauncherStandStpActionsRunF {
			Up = "AmovPknlMrunSrasWlnrDb";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDb";
			Crouch = "AmovPknlMrunSrasWlnrDb";
		};
		
		class LauncherStandStpActionsRunBR : LauncherStandStpActionsRunF {
			Up = "AmovPknlMrunSrasWlnrDbr";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDbr";
			Crouch = "AmovPknlMrunSrasWlnrDbr";
		};
		
		class LauncherStandStpActionsRunR : LauncherStandStpActionsRunF {
			Crouch = "AmovPknlMrunSrasWlnrDr";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDr";
			Up = "AmovPknlMrunSrasWlnrDr";
		};
		
		class LauncherStandStpActionsRunFR : LauncherStandStpActionsRunF {
			PlayerCrouch = "AmovPknlMrunSrasWlnrDfr";
			Up = "AmovPknlMrunSrasWlnrDfr";
			Crouch = "AmovPknlMrunSrasWlnrDfr";
		};
		
		class LauncherStandStpActionsWlkF : LauncherStandStpActions {
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDf";
			Crouch = "AmovPknlMwlkSrasWlnrDf";
			Up = "AmovPknlMwlkSrasWlnrDf";
		};
		
		class LauncherStandStpActionsWlkFL : LauncherStandStpActionsWlkF {
			Up = "AmovPknlMwlkSrasWlnrDfl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDfl";
			Crouch = "AmovPknlMwlkSrasWlnrDfl";
		};
		
		class LauncherStandStpActionsWlkL : LauncherStandStpActionsWlkF {
			Up = "AmovPknlMwlkSrasWlnrDl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDl";
			Crouch = "AmovPknlMwlkSrasWlnrDl";
		};
		
		class LauncherStandStpActionsWlkBL : LauncherStandStpActionsWlkF {
			Crouch = "AmovPknlMwlkSrasWlnrDbl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDbl";
			Up = "AmovPknlMwlkSrasWlnrDbl";
		};
		
		class LauncherStandStpActionsWlkB : LauncherStandStpActionsWlkF {
			Crouch = "AmovPknlMwlkSrasWlnrDb";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDb";
			Up = "AmovPknlMwlkSrasWlnrDb";
		};
		
		class LauncherStandStpActionsWlkBR : LauncherStandStpActionsWlkF {
			Crouch = "AmovPknlMwlkSrasWlnrDbr";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDbr";
			Up = "AmovPknlMwlkSrasWlnrDbr";
		};
		
		class LauncherStandStpActionsWlkR : LauncherStandStpActionsWlkF {
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDr";
			Up = "AmovPknlMwlkSrasWlnrDr";
			Crouch = "AmovPknlMwlkSrasWlnrDr";
		};
		
		class LauncherStandStpActionsWlkFR : LauncherStandStpActionsWlkF {
			Crouch = "AmovPknlMwlkSrasWlnrDfr";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDfr";
			Up = "AmovPknlMwlkSrasWlnrDfr";
		};
		
		class BinocStandLnrActions : LauncherStandStpActions {
			upDegree = "ManPosBinocStand";
			Stop = "AwopPercMstpSoptWbinDnon_lnr";
			StopRelaxed = "AwopPercMstpSoptWbinDnon_lnr";
			Default = "AwopPercMstpSoptWbinDnon_lnr";
			BinocOff = "amovpercmstpsraswlnrdnon";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_lnr";
			TurnL = "AwoppercMstpSoptWbinDnon_lnr_turnL";
			TurnR = "AwoppercMstpSoptWbinDnon_lnr_turnR";
			TurnLRelaxed = "AwoppercMstpSoptWbinDnon_lnr_turnL";
			TurnRRelaxed = "AwoppercMstpSoptWbinDnon_lnr_turnR";
			WalkF = "AmovpercMwlkSoptWbinDf_lnr";
			WalkLF = "AmovpercMwlkSoptWbinDfl_lnr";
			WalkRF = "AmovpercMwlkSoptWbinDfr_lnr";
			WalkL = "AmovpercMwlkSoptWbinDl_lnr";
			WalkR = "AmovpercMwlkSoptWbinDr_lnr";
			WalkLB = "AmovpercMwlkSoptWbinDbl_lnr";
			WalkRB = "AmovpercMwlkSoptWbinDbr_lnr";
			WalkB = "AmovpercMwlkSoptWbinDb_lnr";
			SlowF = "AmovpercMrunSnonWbinDf_lnr";
			SlowLF = "AmovpercMrunSnonWbinDfl_lnr";
			SlowRF = "AmovpercMrunSnonWbinDfr_lnr";
			SlowL = "AmovpercMrunSnonWbinDl_lnr";
			SlowR = "AmovpercMrunSnonWbinDr_lnr";
			SlowLB = "AmovpercMrunSnonWbinDbl_lnr";
			SlowRB = "AmovpercMrunSnonWbinDbr_lnr";
			SlowB = "AmovpercMrunSnonWbinDb_lnr";
			FastF = "AmovpercMrunSnonWbinDf_lnr";
			FastLF = "AmovpercMrunSnonWbinDfl_lnr";
			FastRF = "AmovpercMrunSnonWbinDfr_lnr";
			FastL = "AmovpercMrunSnonWbinDl_lnr";
			FastR = "AmovpercMrunSnonWbinDr_lnr";
			FastLB = "AmovpercMrunSnonWbinDbl_lnr";
			FastRB = "AmovpercMrunSnonWbinDbr_lnr";
			FastB = "AmovpercMrunSnonWbinDb_lnr";
			EvasiveForward = "AmovpercMrunSnonWbinDf_lnr";
			EvasiveRight = "";
			EvasiveLeft = "";
			GetOver = "";
		};
		
		class LauncherStandLowStpActions : LauncherStandStpActions {
			Stop = "amovpercmstpslowwlnrdnon";
			TurnL = "amovpercmstpslowwlnrdnon_turnl";
			TurnR = "amovpercmstpSlowwlnrdnon_turnr";
			TurnLRelaxed = "amovpercmstpslowwlnrdnon_turnl";
			TurnRRelaxed = "amovpercmstpSlowwlnrdnon_turnr";
			WalkF = "AmovPercMwlkSlowWlnrDf";
			WalkLF = "AmovPercMwlkSlowWlnrDfl";
			WalkRF = "AmovPercMwlkSlowWlnrDfr";
			WalkL = "AmovPercMwlkSlowWlnrDl";
			WalkR = "AmovPercMwlkSlowWlnrDr";
			WalkLB = "AmovPercMwlkSlowWlnrDbl";
			WalkRB = "AmovPercMwlkSlowWlnrDbr";
			WalkB = "AmovPercMwlkSlowWlnrDb";
			PlayerStand = "amovpercmstpsraswlnrdnon";
			FireNotPossible = "amovpercmstpsraswlnrdnon";
			SlowF = "AmovPercMwlkSlowWlnrDf";
			SlowLF = "AmovPercMwlkSlowWlnrDfl";
			SlowRF = "AmovPercMwlkSlowWlnrDfr";
			SlowL = "AmovPercMwlkSlowWlnrDl";
			SlowR = "AmovPercMwlkSlowWlnrDr";
			SlowLB = "AmovPercMwlkSlowWlnrDbl";
			SlowRB = "AmovPercMwlkSlowWlnrDbr";
			SlowB = "AmovPercMwlkSlowWlnrDb";
			FastL = "AmovPercMwlkSlowWlnrDl";
			FastR = "AmovPercMwlkSlowWlnrDr";
			FastLB = "AmovPercMwlkSlowWlnrDbl";
			FastRB = "AmovPercMwlkSlowWlnrDbr";
			FastB = "AmovPercMwlkSlowWlnrDb";
			EvasiveForward = "AmovPercMwlkSlowWlnrDf";
			EvasiveLeft = "AmovPercMwlkSlowWlnrDfl";
			EvasiveRight = "AmovPercMwlkSlowWlnrDfr";
			GetOver = "AovrPercMstpSlowWlnrDf";
			FastF = "AmovPercMrunSlowWlnrDf";
			FastLF = "AmovPercMrunSlowWlnrDfl";
			FastRF = "AmovPercMrunSlowWlnrDfr";
		};
		
		class LauncherStandRunFActions : LauncherStandStpActions {
			die = "AdthPercMrunSlowWlnrDf_1";
		};
		
		class LauncherStandRunBActions : LauncherStandStpActions {
			die = "AdthPercMrunSlowWlnrDb_1";
		};
		
		class LauncherKneelEvasiveFActions : LauncherStandRunFActions {
			walkF = "AmovPercMevaSlowWlnrDf";
			slowF = "AmovPercMevaSlowWlnrDf";
			fastF = "AmovPercMevaSlowWlnrDf";
			FastLF = "AmovPercMevaSlowWlnrDfl";
			FastRF = "AmovPercMevaSlowWlnrDfr";
			SlowLF = "AmovPercMevaSlowWlnrDfl";
			SlowRF = "AmovPercMevaSlowWlnrDfr";
			WalkLF = "AmovPercMevaSlowWlnrDfl";
			WalkRF = "AmovPercMevaSlowWlnrDfr";
		};
		
		class LadderCivilActions : NoActions {
			stop = "LadderCivilStatic";
			default = "LadderCivilStatic";
			ladderOff = "AmovPercMstpSnonWnonDnon";
			ladderOffTop = "LadderCivilTopOff";
			ladderOffBottom = "LadderCivilDownOff";
			down = "LadderCivilDownLoop";
			up = "LadderCivilUpLoop";
			die = "AdthPercMstpSnonWnonDnon_1";
			turnSpeed = 0.1;
		};
		
		class LadderRifleActions : LadderCivilActions {
			stop = "LadderRifleStatic";
			default = "LadderRifleStatic";
			ladderOff = "AmovPercMstpSlowWrflDnon";
			ladderOffTop = "LadderRifleTopOff";
			ladderOffBottom = "LadderRifleDownOff";
			ladderOnDown = "LadderRifleOn";
			ladderOnUp = "LadderRifleOn";
			down = "LadderRifleDownLoop";
			up = "LadderRifleUpLoop";
			die = "AdthPercMstpSlowWrflDnon_1";
		};
		
		class SwimmingActions : NoActions {
			stop = "AswmPercMstpSnonWnonDnon";
			default = "AswmPercMstpSnonWnonDnon";
			stopRelaxed = "AswmPercMstpSnonWnonDnon";
			turnL = "AswmPercMstpSnonWnonDnon";
			turnR = "AswmPercMstpSnonWnonDnon";
			die = "AdthPswmMstpSnonWnonDnon";
			EvasiveForward = "AswmPercMsprSnonWnonDf";
			walkF = "AswmPercMwlkSnonWnonDf";
			walkLF = "AswmPercMwlkSnonWnonDf";
			walkRF = "AswmPercMwlkSnonWnonDf";
			walkL = "AswmPercMstpSnonWnonDnon";
			walkR = "AswmPercMstpSnonWnonDnon";
			walkLB = "AswmPercMstpSnonWnonDnon";
			walkRB = "AswmPercMstpSnonWnonDnon";
			walkB = "AswmPercMstpSnonWnonDnon";
			slowF = "AswmPercMrunSnonWnonDf";
			slowLF = "AswmPercMrunSnonWnonDf";
			slowRF = "AswmPercMrunSnonWnonDf";
			slowL = "AswmPercMstpSnonWnonDnon";
			slowR = "AswmPercMstpSnonWnonDnon";
			slowLB = "AswmPercMstpSnonWnonDnon";
			slowRB = "AswmPercMstpSnonWnonDnon";
			slowB = "AswmPercMstpSnonWnonDnon";
			fastF = "AswmPercMsprSnonWnonDf";
			fastLF = "AswmPercMsprSnonWnonDf";
			fastRF = "AswmPercMsprSnonWnonDf";
			fastL = "AswmPercMstpSnonWnonDnon";
			fastR = "AswmPercMstpSnonWnonDnon";
			fastLB = "AswmPercMstpSnonWnonDnon";
			fastRB = "AswmPercMstpSnonWnonDnon";
			fastB = "AswmPercMstpSnonWnonDnon";
			stopSwim = "AmovPercMstpSnonWnonDnon";
			upDegree = "ManPosSwimming";
			turnSpeed = 1;
			limitFast = 2;
		};
		
		class SwimmForwardActions : SwimmingActions {
			die = "AdthPswmMrunSnonWnonDf";
		};
		
		class SwimmingFastActions : SwimmForwardActions {
			limitFast = 4;
		};
		
		class BinocStandRflActions : RifleStandActions {
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			stop = "AwopPercMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_rfl";
			default = "AwopPercMstpSoptWbinDnon_rfl";
			binocOff = "AmovPercMstpSrasWrflDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			die = "AdthPercMstpSlowWrflDnon_binocular";
			upDegree = "ManPosBinocStand";
			TurnL = "AwopPercMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPercMstpSoptWbinDnon_rfl_turnR";
			TurnLRelaxed = "AwopPercMstpSoptWbinDnon_rfl_turnL";
			TurnRRelaxed = "AwopPercMstpSoptWbinDnon_rfl_turnR";
			WalkF = "AmovPercMwlkSoptWbinDf_rfl";
			WalkLF = "AmovPercMwlkSoptWbinDfl_rfl";
			WalkRF = "AmovPercMwlkSoptWbinDfr_rfl";
			WalkL = "AmovPercMwlkSoptWbinDl_rfl";
			WalkR = "AmovPercMwlkSoptWbinDr_rfl";
			WalkLB = "AmovPercMwlkSoptWbinDbl_rfl";
			WalkRB = "AmovPercMwlkSoptWbinDbr_rfl";
			WalkB = "AmovPercMwlkSoptWbinDb_rfl";
			SlowF = "AmovPercMrunSnonWbinDf_rfl";
			SlowLF = "AmovPercMrunSnonWbinDfl_rfl";
			SlowRF = "AmovPercMrunSnonWbinDfr_rfl";
			SlowL = "AmovPercMrunSnonWbinDl_rfl";
			SlowR = "AmovPercMrunSnonWbinDr_rfl";
			SlowLB = "AmovPercMrunSnonWbinDbl_rfl";
			SlowRB = "AmovPercMrunSnonWbinDbr_rfl";
			SlowB = "AmovPercMrunSnonWbinDb_rfl";
			FastF = "AmovPercMrunSnonWbinDf_rfl";
			FastLF = "AmovPercMrunSnonWbinDfl_rfl";
			FastRF = "AmovPercMrunSnonWbinDfr_rfl";
			FastL = "AmovPercMrunSnonWbinDl_rfl";
			FastR = "AmovPercMrunSnonWbinDr_rfl";
			FastLB = "AmovPercMrunSnonWbinDbl_rfl";
			FastRB = "AmovPercMrunSnonWbinDbr_rfl";
			FastB = "AmovPercMrunSnonWbinDb_rfl";
			EvasiveForward = "AmovPercMrunSnonWbinDf_rfl";
			EvasiveBack = "";
			EvasiveRight = "";
			diary = "";
			Gear = "";
			GetOver = "";
		};
		
		class BinocKneelRflActions : RifleKneelActions {
			stop = "AwopPknlMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_rfl";
			default = "AwopPknlMstpSoptWbinDnon_rfl";
			binocOff = "AmovPknlMstpSrasWrflDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			die = "AdthPknlMstpSlowWrflDnon_binocular";
			upDegree = "ManPosBinoc";
			TurnL = "AwopPknlMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPknlMstpSoptWbinDnon_rfl_turnR";
			TurnLRelaxed = "AwopPknlMstpSoptWbinDnon_rfl_turnL";
			TurnRRelaxed = "AwopPknlMstpSoptWbinDnon_rfl_turnR";
			WalkF = "AmovPknlMwlkSoptWbinDf_rfl";
			WalkLF = "AmovPknlMwlkSoptWbinDfl_rfl";
			WalkRF = "AmovPknlMwlkSoptWbinDfr_rfl";
			WalkL = "AmovPknlMwlkSoptWbinDl_rfl";
			WalkR = "AmovPknlMwlkSoptWbinDr_rfl";
			WalkLB = "AmovPknlMwlkSoptWbinDbl_rfl";
			WalkRB = "AmovPknlMwlkSoptWbinDbr_rfl";
			WalkB = "AmovPknlMwlkSoptWbinDb_rfl";
			SlowF = "AmovPknlMrunSnonWbinDf_rfl";
			SlowLF = "AmovPknlMrunSnonWbinDfl_rfl";
			SlowRF = "AmovPknlMrunSnonWbinDfr_rfl";
			SlowL = "AmovPknlMrunSnonWbinDl_rfl";
			SlowR = "AmovPknlMrunSnonWbinDr_rfl";
			SlowLB = "AmovPknlMrunSnonWbinDbl_rfl";
			SlowRB = "AmovPknlMrunSnonWbinDbr_rfl";
			SlowB = "AmovPknlMrunSnonWbinDb_rfl";
			FastF = "AmovPknlMrunSnonWbinDf_rfl";
			FastLF = "AmovPknlMrunSnonWbinDfl_rfl";
			FastRF = "AmovPknlMrunSnonWbinDfr_rfl";
			FastL = "AmovPknlMrunSnonWbinDl_rfl";
			FastR = "AmovPknlMrunSnonWbinDr_rfl";
			FastLB = "AmovPknlMrunSnonWbinDbl_rfl";
			FastRB = "AmovPknlMrunSnonWbinDbr_rfl";
			FastB = "AmovPknlMrunSnonWbinDb_rfl";
			EvasiveForward = "AmovPknlMrunSnonWbinDf_rfl";
			EvasiveRight = "";
			EvasiveBack = "";
			EvasiveLeft = "";
			diary = "";
			Gear = "";
		};
		
		class BinocProneRflActions : RifleProneActions {
			stop = "AwopPpneMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_rfl";
			default = "AwopPpneMstpSoptWbinDnon_rfl";
			binocOff = "AmovPpneMstpSrasWrflDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			die = "AdthPpneMstpSlowWrflDnon_binocular";
			upDegree = "ManPosBinocLying";
			TurnL = "AwopPpneMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_rfl_turnR";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_rfl_turnL";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_rfl_turnR";
			WalkF = "AmovPpneMwlkSoptWbinDf_rfl";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_rfl";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_rfl";
			WalkL = "AmovPpneMwlkSoptWbinDl_rfl";
			WalkR = "AmovPpneMwlkSoptWbinDr_rfl";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_rfl";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_rfl";
			WalkB = "AmovPpneMwlkSoptWbinDb_rfl";
			SlowF = "AmovPpneMrunSnonWbinDf_rfl";
			SlowLF = "AmovPpneMrunSnonWbinDfl_rfl";
			SlowRF = "AmovPpneMrunSnonWbinDfr_rfl";
			SlowL = "AmovPpneMrunSnonWbinDl_rfl";
			SlowR = "AmovPpneMrunSnonWbinDr_rfl";
			SlowLB = "AmovPpneMrunSnonWbinDbl_rfl";
			SlowRB = "AmovPpneMrunSnonWbinDbr_rfl";
			SlowB = "AmovPpneMrunSnonWbinDb_rfl";
			FastF = "AmovPpneMrunSnonWbinDf_rfl";
			FastLF = "AmovPpneMrunSnonWbinDfl_rfl";
			FastRF = "AmovPpneMrunSnonWbinDfr_rfl";
			FastL = "AmovPpneMrunSnonWbinDl_rfl";
			FastR = "AmovPpneMrunSnonWbinDr_rfl";
			FastLB = "AmovPpneMrunSnonWbinDbl_rfl";
			FastRB = "AmovPpneMrunSnonWbinDbr_rfl";
			FastB = "AmovPpneMrunSnonWbinDb_rfl";
			EvasiveForward = "AmovPpneMrunSnonWbinDf_rfl";
			EvasiveBack = "";
			EvasiveRight = "";
			EvasiveLeft = "";
			diary = "";
		};
		
		class BinocStandPstActions : PistolStandActions {
			stop = "AwopPercMstpSoptWbinDnon_pst";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_pst";
			default = "AwopPercMstpSoptWbinDnon_pst";
			binocOff = "AmovPercMstpSrasWpstDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_pst";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_pst";
			die = "AdthPercMstpSnonWnonDnon_binocular";
			upDegree = "ManPosBinocStand";
			TurnL = "AwoppercMstpSoptWbinDnon_pst_turnL";
			TurnR = "AwoppercMstpSoptWbinDnon_pst_turnR";
			TurnLRelaxed = "AwoppercMstpSoptWbinDnon_pst_turnL";
			TurnRRelaxed = "AwoppercMstpSoptWbinDnon_pst_turnR";
			WalkF = "AmovpercMwlkSoptWbinDf_pst";
			WalkLF = "AmovpercMwlkSoptWbinDfl_pst";
			WalkRF = "AmovpercMwlkSoptWbinDfr_pst";
			WalkL = "AmovpercMwlkSoptWbinDl_pst";
			WalkR = "AmovpercMwlkSoptWbinDr_pst";
			WalkLB = "AmovpercMwlkSoptWbinDbl_pst";
			WalkRB = "AmovpercMwlkSoptWbinDbr_pst";
			WalkB = "AmovpercMwlkSoptWbinDb_pst";
			SlowF = "AmovpercMrunSnonWbinDf_pst";
			SlowLF = "AmovpercMrunSnonWbinDfl_pst";
			SlowRF = "AmovpercMrunSnonWbinDfr_pst";
			SlowL = "AmovpercMrunSnonWbinDl_pst";
			SlowR = "AmovpercMrunSnonWbinDr_pst";
			SlowLB = "AmovpercMrunSnonWbinDbl_pst";
			SlowRB = "AmovpercMrunSnonWbinDbr_pst";
			SlowB = "AmovpercMrunSnonWbinDb_pst";
			FastF = "AmovpercMrunSnonWbinDf_pst";
			FastLF = "AmovpercMrunSnonWbinDfl_pst";
			FastRF = "AmovpercMrunSnonWbinDfr_pst";
			FastL = "AmovpercMrunSnonWbinDl_pst";
			FastR = "AmovpercMrunSnonWbinDr_pst";
			FastLB = "AmovpercMrunSnonWbinDbl_pst";
			FastRB = "AmovpercMrunSnonWbinDbr_pst";
			FastB = "AmovpercMrunSnonWbinDb_pst";
			EvasiveForward = "AmovpercMrunSnonWbinDf_pst";
			EvasiveLeft = "";
			EvasiveRight = "";
			diary = "";
			GetOver = "";
		};
		
		class BinocKneelPstActions : PistolKneelActions {
			stop = "AwopPknlMstpSoptWbinDnon_pst";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_pst";
			default = "AwopPknlMstpSoptWbinDnon_pst";
			binocOff = "AmovPknlMstpSrasWpstDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_pst";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_pst";
			die = "AdthPknlMstpSnonWnonDnon_binocular";
			upDegree = "ManPosBinoc";
			TurnL = "AwoppknlMstpSoptWbinDnon_pst_turnL";
			TurnR = "AwoppknlMstpSoptWbinDnon_pst_turnR";
			TurnLRelaxed = "AwoppknlMstpSoptWbinDnon_pst_turnL";
			TurnRRelaxed = "AwoppknlMstpSoptWbinDnon_pst_turnR";
			WalkF = "AmovpknlMwlkSoptWbinDf_pst";
			WalkLF = "AmovpknlMwlkSoptWbinDfl_pst";
			WalkRF = "AmovpknlMwlkSoptWbinDfr_pst";
			WalkL = "AmovpknlMwlkSoptWbinDl_pst";
			WalkR = "AmovpknlMwlkSoptWbinDr_pst";
			WalkLB = "AmovpknlMwlkSoptWbinDbl_pst";
			WalkRB = "AmovpknlMwlkSoptWbinDbr_pst";
			WalkB = "AmovpknlMwlkSoptWbinDb_pst";
			SlowF = "AmovpknlMrunSnonWbinDf_pst";
			SlowLF = "AmovpknlMrunSnonWbinDfl_pst";
			SlowRF = "AmovpknlMrunSnonWbinDfr_pst";
			SlowL = "AmovpknlMrunSnonWbinDl_pst";
			SlowR = "AmovpknlMrunSnonWbinDr_pst";
			SlowLB = "AmovpknlMrunSnonWbinDbl_pst";
			SlowRB = "AmovpknlMrunSnonWbinDbr_pst";
			SlowB = "AmovpknlMrunSnonWbinDb_pst";
			FastF = "AmovpknlMrunSnonWbinDf_pst";
			FastLF = "AmovpknlMrunSnonWbinDfl_pst";
			FastRF = "AmovpknlMrunSnonWbinDfr_pst";
			FastL = "AmovpknlMrunSnonWbinDl_pst";
			FastR = "AmovpknlMrunSnonWbinDr_pst";
			FastLB = "AmovpknlMrunSnonWbinDbl_pst";
			FastRB = "AmovpknlMrunSnonWbinDbr_pst";
			FastB = "AmovpknlMrunSnonWbinDb_pst";
			EvasiveForward = "AmovpknlMrunSnonWbinDf_pst";
			EvasiveLeft = "";
			EvasiveRight = "";
			diary = "";
			GetOver = "";
		};
		
		class BinocPronePstActions : PistolProneActions {
			stop = "AwopPpneMstpSoptWbinDnon_pst";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_pst";
			default = "AwopPpneMstpSoptWbinDnon_pst";
			binocOff = "AmovPpneMstpSrasWpstDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_pst";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_pst";
			die = "AdthPpneMstpSnonWnonDnon_binocular";
			upDegree = "ManPosBinocLying";
			TurnL = "AwopPpneMstpSoptWbinDnon_pst_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_pst_turnR";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_pst_turnL";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_pst_turnR";
			WalkF = "AmovPpneMwlkSoptWbinDf_pst";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_pst";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_pst";
			WalkL = "AmovPpneMwlkSoptWbinDl_pst";
			WalkR = "AmovPpneMwlkSoptWbinDr_pst";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_pst";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_pst";
			WalkB = "AmovPpneMwlkSoptWbinDb_pst";
			SlowF = "AmovPpneMrunSnonWbinDf_pst";
			SlowLF = "AmovPpneMrunSnonWbinDfl_pst";
			SlowRF = "AmovPpneMrunSnonWbinDfr_pst";
			SlowL = "AmovPpneMrunSnonWbinDl_pst";
			SlowR = "AmovPpneMrunSnonWbinDr_pst";
			SlowLB = "AmovPpneMrunSnonWbinDbl_pst";
			SlowRB = "AmovPpneMrunSnonWbinDbr_pst";
			SlowB = "AmovPpneMrunSnonWbinDb_pst";
			FastF = "AmovPpneMrunSnonWbinDf_pst";
			FastLF = "AmovPpneMrunSnonWbinDfl_pst";
			FastRF = "AmovPpneMrunSnonWbinDfr_pst";
			FastL = "AmovPpneMrunSnonWbinDl_pst";
			FastR = "AmovPpneMrunSnonWbinDr_pst";
			FastLB = "AmovPpneMrunSnonWbinDbl_pst";
			FastRB = "AmovPpneMrunSnonWbinDbr_pst";
			FastB = "AmovPpneMrunSnonWbinDb_pst";
			EvasiveForward = "AmovPpneMrunSnonWbinDf_pst";
			EvasiveLeft = "";
			EvasiveRight = "";
			diary = "";
		};
		
		class BinocKneelLnrActions : LauncherKneelActions {
			stop = "AwopPknlMstpSoptWbinDnon_lnr";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_lnr";
			default = "AwopPknlMstpSoptWbinDnon_lnr";
			binocOff = "AmovPknlMstpSrasWlnrDnon";
			die = "AdthPknlMstpSlowWlnrDnon_binocular";
			upDegree = "ManPosBinoc";
			PlayerStand = "AwopPercMstpSoptWbinDnon_lnr";
			TurnL = "AwoppknlMstpSoptWbinDnon_lnr_turnL";
			TurnR = "AwoppknlMstpSoptWbinDnon_lnr_turnR";
			TurnLRelaxed = "AwoppknlMstpSoptWbinDnon_lnr_turnL";
			TurnRRelaxed = "AwoppknlMstpSoptWbinDnon_lnr_turnR";
			WalkF = "AmovpknlMwlkSoptWbinDf_lnr";
			WalkLF = "AmovpknlMwlkSoptWbinDfl_lnr";
			WalkRF = "AmovpknlMwlkSoptWbinDfr_lnr";
			WalkL = "AmovpknlMwlkSoptWbinDl_lnr";
			WalkR = "AmovpknlMwlkSoptWbinDr_lnr";
			WalkLB = "AmovpknlMwlkSoptWbinDbl_lnr";
			WalkRB = "AmovpknlMwlkSoptWbinDbr_lnr";
			WalkB = "AmovpknlMwlkSoptWbinDb_lnr";
			SlowF = "AmovpknlMrunSnonWbinDf_lnr";
			SlowLF = "AmovpknlMrunSnonWbinDfl_lnr";
			SlowRF = "AmovpknlMrunSnonWbinDfr_lnr";
			SlowL = "AmovpknlMrunSnonWbinDl_lnr";
			SlowR = "AmovpknlMrunSnonWbinDr_lnr";
			SlowLB = "AmovpknlMrunSnonWbinDbl_lnr";
			SlowRB = "AmovpknlMrunSnonWbinDbr_lnr";
			SlowB = "AmovpknlMrunSnonWbinDb_lnr";
			FastF = "AmovpknlMrunSnonWbinDf_lnr";
			FastLF = "AmovpknlMrunSnonWbinDfl_lnr";
			FastRF = "AmovpknlMrunSnonWbinDfr_lnr";
			FastL = "AmovpknlMrunSnonWbinDl_lnr";
			FastR = "AmovpknlMrunSnonWbinDr_lnr";
			FastLB = "AmovpknlMrunSnonWbinDbl_lnr";
			FastRB = "AmovpknlMrunSnonWbinDbr_lnr";
			FastB = "AmovpknlMrunSnonWbinDb_lnr";
			EvasiveForward = "AmovpknlMrunSnonWbinDf_lnr";
			EvasiveRight = "";
			EvasiveLeft = "";
			diary = "";
		};
		
		class BinocProneLnrActions : BinocKneelLnrActions {
			Stop = "AwopPpneMstpSoptWbinDnon_lnr";
			StopRelaxed = "AwopPpneMstpSoptWbinDnon_lnr";
			Default = "AwopPpneMstpSoptWbinDnon_lnr";
			TurnL = "AwopppneMstpSoptWbinDnon_lnr_turnL";
			TurnR = "AwopppneMstpSoptWbinDnon_lnr_turnR";
			TurnLRelaxed = "AwopppneMstpSoptWbinDnon_lnr_turnL";
			TurnRRelaxed = "AwopppneMstpSoptWbinDnon_lnr_turnR";
			WalkF = "AmovppneMwlkSoptWbinDf_lnr";
			WalkLF = "AmovppneMwlkSoptWbinDfl_lnr";
			WalkRF = "AmovppneMwlkSoptWbinDfr_lnr";
			WalkL = "AmovppneMwlkSoptWbinDl_lnr";
			WalkR = "AmovppneMwlkSoptWbinDr_lnr";
			WalkLB = "AmovppneMwlkSoptWbinDbl_lnr";
			WalkRB = "AmovppneMwlkSoptWbinDbr_lnr";
			WalkB = "AmovppneMwlkSoptWbinDb_lnr";
			SlowF = "AmovppneMrunSnonWbinDf_lnr";
			SlowLF = "AmovppneMrunSnonWbinDfl_lnr";
			SlowRF = "AmovppneMrunSnonWbinDfr_lnr";
			SlowL = "AmovppneMrunSnonWbinDl_lnr";
			SlowR = "AmovppneMrunSnonWbinDr_lnr";
			SlowLB = "AmovppneMrunSnonWbinDbl_lnr";
			SlowRB = "AmovppneMrunSnonWbinDbr_lnr";
			SlowB = "AmovppneMrunSnonWbinDb_lnr";
			FastF = "AmovPknlMrunSnonWbinDf_rfl";
			FastLF = "AmovPknlMrunSnonWbinDfl_rfl";
			FastRF = "AmovPknlMrunSnonWbinDfr_rfl";
			FastL = "AmovPknlMrunSnonWbinDl_rfl";
			FastR = "AmovPknlMrunSnonWbinDr_rfl";
			FastLB = "AmovPknlMrunSnonWbinDbl_rfl";
			FastRB = "AmovPknlMrunSnonWbinDbr_rfl";
			FastB = "AmovPknlMrunSnonWbinDb_rfl";
			EvasiveForward = "AmovPknlMrunSnonWbinDf_rfl";
			diary = "";
		};
		
		class BinocStandCivilActions : CivilStandActions {
			stop = "AwopPercMstpSoptWbinDnon_non";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_non";
			default = "AwopPercMstpSoptWbinDnon_non";
			binocOff = "AmovPercMstpSnonWnonDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_non";
			PlayerCrouch = "AwopPpneMstpSoptWbinDnon_non";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_non";
			die = "AdthPercMstpSnonWnonDnon_binocular";
			upDegree = "ManPosBinocStand";
			TurnL = "AwoppercMstpSoptWbinDnon_non_turnL";
			TurnR = "AwoppercMstpSoptWbinDnon_non_turnR";
			TurnLRelaxed = "AwoppercMstpSoptWbinDnon_non_turnL";
			TurnRRelaxed = "AwoppercMstpSoptWbinDnon_non_turnR";
			WalkF = "AmovpercMwlkSoptWbinDf_non";
			WalkLF = "AmovpercMwlkSoptWbinDfl_non";
			WalkRF = "AmovpercMwlkSoptWbinDfr_non";
			WalkL = "AmovpercMwlkSoptWbinDl_non";
			WalkR = "AmovpercMwlkSoptWbinDr_non";
			WalkLB = "AmovpercMwlkSoptWbinDbl_non";
			WalkRB = "AmovpercMwlkSoptWbinDbr_non";
			WalkB = "AmovpercMwlkSoptWbinDb_non";
			SlowF = "AmovpercMrunSnonWbinDf_non";
			SlowLF = "AmovpercMrunSnonWbinDfl_non";
			SlowRF = "AmovpercMrunSnonWbinDfr_non";
			SlowL = "AmovpercMrunSnonWbinDl_non";
			SlowR = "AmovpercMrunSnonWbinDr_non";
			SlowLB = "AmovpercMrunSnonWbinDbl_non";
			SlowRB = "AmovpercMrunSnonWbinDbr_non";
			SlowB = "AmovpercMrunSnonWbinDb_non";
			EvasiveRight = "";
			EvasiveLeft = "";
			FastF = "AmovpercMrunSnonWbinDf_non";
			FastLF = "AmovpercMrunSnonWbinDfl_non";
			FastRF = "AmovpercMrunSnonWbinDfr_non";
			FastL = "AmovpercMrunSnonWbinDl_non";
			FastR = "AmovpercMrunSnonWbinDr_non";
			FastLB = "AmovpercMrunSnonWbinDbl_non";
			FastRB = "AmovpercMrunSnonWbinDbr_non";
			FastB = "AmovpercMrunSnonWbinDb_non";
			EvasiveForward = "AmovpercMrunSnonWbinDf_non";
			diary = "";
			GetOver = "";
		};
		
		class BinocKneelCivilActions : BinocStandCivilActions {
			Stop = "AwopPknlMstpSoptWbinDnon_non";
			StopRelaxed = "AwopPknlMstpSoptWbinDnon_non";
			Default = "AwopPknlMstpSoptWbinDnon_non";
			TurnL = "AwoppknlMstpSoptWbinDnon_non_turnL";
			TurnR = "AwoppknlMstpSoptWbinDnon_non_turnR";
			TurnLRelaxed = "AwoppknlMstpSoptWbinDnon_non_turnL";
			TurnRRelaxed = "AwoppknlMstpSoptWbinDnon_non_turnR";
			WalkF = "AmovpknlMwlkSoptWbinDf_non";
			WalkLF = "AmovpknlMwlkSoptWbinDfl_non";
			WalkRF = "AmovpknlMwlkSoptWbinDfr_non";
			WalkL = "AmovpknlMwlkSoptWbinDl_non";
			WalkR = "AmovpknlMwlkSoptWbinDr_non";
			WalkLB = "AmovpknlMwlkSoptWbinDbl_non";
			WalkRB = "AmovpknlMwlkSoptWbinDbr_non";
			WalkB = "AmovpknlMwlkSoptWbinDb_non";
			SlowF = "AmovpknlMrunSnonWbinDf_non";
			SlowLF = "AmovpknlMrunSnonWbinDfl_non";
			SlowRF = "AmovpknlMrunSnonWbinDfr_non";
			SlowL = "AmovpknlMrunSnonWbinDl_non";
			SlowR = "AmovpknlMrunSnonWbinDr_non";
			SlowLB = "AmovpknlMrunSnonWbinDbl_non";
			SlowRB = "AmovpknlMrunSnonWbinDbr_non";
			SlowB = "AmovpknlMrunSnonWbinDb_non";
			FastF = "AmovpknlMrunSnonWbinDf_non";
			FastLF = "AmovpknlMrunSnonWbinDfl_non";
			FastRF = "AmovpknlMrunSnonWbinDfr_non";
			FastL = "AmovpknlMrunSnonWbinDl_non";
			FastR = "AmovpknlMrunSnonWbinDr_non";
			FastLB = "AmovpknlMrunSnonWbinDbl_non";
			FastRB = "AmovpknlMrunSnonWbinDbr_non";
			FastB = "AmovpknlMrunSnonWbinDb_non";
			EvasiveForward = "AmovpknlMrunSnonWbinDf_non";
			diary = "";
		};
		
		class BinocProneCivilActions : CivilProneActions {
			stop = "AwopPpneMstpSoptWbinDnon_non";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_non";
			default = "AwopPpneMstpSoptWbinDnon_non";
			binocOff = "AmovPpneMstpSnonWnonDnon";
			PlayerStand = "AwopPercMstpSoptWbinDnon_non";
			PlayerCrouch = "AwopPpneMstpSoptWbinDnon_non";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_non";
			die = "AdthPpneMstpSnonWnonDnon_binocular";
			upDegree = "ManPosBinocLying";
			TurnL = "AwopppneMstpSoptWbinDnon_non_turnL";
			TurnR = "AwopppneMstpSoptWbinDnon_non_turnR";
			TurnLRelaxed = "AwopppneMstpSoptWbinDnon_non_turnL";
			TurnRRelaxed = "AwopppneMstpSoptWbinDnon_non_turnR";
			WalkF = "AmovppneMwlkSoptWbinDf_non";
			WalkLF = "AmovppneMwlkSoptWbinDfl_non";
			WalkRF = "AmovppneMwlkSoptWbinDfr_non";
			WalkL = "AmovppneMwlkSoptWbinDl_non";
			WalkR = "AmovppneMwlkSoptWbinDr_non";
			WalkLB = "AmovppneMwlkSoptWbinDbl_non";
			WalkRB = "AmovppneMwlkSoptWbinDbr_non";
			WalkB = "AmovppneMwlkSoptWbinDb_non";
			SlowF = "AmovppneMrunSnonWbinDf_non";
			SlowLF = "AmovppneMrunSnonWbinDfl_non";
			SlowRF = "AmovppneMrunSnonWbinDfr_non";
			SlowL = "AmovppneMrunSnonWbinDl_non";
			SlowR = "AmovppneMrunSnonWbinDr_non";
			SlowLB = "AmovppneMrunSnonWbinDbl_non";
			SlowRB = "AmovppneMrunSnonWbinDbr_non";
			SlowB = "AmovppneMrunSnonWbinDb_non";
			FastF = "AmovppneMrunSnonWbinDf_non";
			FastLF = "AmovppneMrunSnonWbinDfl_non";
			FastRF = "AmovppneMrunSnonWbinDfr_non";
			FastL = "AmovppneMrunSnonWbinDl_non";
			FastR = "AmovppneMrunSnonWbinDr_non";
			FastLB = "AmovppneMrunSnonWbinDbl_non";
			FastRB = "AmovppneMrunSnonWbinDbr_non";
			FastB = "AmovppneMrunSnonWbinDb_non";
			EvasiveForward = "AmovppneMrunSnonWbinDf_non";
			EvasiveLeft = "";
			EvasiveRight = "";
			diary = "";
		};
		
		class RifleProneActions_injured : RifleProneActions {
			gestureAttack[] = {"GestureAttackProne", "Gesture"};
			gestureGo[] = {"GestureGoBProne", "Gesture"};
			gestureGoB[] = {"GestureGoBProne", "Gesture"};
			gestureFreeze[] = {"GestureFreezeProne", "Gesture"};
			gesturePoint[] = {"", "Gesture"};
			gestureCeaseFire[] = {"", "Gesture"};
			gestureCover[] = {"", "Gesture"};
			gestureUp[] = {"GestureGoBProne", "Gesture"};
			gestureNo[] = {"", "Gesture"};
			gestureYes[] = {"", "Gesture"};
			gestureFollow[] = {"", "Gesture"};
			gestureAdvance[] = {"GestureAdvanceProne", "Gesture"};
			stop = "";
			default = "";
			stopRelaxed = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			reloadMagazine = "";
			reloadMGun = "";
			reloadMortar = "";
			throwGrenade = "";
			walkF = "AmovPpneMsprSlowWrflDf_injured";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "AmovPpneMsprSlowWrflDf_injured";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "AmovPpneMsprSlowWrflDf_injured";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			EvasiveLeft = "";
			EvasiveRight = "";
			EvasiveForward = "AmovPpneMsprSlowWrflDf_injured";
			EvasiveBack = "";
			down = "";
			up = "AmovPpneMsprSlowWrflDf_injured";
			die = "AdthPpneMstpSrasWrflDnon_1";
			weaponOn = "";
			weaponOff = "";
			binocOn = "";
			binocOff = "";
			handGunOn = "";
			takeFlag = "";
			putDown = "";
			treated = "AmovPpneMstpSrasWrflDnon_injuredHealed";
			healingFinished = "AmovPpneMstpSrasWrflDnon";
			Combat = "";
			Lying = "";
			Stand = "AmovPpneMsprSlowWrflDf_injured";
			Crouch = "";
			CanNotMove = "";
			Civil = "";
			CivilLying = "";
			FireNotPossible = "";
			strokeFist = "";
			strokeGun = "";
			sitDown = "";
			salute = "";
			turnSpeed = 0.4;
			limitFast = 0.5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			upDegree = "ManPosLying";
			diary = "";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
		};
		
		class HealActionBase : RifleKneelActions {
			updegree = "ManPosCrouch";
			toAgony = "AinjPpneMstpSnonWrflDnon";
			healStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			healStart = "AinvPknlMstpSnonWrflDnon_medic";
			healingFinished = "AinjPpneMstpSnonWrflDnon";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic0S";
			medicStartRightSide = "AinvPknlMstpSnonWrflDr_medic0S";
			Die = "AdthPknlMstpSlayWrflDnon_inventory";
			Stop = "AinvPknlMstpSnonWrflDnon_medic0s";
			StopRelaxed = "AinvPknlMstpSnonWrflDnon_medic0s";
			Default = "AinvPknlMstpSnonWrflDnon_medic";
			SceneCommanderTalk = "";
			SceneSleepC = "";
			SceneSleepB = "";
			SceneSleepA = "";
			SceneSitUnarm_R = "";
			SceneSitUnarm_L = "";
			SceneSitRfl_L = "";
			SceneSitRfl_R = "";
			ScenePoslechVelitele = "";
			dooraction = "";
			ReloadMortar = "";
			ThrowGrenade = "";
			StartSwim = "";
			Up = "";
			Down = "";
			Lying = "";
			Stand = "";
			Combat = "";
			Crouch = "";
			CanNotMove = "";
			Civil = "";
			CivilLying = "";
			FireNotPossible = "";
			WeaponOn = "";
			WeaponOff = "";
			StrokeGun = "";
			saluteOff = "";
			GetOver = "";
			Diary = "";
			Surrender = "";
			Gear = "";
			BinocOn = "";
			BinocOff = "";
			PutDown = "";
			LadderOnDown = "";
			LadderOnUp = "";
			GetInLow = "";
			GetInMedium = "";
			GetInHigh = "";
			GetOutLow = "";
			GetOutMedium = "";
			GetOutHigh = "";
			TakeFlag = "";
			HandGunOn = "";
			TurnL = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnR = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnLRelaxed = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnRRelaxed = "AinvPknlMstpSnonWrflDnon_medic0S";
		};
		
		class HealActionBaseDr : HealActionBase {
			Stop = "AinvPknlMstpSnonWrflDr_medic0S";
			StopRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnL = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnR = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnLRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnRRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
		};
		
		class HealActionsNon : CivilKneelActions_gear {
			turnSpeed = 0;
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			LadderOnUp = "";
			LadderOnDown = "";
			medicStop = "AmovPknlMstpSnonWnonDnon";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			medicMove = "";
			toAgony = "AinjPpneMstpSnonWrflDnon";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			Die = "AdthPknlMstpSnonWnonDnon_inventory";
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			carriedStill = "AinjPfalMstpSnonWnonDnon_carried_still";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			WalkB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			SlowB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			FastB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			Down = "AinvPknlMstpSnonWnonDnon_medicEnd";
			Stand = "AinvPknlMstpSnonWnonDnon_medicEnd";
			Stop = "AinvPknlMstpSnonWnonDnon_medic0s";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_medic0s";
		};
		
		class HealActionsNonDr : HealActionsNon {
			Stop = "AinvPknlMstpSnonWnonDr_medic0s";
			StopRelaxed = "AinvPknlMstpSnonWnonDr_medic0s";
		};
		
		class MoveWithInjuredMan : NoActions {
			upDegree = "ManPosStand";
			reloadMagazine = "";
			stop = "";
			default = "AcinPknlMstpSrasWrflDnon";
			walkLB = "AcinPknlMwlkSrasWrflDb";
			walkRB = "AcinPknlMwlkSrasWrflDb";
			walkB = "AcinPknlMwlkSrasWrflDb";
			slowLB = "AcinPknlMwlkSrasWrflDb";
			slowRB = "AcinPknlMwlkSrasWrflDb";
			slowB = "AcinPknlMwlkSrasWrflDb";
			fastLB = "AcinPknlMwlkSrasWrflDb";
			fastRB = "AcinPknlMwlkSrasWrflDb";
			fastB = "AcinPknlMwlkSrasWrflDb";
			EvasiveBack = "AcinPknlMwlkSrasWrflDb";
			die = "AcinPknlMwlkSlowWrflDb_death";
			turnSpeed = 2;
			PlayerStand = "Helper_SwitchToCarryRfl";
			PlayerProne = "AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon";
			PlayerCrouch = "AmovPknlMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSlowWrflDnon";
			grabCarry = "Helper_SwitchToCarryRfl";
			gestureYes = "";
			StartSwim = "AswmPercMrunSnonWnonDf";
		};
		
		class MoveWithInjuredMan_helperRfl : MoveWithInjuredMan {};
		
		class MoveWithInjuredMan_helperNon : MoveWithInjuredMan_helperRfl {
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			grabCarry = "Helper_SwitchToCarryNon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			WalkLB = "AcinPknlMwlkSnonWnonDb";
			WalkRB = "AcinPknlMwlkSnonWnonDb";
			WalkB = "AcinPknlMwlkSnonWnonDb";
			SlowLB = "AcinPknlMwlkSnonWnonDb";
			SlowRB = "AcinPknlMwlkSnonWnonDb";
			SlowB = "AcinPknlMwlkSnonWnonDb";
			FastLB = "AcinPknlMwlkSnonWnonDb";
			FastB = "AcinPknlMwlkSnonWnonDb";
			FastRB = "AcinPknlMwlkSnonWnonDb";
			EvasiveBack = "AcinPknlMwlkSnonWnonDb";
			PlayerStand = "Helper_SwitchToCarryNon";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerProne = "AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			Die = "AcinPknlMwlkSlowWrflDb_death";
			Default = "AcinPknlMstpSrasWrflDnon";
		};
		
		class MoveWithInjuredManDragger : MoveWithInjuredMan {
			released = "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			Up = "Helper_SwitchToCarryRfl";
			PlayerStand = "Helper_SwitchToCarryRfl";
			Stand = "Helper_SwitchToCarryRfl";
			Default = "AcinPknlMstpSrasWrflDnon";
			Stop = "AcinPknlMstpSrasWrflDnon";
			StopRelaxed = "AcinPknlMstpSrasWrflDnon";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
		};
		
		class MoveWithInjuredManDraggerRfl : MoveWithInjuredManDragger {
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			WalkF = "AcinPknlMstpSrasWrflDnon";
			WalkLF = "AcinPknlMstpSrasWrflDnon";
			WalkRF = "AcinPknlMstpSrasWrflDnon";
			WalkL = "AcinPknlMstpSrasWrflDnon";
			WalkR = "AcinPknlMstpSrasWrflDnon";
			SlowF = "AcinPknlMstpSrasWrflDnon";
			SlowLF = "AcinPknlMstpSrasWrflDnon";
			SlowRF = "AcinPknlMstpSrasWrflDnon";
			SlowL = "AcinPknlMstpSrasWrflDnon";
			SlowR = "AcinPknlMstpSrasWrflDnon";
			FastF = "AcinPknlMstpSrasWrflDnon";
			FastLF = "AcinPknlMstpSrasWrflDnon";
			FastRF = "AcinPknlMstpSrasWrflDnon";
			FastL = "AcinPknlMstpSrasWrflDnon";
			FastR = "AcinPknlMstpSrasWrflDnon";
			EvasiveForward = "AcinPknlMstpSrasWrflDnon";
			EvasiveLeft = "AcinPknlMstpSrasWrflDnon";
			EvasiveRight = "AcinPknlMstpSrasWrflDnon";
			Down = "AmovPpneMstpSrasWrflDnon";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
			Die = "AcinPknlMwlkSlowWrflDb_death";
			released = "AmovPknlMstpSrasWrflDnon";
			medicStartRightSide = "AinvPknlMstpSnonWrflDr_medic0S";
		};
		
		class MoveWithInjuredManDraggerPst : MoveWithInjuredManDragger {
			upDegree = "ManPosHandGunStand";
			grabDrag = "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			released = "AmovPknlMstpSrasWpstDnon";
			Stop = "AcinPknlMstpSnonWpstDnon";
			StopRelaxed = "AcinPknlMstpSnonWpstDnon";
			WalkLB = "AcinPknlMwlkSnonWpstDb";
			WalkRB = "AcinPknlMwlkSnonWpstDb";
			WalkB = "AcinPknlMwlkSnonWpstDb";
			SlowLB = "AcinPknlMwlkSnonWpstDb";
			SlowRB = "AcinPknlMwlkSnonWpstDb";
			SlowB = "AcinPknlMwlkSnonWpstDb";
			FastLB = "AcinPknlMwlkSnonWpstDb";
			FastRB = "AcinPknlMwlkSnonWpstDb";
			FastB = "AcinPknlMwlkSnonWpstDb";
			EvasiveBack = "AcinPknlMwlkSnonWpstDb";
			Up = "Helper_SwitchToCarryNon_pst";
			PlayerStand = "Helper_SwitchToCarryNon_pst";
			PlayerCrouch = "AmovPknlMstpSrasWpstDnon";
			PlayerProne = "AmovPpneMstpSrasWpstDnon";
			Stand = "Helper_SwitchToCarryNon_pst";
			Crouch = "AmovPknlMstpSrasWpstDnon";
			grabCarry = "Helper_SwitchToCarryNon_pst";
			Die = "AcinPknlMwlkSnonWpstDb_death";
			Default = "AcinPknlMstpSnonWpstDnon";
			HandGunOn = "AcinPknlMstpSnonWpstDnon";
		};
		
		class MoveWithInjuredManDraggerNon : MoveWithInjuredManDragger {
			upDegree = "ManPosNoWeapon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			released = "AmovPknlMstpSnonWnonDnon";
			Stop = "AcinPknlMstpSnonWnonDnon";
			StopRelaxed = "AcinPknlMstpSnonWnonDnon";
			WalkLB = "AcinPknlMwlkSnonWnonDb";
			WalkRB = "AcinPknlMwlkSnonWnonDb";
			WalkB = "AcinPknlMwlkSnonWnonDb";
			SlowLB = "AcinPknlMwlkSnonWnonDb";
			SlowRB = "AcinPknlMwlkSnonWnonDb";
			SlowB = "AcinPknlMwlkSnonWnonDb";
			FastLB = "AcinPknlMwlkSnonWnonDb";
			FastRB = "AcinPknlMwlkSnonWnonDb";
			FastB = "AcinPknlMwlkSnonWnonDb";
			EvasiveBack = "AcinPknlMwlkSnonWnonDb";
			Up = "Helper_SwitchToCarryNon";
			PlayerStand = "Helper_SwitchToCarryNon";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			Stand = "Helper_SwitchToCarryNon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			grabCarry = "Helper_SwitchToCarryNon";
			Die = "AcinPknlMwlkSnonWnonDb_death";
			Default = "AcinPknlMstpSnonWnonDnon";
			HandGunOn = "AcinPknlMstpSnonWnonDnon";
		};
		
		class MoveWithInjuredManCarrier : MoveWithInjuredMan {
			turnSpeed = 2;
			Stop = "AcinPercMstpSrasWrflDnon";
			WalkLB = "";
			WalkRB = "";
			WalkB = "";
			SlowLB = "";
			SlowRB = "";
			SlowB = "";
			FastLB = "";
			FastRB = "";
			FastB = "";
			EvasiveBack = "";
			Die = "DeadState";
			Default = "AcinPercMstpSrasWrflDnon";
			LadderOnDown = "";
			LadderOnUp = "";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			WalkF = "AcinPercMrunSrasWrflDf";
			WalkLF = "AcinPercMrunSrasWrflDf";
			WalkRF = "AcinPercMrunSrasWrflDf";
			SlowF = "AcinPercMrunSrasWrflDf";
			SlowLF = "AcinPercMrunSrasWrflDf";
			SlowRF = "AcinPercMrunSrasWrflDf";
			FastF = "AcinPercMrunSrasWrflDf";
			FastLF = "AcinPercMrunSrasWrflDf";
			FastRF = "AcinPercMrunSrasWrflDf";
			EvasiveForward = "AcinPercMrunSrasWrflDf";
			PlayerProne = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			StopRelaxed = "AcinPercMstpSrasWrflDnon";
			released = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			PlayerStand = "";
			grabCarry = "";
			grabDrag = "";
			PlayerCrouch = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			Down = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			Crouch = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
		};
		
		class MoveWithInjuredManCarrierRfl : MoveWithInjuredManCarrier {
			PlayerProne = "AmovPknlMstpSrasWrflDnon";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			Down = "AmovPknlMstpSrasWrflDnon";
			WalkF = "AcinPercMrunSrasWrflDf";
			WalkLF = "AcinPercMrunSrasWrflDf";
			WalkL = "AcinPercMstpSrasWrflDnon";
			WalkR = "AcinPercMstpSrasWrflDnon";
			WalkLB = "AcinPercMstpSrasWrflDnon";
			WalkRB = "AcinPercMstpSrasWrflDnon";
			WalkB = "AcinPercMstpSrasWrflDnon";
			SlowL = "AcinPercMstpSrasWrflDnon";
			SlowR = "AcinPercMstpSrasWrflDnon";
			SlowLB = "AcinPercMstpSrasWrflDnon";
			SlowRB = "AcinPercMstpSrasWrflDnon";
			SlowB = "AcinPercMstpSrasWrflDnon";
			FastL = "AcinPercMstpSrasWrflDnon";
			FastR = "AcinPercMstpSrasWrflDnon";
			FastLB = "AcinPercMstpSrasWrflDnon";
			FastRB = "AcinPercMstpSrasWrflDnon";
			FastB = "AcinPercMstpSrasWrflDnon";
			EvasiveLeft = "AcinPercMstpSrasWrflDnon";
			EvasiveRight = "AcinPercMstpSrasWrflDnon";
			EvasiveBack = "AcinPercMstpSrasWrflDnon";
			PlayerStand = "AcinPercMstpSrasWrflDnon";
			Stand = "AcinPercMstpSrasWrflDnon";
			CanNotMove = "AcinPercMstpSrasWrflDnon";
			toAgony = "AmovPpneMstpSrasWrflDnon_injured";
			StartSwim = "";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
		};
		
		class MoveWithInjuredManCarrierPst : MoveWithInjuredManCarrierRfl {};
		
		class MoveWithInjuredManCarrierNon : MoveWithInjuredManCarrierRfl {
			upDegree = "ManPosNoWeapon";
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			released = "AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon";
			Stop = "AcinPercMstpSnonWnonDnon";
			StopRelaxed = "AcinPercMstpSnonWnonDnon";
			WalkF = "AcinPercMrunSnonWnonDf";
			WalkLF = "AcinPercMrunSnonWnonDf";
			WalkRF = "AcinPercMrunSnonWnonDf";
			WalkL = "AcinPercMstpSnonWnonDnon";
			WalkR = "AcinPercMstpSnonWnonDnon";
			WalkLB = "AcinPercMstpSnonWnonDnon";
			WalkRB = "AcinPercMstpSnonWnonDnon";
			WalkB = "AcinPercMstpSnonWnonDnon";
			SlowF = "AcinPercMrunSnonWnonDf";
			SlowLF = "AcinPercMrunSnonWnonDf";
			SlowRF = "AcinPercMrunSnonWnonDf";
			SlowL = "AcinPercMstpSnonWnonDnon";
			SlowR = "AcinPercMstpSnonWnonDnon";
			SlowLB = "AcinPercMstpSnonWnonDnon";
			SlowRB = "AcinPercMstpSnonWnonDnon";
			SlowB = "AcinPercMstpSnonWnonDnon";
			FastF = "AcinPercMrunSnonWnonDf";
			FastLF = "AcinPercMrunSnonWnonDf";
			FastRF = "AcinPercMrunSnonWnonDf";
			FastL = "AcinPercMstpSnonWnonDnon";
			FastR = "AcinPercMstpSnonWnonDnon";
			FastLB = "AcinPercMstpSnonWnonDnon";
			FastRB = "AcinPercMstpSnonWnonDnon";
			FastB = "AcinPercMstpSnonWnonDnon";
			EvasiveForward = "AcinPercMrunSnonWnonDf";
			EvasiveLeft = "AcinPercMstpSnonWnonDnon";
			EvasiveRight = "AcinPercMstpSnonWnonDnon";
			EvasiveBack = "AcinPercMstpSnonWnonDnon";
			Down = "AmovPknlMstpSnonWnonDnon";
			PlayerStand = "AcinPercMstpSnonWnonDnon";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			PlayerProne = "AmovPknlMstpSnonWnonDnon";
			Stand = "AcinPercMstpSnonWnonDnon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			CanNotMove = "AcinPercMstpSnonWnonDnon";
			Default = "AcinPercMstpSnonWnonDnon";
		};
		
		class MoveWithInjuredManCarrierRflWc : MoveWithInjuredManCarrierRfl {
			toAgony = "AinjPpneMstpSnonWrflDnon";
		};
		
		class MoveWithInjuredManCarrierPstWc : MoveWithInjuredManCarrierRflWc {};
		
		class MoveWithInjuredManCarrierNonWc : MoveWithInjuredManCarrierNon {};
		
		class MoveWithInjuredMan_2Death2 : MoveWithInjuredMan {
			die = "AcinPknlMwlkSlowWrflDb_death2";
		};
		
		class MoveWithInjuredMan_release : RifleBaseLowStandActions {
			die = "AcinPknlMwlkSlowWrflDb_death2";
			diary = "";
		};
		
		class InjuredManActions : NoActions {
			upDegree = "ManPosLying";
			turnSpeed = 0;
			die = "AdthPpneMstpSnonWnonDnonB";
			healingFinished = "AmovPpneMstpSrasWrflDnon";
			WalkF = "AmovPpneMsprSlowWrflDf_injured";
			SlowF = "AmovPpneMsprSlowWrflDf_injured";
			FastF = "AmovPpneMsprSlowWrflDf_injured";
			EvasiveForward = "AmovPpneMsprSlowWrflDf_injured";
			LadderOnDown = "";
			LadderOnUp = "";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			medicStop = "";
			medicStart = "";
		};
		
		class InjuredManActionsRfl : InjuredManActions {
			turnSpeed = 2;
			Stop = "AmovPpneMstpSrasWrflDnon_injured";
			Lying = "AmovPpneMstpSrasWrflDnon_injured";
			healedStart = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			healedStop = "AinjPpneMstpSnonWrflDnon";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
			grabCarried = "AinjPfalMstpSnonWrflDnon_carried_Up";
		};
		
		class InjuredManActionsNon : InjuredManActionsRfl {
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			Stop = "AmovPpneMstpSnonWnonDnon_injured";
			WalkF = "AmovPpneMsprSnonWnonDf_injured";
			SlowF = "AmovPpneMsprSnonWnonDf_injured";
			FastF = "AmovPpneMsprSnonWnonDf_injured";
			EvasiveForward = "AmovPpneMsprSnonWnonDf_injured";
			Lying = "AmovPpneMstpSnonWnonDnon_injured";
			healedStart = "AinjPpneMstpSnonWnonDnon_injuredHealed";
			healedStop = "AinjPpneMstpSnonWnonDnon";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			grabCarried = "AinjPfalMstpSnonWnonDnon_carried_Up";
			released = "AinjPpneMstpSnonWnonDnon";
			releasedBad = "AinjPpneMstpSnonWnonDnon";
			carriedStill = "AinjPfalMstpSnonWnonDnon_carried_still";
		};
		
		class InjuredManActionsNon_norot : InjuredManActionsNon {
			turnSpeed = 0;
		};
		
		class InjuredManActionsNon_healed : InjuredManActionsNon_norot {
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
		};
		
		class InjuredManActionsRfl_norot : InjuredManActionsRfl {
			turnSpeed = 0;
			Stop = "AinjPpneMstpSnonWrflDnon";
		};
		
		class InjuredManActionsRfl_healed : InjuredManActionsRfl_norot {
			turnSpeed = 0;
			medicStop = "";
			medicStart = "";
			Stop = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			WalkF = "";
			SlowF = "";
			FastF = "";
			EvasiveForward = "";
			Lying = "";
			Default = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerProne = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerCrouch = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerStand = "AinjPpneMstpSnonWrflDnon_injuredHealed";
		};
		
		class InjuredManCarriedActions : InjuredManActions {
			WalkL = "";
			WalkF = "";
			Stop = "AinjPfalMstpSnonWrflDnon_carried_still";
			StopRelaxed = "AinjPfalMstpSnonWrflDnon_carried_still";
			SlowF = "";
			FastF = "";
			EvasiveForward = "";
			released = "AmovPpneMstpSrasWrflDnon";
			LadderOnDown = "";
			LadderOnUp = "";
			healingFinished = "";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			Default = "AinjPfalMstpSnonWrflDnon_carried_still";
			Lying = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerProne = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerCrouch = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerStand = "AinjPfalMstpSnonWrflDnon_carried_still";
			Die = "";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
		};
		
		class InjuredManCarriedActionsNon : InjuredManActionsNon {
			turnSpeed = 0;
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			released = "AinjPfalMstpSnonWnonDnon_carried_Down";
			Stop = "AinjPfalMstpSnonWnonDnon_carried_still";
			StopRelaxed = "AinjPfalMstpSnonWnonDnon_carried_still";
			PlayerStand = "AinjPfalMstpSnonWnonDnon_carried_still";
			PlayerCrouch = "";
			PlayerProne = "";
			Lying = "AinjPfalMstpSnonWnonDnon_carried_still";
			Default = "AinjPfalMstpSnonWnonDnon_carried_still";
			releasedBad = "AinjPfalMstpSnonWnonDf_carried_fall";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			carriedStill = "AinjPfalMstpSnonWnonDnon_carried_still";
			EvasiveForward = "";
			FastF = "";
			SlowF = "";
			WalkF = "";
			Die = "";
		};
		
		class InjuredManCarriedActionsNonWc : InjuredManCarriedActionsNon {
			releasedBad = "AinjPfalMstpSnonWnonDf_carried_fallwc";
		};
		
		class InjuredManCarriedActionsRfl : InjuredManCarriedActions {
			turnSpeed = 0;
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			released = "AinjPfalMstpSnonWrflDnon_carried_Down";
			releasedBad = "AinjPfalMstpSnonWrflDf_carried_fall";
		};
		
		class InjuredManCarriedActionsRflWc : InjuredManCarriedActionsRfl {
			releasedBad = "AinjPfalMstpSnonWrflDf_carried_fallwc";
		};
		
		class InjuredManDraggedActions : InjuredManActions {
			Die = "AdthPpneMstpSnonWrflDbB_dragged";
			released = "AmovPpneMstpSnonWnonDnon";
			WalkF = "";
			SlowF = "";
			FastF = "";
			EvasiveForward = "";
			Stop = "AinjPpneMstpSnonWrflDb_still";
			StopRelaxed = "AinjPpneMstpSnonWrflDb_still";
			Default = "AinjPpneMstpSnonWrflDb_still";
		};
		
		class InjuredManDraggedActionsRfl : InjuredManDraggedActions {
			released = "AinjPpneMstpSnonWrflDb_release";
			releasedBad = "AinjPpneMstpSnonWrflDb_release";
			Stop = "AinjPpneMstpSnonWrflDb_still";
			Default = "AinjPpneMstpSnonWrflDb_still";
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			grabCarried = "AinjPfalMstpSnonWrflDnon_carried_Up";
		};
		
		class InjuredManDraggedActionsNon : InjuredManDraggedActions {
			released = "AinjPpneMstpSnonWnonDb_release";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			Die = "AdthPpneMstpSnonWnonDbB_dragged";
			releasedBad = "AinjPpneMstpSnonWnonDb_release";
			Stop = "AinjPpneMstpSnonWnonDb_still";
			StopRelaxed = "AinjPpneMstpSnonWnonDb_still";
			Default = "AinjPpneMstpSnonWnonDb_still";
			grabDragged = "AinjPpneMstpSnonWnonDb_grab";
			grabCarried = "AinjPfalMstpSnonWnonDnon_carried_Up";
		};
		
		class InjuredManDraggedDeadActions : InjuredManDraggedActions {
			released = "AdthPpneMstpSnonWnonDnonB";
		};
		
		class ParachuteFreeFall : NoActions {
			upDegree = -1;
			Stop = "HaloFreeFall_non";
			StopRelaxed = "HaloFreeFall_non";
			Default = "HaloFreeFall_non";
			WalkF = "HaloFreeFall_F";
			WalkLF = "HaloFreeFall_FL";
			WalkRF = "HaloFreeFall_FR";
			WalkL = "HaloFreeFall_L";
			WalkR = "HaloFreeFall_R";
			WalkLB = "HaloFreeFall_BL";
			WalkRB = "HaloFreeFall_BR";
			WalkB = "HaloFreeFall_B";
			SlowF = "HaloFreeFall_F";
			SlowLF = "HaloFreeFall_FL";
			SlowRF = "HaloFreeFall_FR";
			SlowL = "HaloFreeFall_L";
			SlowR = "HaloFreeFall_R";
			SlowLB = "HaloFreeFall_BL";
			SlowRB = "HaloFreeFall_BR";
			SlowB = "HaloFreeFall_B";
			FastF = "HaloFreeFall_F";
			FastLF = "HaloFreeFall_FL";
			FastRF = "HaloFreeFall_FR";
			FastL = "HaloFreeFall_L";
			FastR = "HaloFreeFall_R";
			FastLB = "HaloFreeFall_BL";
			FastRB = "HaloFreeFall_BR";
			FastB = "HaloFreeFall_B";
			EvasiveLeft = "HaloFreeFall_FL";
			EvasiveForward = "HaloFreeFall_F";
			EvasiveRight = "HaloFreeFall_FR";
		};
		
		class RifleKneelActionsRunF : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDf";
			Up = "AmovPercMrunSrasWrflDf";
		};
		
		class RifleKneelActionsWlkF : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDf";
			Up = "AmovPercMwlkSrasWrflDf";
		};
		
		class RifleKneelActionsRunFL : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDfl";
			Up = "AmovPercMrunSrasWrflDfl";
		};
		
		class RifleKneelActionsWlkFL : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDfl";
			Up = "AmovPercMwlkSrasWrflDfl";
		};
		
		class RifleKneelActionsRunL : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrfldl";
			Up = "AmovPercMrunSrasWrfldl";
		};
		
		class RifleKneelActionsWlkL : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrfldl";
			Up = "AmovPercMwlkSrasWrfldl";
		};
		
		class RifleKneelActionsRunBL : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrfldbl";
			Up = "AmovPercMrunSrasWrfldbl";
		};
		
		class RifleKneelActionsWlkBL : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrfldbl";
			Up = "AmovPercMwlkSrasWrfldbl";
		};
		
		class RifleKneelActionsRunB : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDb";
			Up = "AmovPercMrunSrasWrflDb";
		};
		
		class RifleKneelActionsWlkB : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDb";
			Up = "AmovPercMwlkSrasWrflDb";
		};
		
		class RifleKneelActionsRunBR : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDbr";
			Up = "AmovPercMrunSrasWrflDbr";
		};
		
		class RifleKneelActionsWlkBR : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDbr";
			Up = "AmovPercMwlkSrasWrflDbr";
		};
		
		class RifleKneelActionsRunR : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDr";
			Up = "AmovPercMrunSrasWrflDr";
		};
		
		class RifleKneelActionsWlkR : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDr";
			Up = "AmovPercMwlkSrasWrflDr";
		};
		
		class RifleKneelActionsRunFR : RifleKneelActions {
			PlayerStand = "AmovPercMrunSrasWrflDfr";
			Up = "AmovPercMrunSrasWrflDfr";
		};
		
		class RifleKneelActionsWlkFR : RifleKneelActions {
			PlayerStand = "AmovPercMwlkSrasWrflDfr";
			Up = "AmovPercMwlkSrasWrflDfr";
		};
	};
	primaryActionMaps[] = {"RifleProneActions_injured", "DeadActions", "LauncherKneelActions", "BinocProneRflActions", "BinocProneCivilActions", "RifleProneActions", "PistolProneActions", "RifleKneelActions", "PistolKneelActions", "RifleStandActions", "PistolStandActions", "RifleLowStandActions", "SwimmingActions", "CivilStandActions", "BinocKneelRflActions", "BinocStandRflActions"};
	
	class Interpolations {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	
	class BlendAnims {
		aimingDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
		empty[] = {};
	};
	
	class AgonyBase : Default {
		disableWeaponsLong = "true";
		enableOptics = "false";
		actions = "InjuredManActions";
		headBobMode = 2;
		headBobStrength = -1;
		collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
		collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
	};
	
	class AgonyBaseRfl : AgonyBase {
		actions = "InjuredManActionsRfl";
	};
	
	class InjuredMovedBase : Default {
		actions = "InjuredManCarriedActions";
		speed = 1;
		visibleSize = 0.600122;
		headBobMode = 1;
		headBobStrength = -1;
	};
};
