
class DayZMontage : RscStandardDisplay {
	idd = 50666;
	movingenable = 0;
	
	class Controls {
		class pic01 : RscPicture {
			idc = 1001;
			x = "0.17 * safezoneW + safezoneX";
			y = "0.17 * safezoneH + safezoneY";
			w = "0.65 * safezoneW";
			h = "0.65 * safezoneH";
			colorText[] = {0, 0, 0, 0};
			text = "\dayz\ui\intro\screen_01_ca.paa";
		};
		
		class pic02 : pic01 {
			idc = 1002;
			text = "\dayz\ui\intro\screen_02_ca.paa";
		};
		
		class pic03 : pic01 {
			idc = 1003;
			text = "\dayz\ui\intro\screen_04_ca.paa";
		};
		
		class pic04 : pic01 {
			idc = 1004;
			text = "\dayz\ui\intro\screen_03_ca.paa";
		};
		
		class pic05 : pic01 {
			idc = 1005;
			text = "\dayz\ui\intro\screen_05_ca.paa";
		};
		
		class pic06 : pic01 {
			idc = 1006;
			text = "\dayz\ui\intro\screen_06_ca.paa";
		};
		
		class pic07 : pic01 {
			idc = 1007;
			text = "\dayz\ui\intro\screen_07_ca.paa";
		};
		
		class pic08 : pic01 {
			idc = 1008;
			text = "\dayz\ui\intro\screen_08_ca.paa";
		};
		
		class pic09 : pic01 {
			idc = 1009;
			text = "\dayz\ui\intro\screen_09_ca.paa";
		};
		
		class pic10 : pic01 {
			idc = 1010;
			text = "\dayz\ui\intro\screen_10_ca.paa";
		};
		
		class pic11 : pic01 {
			idc = 1011;
			text = "\dayz\ui\intro\screen_11_ca.paa";
		};
		
		class pic12 : pic01 {
			idc = 1012;
			text = "\dayz\ui\intro\screen_12_ca.paa";
		};
		
		class pic13 : pic01 {
			idc = 1013;
			text = "\dayz\ui\intro\screen_13_ca.paa";
		};
	};
};
