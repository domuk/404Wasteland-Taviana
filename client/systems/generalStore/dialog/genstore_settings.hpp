#include "genstoreDefines.sqf"

class genstored {

	idd = genstore_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] execVM 'client\systems\generalStore\populateGenStore.sqf'";

	class controlsBackground {
		
		class MainBackground: RscPicture
		{
			idc = -1;
			text = "\ca\ui\data\ui_background_controlers_ca.paa";

			x = 0.1875 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.837499 * safezoneW;
			h = 0.661111 * safezoneH;
		};
		
		class ItemSelectedPicture: RscPicture
		{
			idc = genstore_item_pic;
			text = "";

			x = 0.5325 * safezoneW + safezoneX;
			y = 0.250 * safezoneH + safezoneY;
			w = 0.030 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ItemSelectedInfo: RscStructuredText
		{
			idc = genstore_item_Info;
			text = "";

			x = 0.440104 * safezoneW + safezoneX;
			y = 0.50463 * safezoneH + safezoneY;
			w = 0.214166 * safezoneW;
			h = 0.192963 * safezoneH;
		};

		class ItemSelectedPrice: RscStructuredText
		{
			idc = genstore_item_TEXT;
			text = "";

			x = 0.502604 * safezoneW + safezoneX;
			y = 0.317594 * safezoneH + safezoneY;
			w = 0.0891667 * safezoneW;
			h = 0.068889 * safezoneH;
		};

		class DialogTitleText: RscText
		{
			idc = -1;
			text = "General Store Menu";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.175 * safezoneH + safezoneY;
			w = 0.0880 * safezoneW;
			h = 0.0448148 * safezoneH;
		};

		class PlayerMoneyText: RscText
		{
			idc = genstore_money;
			text = "Cash:";

			x = 0.6875 * safezoneW + safezoneX;
			y = 0.175 * safezoneH + safezoneY;
			w = 0.0844792 * safezoneW;
			h = 0.0448148 * safezoneH;
		};

		class CartTotalText: RscText
		{
			idc = genstore_total;
			text = "Total: $0";

			x = 0.6875 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0844792 * safezoneW;
			h = 0.0448148 * safezoneH;
		};
		
	};
	
	class controls {
		
		class SelectionList: RscListbox
		{
			idc = genstore_item_list;
			onLBSelChanged = "[] execvm 'client\systems\generalStore\itemInfo.sqf'";

			x = 0.3125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0916666 * safezoneW;
			h = 0.422222 * safezoneH;
		};

		class CartList: RscListbox
		{
			idc = genstore_cart;
			onLBSelChanged = "[] execvm 'client\systems\generalStore\itemInfo.sqf'";

			x = 0.690104 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0916666 * safezoneW;
			h = 0.422222 * safezoneH;
		};

		class StoreButton0: w_RscButton
		{	
			idc = genstore_iteminventory;

			text = "Items";
			onButtonClick = "[] execVM 'client\systems\generalStore\populateSwitch.sqf'";
			
			x = 0.203125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;
		};

		class AddToCart : w_RscButton {
			
			text = "Add";
			onButtonClick = "[] execVM 'client\systems\generalStore\addToCart.sqf'";
			
			x = 0.515625 * safezoneW + safezoneX;
			y = 0.375 * safezoneH + safezoneY;
			w = 0.065 * safezoneW;
			h = 0.040 * safezoneH;
		};

		class RemoveFromCart : w_RscButton {

			text = "Remove";
			onButtonClick = "[] execVM 'client\systems\generalStore\removeFromCart.sqf'";

			x = 0.515625 * safezoneW + safezoneX;
			y = 0.425 * safezoneH + safezoneY;
			w = 0.065 * safezoneW;
			h = 0.040 * safezoneH;
		};

		class CancelButton : w_RscButton {
			
			idc = -1;
			text = "Cancel";
			onButtonClick = "closeDialog 0;";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.072 * safezoneW;
			h = 0.040 * safezoneH;
			color[] = {0.95,0.1,0.1,1};
		};

		class SaleBuy : w_RscButton {
			
			idc = genstore_switch;

			text = "Sell Items";
			onButtonClick = "[] execVM 'client\systems\generalStore\switchMode.sqf'";

			x = 0.450 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.096 * safezoneW;
			h = 0.040 * safezoneH;
		};

		class BuyToPlayer : w_RscButton {
			
			idc = genstore_buysell;

			text = "Buy";
			onButtonClick = "[0] execVM 'client\systems\generalStore\buysellSwitch.sqf'";

			x = 0.703125 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;
			color[] = {0.1,0.95,0.1,1};
		};
	};
};