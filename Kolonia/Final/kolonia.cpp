#ifndef SBUTTON_H
#include "SButton.h"
#endif
#ifndef STEXTURE_H
#include "STexture.h"
#endif
#ifndef STIMER_H
#include "STimer.h"
#endif
#ifndef SDL_FUNCTIONS_H
#include "sdl_functions.h"
#endif
#ifndef SDL_OBJECTS_H
#include "sdl_objects.h"
#endif
#ifndef SDL_VARIABLES_H
#include "sdl_variables.h"
#endif
#ifndef SDL_CONSTS_H
#include "sdl_consts.h"
#endif
#ifndef SDL_ENUMS_H
#include "sdl_enums.h"
#endif
#include "core/House.h"
#include "core/Industrial.h"
#include "core/Magazine.h"
#include "core/Public.h"
#include "core/Production.h"
#include "core/Processing.h"
#include "core/Resource.h"
#include "core/People.h"
#include <conio.h>

using namespace std;

////


int main(int argc, char* args[])
{
	// House(bricksToBuild, toolsToBuild, woodToBuild, inhabitants, startPeople, buildingID0, buildingID1, buildingID2)
	{ int tab0[1] = { -1 };
	tHouse[0] = new House(0, 0, 3, 3, 1, -1, -1, -1, tab0, sizeof(tab0)); } 	/* Pioneers House */ { int tab1[2] = { 4, 7 };
	tHouse[1] = new House(0, 1, 3, 7, 2, 4, 7, -1, tab1, sizeof(tab1)); }		/* Settlers House */ { int tab2[3] = { 2, 9, 11 };
	tHouse[2] = new House(6, 2, 2, 15, 3, 2, 9, 11, tab2, sizeof(tab2)); }		/* Citizens House */ { int tab3[3] = { 0, 1, 6 };
	tHouse[3] = new House(9, 3, 3, 25, 4, 0, 1, 6, tab3, sizeof(tab3)); }		/* Merchansts House */ { int tab4[3] = { 3, 5, 10 };
	tHouse[4] = new House(12, 3, 3, 40, 5, 3, 5, 10, tab4, sizeof(tab4)); }		/* Aristorcats House */

	Magazine WareHouse;

	// Public(goldToBuild, bricksToBuild, toolsToBuild, woodToBuild, maintenanceActiveCost, size, peopleToBuild, peopleClass)

	tPublic[0] = new Public(450, 9, 4, 4, 30, 4, 50, 2);			// Doctor
	tPublic[1] = new Public(1200, 19, 6, 5, 60, 12, 210, 2);		// Public Bath	
	tPublic[2] = new Public(150, 0, 3, 5, 15, 4, 15, 1);			// Fire Department
	tPublic[3] = new Public(750, 19, 6, 5, 60, 9, 250, 3);			// University
	tPublic[4] = new Public(100, 0, 2, 5, 5, 2, 40, 0);				// Chapel
	tPublic[5] = new Public(5000, 50, 15, 20, 40, 24, 1500, 3);		// Cathedral
	tPublic[6] = new Public(1600, 25, 7, 7, 50, 12, 150, 2);		// Church
	tPublic[7] = new Public(200, 0, 4, 10, 10, 12, 75, 0);			// Marketplace
	tPublic[8] = new Public(7500, 70, 25, 25, 90, 35, 2500, 4);		// Palace 
	tPublic[9] = new Public(450, 9, 4, 4, 30, 4, 100, 1);			// School
	tPublic[10] = new Public(1200, 19, 2, 5, 80, 9, 300, 3);		// Theatre
	tPublic[11] = new Public(250, 6, 3, 4, 15, 6, 50, 1);			// Tavern

	// Production(moneyToBuild, bricksToBuild, toolsToBuild, woodToBuild, maintenanceActiveCost, maintenancePassiveCost, size, magazineCapacity, peopleToBuild, peopleClass, productID)

	tProduction[0] = new Production(200, 6, 2, 3, 25, 10, 16, 9, 200, 2, 3);		// Cotton Plantation		
	tProduction[1] = new Production(50, 0, 2, 0, 5, 0, 4, 10, 0, -1, 19);			// Foresters Lodge
	tProduction[2] = new Production(100, 0, 2, 5, 5, 0, 16, 6, 75, 1, 7);			// Grain Farm
	tProduction[3] = new Production(300, 8, 2, 3, 35, 15, 16, 4, 75, 1, 12);		// Spice Farm
	tProduction[4] = new Production(50, 0, 2, 2, 5, 0, 4, 3, 0, -1, 10);			// Hunters Hut
	tProduction[5] = new Production(300, 8, 2, 3, 35, 15, 16, 6, 200, 2, 13);		// Cocoa Plantation	
	tProduction[6] = new Production(100, 0, 1, 4, 5, 0, 16, 4, 30, 0, 6);			// Cattle Farm
	tProduction[7] = new Production(200, 0, 2, 4, 5, 0, 16, 8, 0, -1, 3);			// Sheep Farm
	tProduction[8] = new Production(300, 8, 2, 3, 35, 15, 16, 6, 40, 1, 14);		// Winery
	tProduction[9] = new Production(300, 8, 2, 3, 35, 15, 16, 6, 40, 1, 5);			// Tobacco Plantation
	tProduction[10] = new Production(300, 8, 2, 3, 25, 10, 16, 6, 40, 1, 4);		// Sugarcane Plantation
	tProduction[11] = new Production(1000, 5, 10, 20, 60, 20, 3, 4, 120, 1, 1);		// Iron Mine
	tProduction[12] = new Production(1800, 7, 15, 30, 60, 20, 3, 4, 450, 2, 1);		// Deep Iron Mine
	tProduction[13] = new Production(1000, 5, 10, 20, 60, 20, 3, 4, 150, 2, 2);		// Gold Mine
	tProduction[14] = new Production(100, 0, 3, 5, 5, 0, 1, 4, 0, -1, 10);			// Fisters Hut
	tProduction[15] = new Production(100, 0, 5, 5, 5, 0, 4, 8, 15, 1, 20);			// Stone Mason

	// Processing(moneyToBuild, bricksToBuild, toolsToBuild, woodToBuild, maintenanceActiveCost, maintenancePassiveCost, magazineCapacity, peopleToBuild, peopleClass, productID, materialID, productNumber, materialNumber)

	tProcessing[0] = new Processing(150, 0, 2, 6, 5, 0, 4, 75, 1, 10, 8, 1, 2);			// Bakery
	tProcessing[1] = new Processing(200, 4, 3, 1, 25, 10, 5, 120, 1, 9, 1, 1, 1);		// Ore Refenery
	tProcessing[2] = new Processing(1500, 10, 7, 2, 45, 20, 4, 250, 3, 17, 2, 2, 1);	// Gold Smith
	tProcessing[3] = new Processing(150, 10, 3, 4, 5, 0, 4, 30, 0, 10, 6, 1, 2);		// Butcher Shop
	tProcessing[4] = new Processing(200, 5, 3, 2, 25, 7, 4, 40, 1, 14, 4, 1, 2);		// Rum Distillery
	tProcessing[5] = new Processing(150, 2, 3, 6, 10, 5, 4, 200, 2, 16, 15, 1, 1);		// Clothiers
	tProcessing[6] = new Processing(200, 5, 3, 2, 20, 10, 4, 40, 1, 11, 5, 1, 2);		// TobaccoProduction
	tProcessing[7] = new Processing(200, 7, 4, 3, 20, 10, 4, 75, 1, 15, 3, 1, 1);		// WeavingMill
	tProcessing[8] = new Processing(200, 0, 3, 6, 10, 5, 4, 0, -1, 15, 3, 1, 2);		// WeavingHut
	tProcessing[9] = new Processing(150, 5, 3, 2, 25, 10, 4, 100, 1, 18, 9, 2, 1);		// ToolSmithy
	tProcessing[10] = new Processing(100, 0, 3, 6, 5, 0, 6, 75, 1, 10, 7, 1, 2);		// WindMill

	// People(tax)
	tPeople[0] = new People(1);		// Pioneers
	tPeople[1] = new People(1);		// Settlers
	tPeople[2] = new People(1);		// Citizens
	tPeople[3] = new People(2);		// Merchants
	tPeople[4] = new People(2);		// Aristocrats

	// Resource(price)
	tResource[0] = new Resource(1);			// Money
	tResource[1] = new Resource(60);		// Iron Ore
	tResource[2] = new Resource(465);		// Gold
	tResource[3] = new Resource(16);		// Wool
	tResource[4] = new Resource(19);		// Sugar
	tResource[5] = new Resource(23);		// Tobacco
	tResource[6] = new Resource(6);			// Cattle
	tResource[7] = new Resource(3);			// Grain
	tResource[8] = new Resource(3);			// Flour
	tResource[9] = new Resource(84);		// Iron
	tResource[10] = new Resource(17);		// Food
	tResource[11] = new Resource(65);		// Tobacco Products
	tResource[12] = new Resource(40);		// Spices
	tResource[13] = new Resource(33);		// Cocoa
	tResource[14] = new Resource(52);		// Liquor
	tResource[15] = new Resource(32);		// Cloth
	tResource[16] = new Resource(130);		// Clothes
	tResource[17] = new Resource(590);		// Jewerly
	tResource[18] = new Resource(80);		// Tools
	tResource[19] = new Resource(20);		// Wood
	tResource[20] = new Resource(30);		// Bricks

	tResource[0]->increase(5000);
	tResource[18]->increase(50);
	tResource[19]->increase(70);
	tResource[20]->increase(13);

	// Wlaczenie SDL i stworzenie okna
	if (!init())
		cout << "Blad inicjalizacji!" << endl;
	else
	{
		// Ladowanie mediow
		if (!loadMedia())
			cout << "Nie mozna zaladowac mediow!" << endl;
		else
		{
			// Flaga glownej petli
			bool quit = false;

			LargeViewport.x = 0;
			LargeViewport.y = 0;
			LargeViewport.w = SCREEN_WIDTH;
			LargeViewport.h = SCREEN_HEIGHT;

			LeftViewport.x = 0;
			LeftViewport.y = 0;
			LeftViewport.w = SCREEN_WIDTH / 3;
			LeftViewport.h = SCREEN_HEIGHT;

			RightViewport.x = SCREEN_WIDTH / 3;
			RightViewport.y = 0;
			RightViewport.w = 2 * SCREEN_WIDTH / 3;
			RightViewport.h = SCREEN_HEIGHT;

			gFont = TTF_OpenFont("fonts/times.ttf", 19);
			gFont_12 = TTF_OpenFont("fonts/times.ttf", 12);


			// Przyciski menu
			// przycisk(akcja, szerokosc, wysokosc, poz_x, poz_y, nazwa_pliku)	
			SButton new_game_button(NEW_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 624, 400, "new.png");
			SButton continue_button(CONTINUE_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 624, 350, "continue.png");
			SButton load_game_button(LOAD_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 624, 480, "load.png");
			SButton exit_game_button(EXIT_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 624, 660, "exit.png");
			SButton main_menu_button(MAIN_MENU, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 624, 660, "menu.png");
			SButton save_game_button(SAVE_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 150, 732, "save.png");
			SButton back_button(CONTINUE_GAME, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 300, 732, "back.png");
			SButton stats_button(VIEW_STATS, MAIN_BUTTON_WIDTH, MAIN_BUTTON_HEIGHT, 5, 732, "stats.png");

			// Przyciski splashy
			SButton ind_button(PROCESSING_BUTTON, BUILDINGS_BUTTON_WIDTH, BUILDINGS_BUTTON_HEIGHT, 0, 0, "/buildings/ind.png");
			SButton prod_button(PRODUCTION, BUILDINGS_BUTTON_WIDTH, BUILDINGS_BUTTON_HEIGHT, 0, 256, "/buildings/prod.png");
			SButton pub_button(PUBLIC, BUILDINGS_BUTTON_WIDTH, BUILDINGS_BUTTON_HEIGHT, 0, 512, "/buildings/pub.png");

			// Przyciski: kup, sprzedaj
			SButton buy_button(BUY, BUY_BUTTON_WIDTH, BUY_BUTTON_HEIGHT, 335, 250, "buy.png");
			SButton sell_button(SELL, BUY_BUTTON_WIDTH, BUY_BUTTON_HEIGHT, 335, 345, "sell.png");
			SButton cancel_NAV_button(NONE, BUY_BUTTON_WIDTH, BUY_BUTTON_HEIGHT, 335, 440, "cancel_nav.png");
			SButton cancel_AV_button(CANCEL, BUY_BUTTON_WIDTH, BUY_BUTTON_HEIGHT, 335, 440, "cancel_av.png");

			// Przyciski kupowania zasobow
			// przycisk(id, akcja, szerokosc, wysokosc, poz_x, poz_y, nazwa_pliku)
			SButton buy_iron_ore_button(1, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 244, "/resources/iron_ore.png");
			SButton buy_gold_button(2, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 244, "/resources/gold.png");
			SButton buy_cottom_button(3, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 244, "/resources/cottom.png");
			SButton buy_sugarcane_button(4, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 244, "/resources/sugarcane.png");
			SButton buy_food_button(10, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 244, "/resources/food.png");

			SButton buy_tobacco_button(5, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 318, "/resources/tobacco.png");
			SButton buy_cattle_button(6, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 318, "/resources/cattle.png");
			SButton buy_grain_button(7, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 318, "/resources/grain.png");
			SButton buy_flour_button(8, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 318, "/resources/flour.png");
			SButton buy_alcohol_button(14, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 318, "/resources/alcohol.png");

			SButton buy_spices_button(12, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 387, "/resources/spices.png");
			SButton buy_textiles_button(15, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 387, "/resources/textiles.png");
			SButton buy_clothes_button(16, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 387, "/resources/clothes.png");
			SButton buy_cigarettes_button(11, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 387, "/resources/cigarettes.png");
			SButton buy_jewelry_button(17, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 387, "/resources/jewelry.png");

			SButton buy_tools_button(18, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 456, "/resources/tools.png");
			SButton buy_wood_button(19, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 456, "/resources/wood.png");
			SButton buy_bricks_button(20, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 456, "/resources/bricks.png");
			SButton buy_iron_button(9, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 456, "/resources/iron.png");
			SButton buy_cocoa_button(13, BUY_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 456, "/resources/cocoa.png");

			// Przyciski sprzedazy zasobow
			// Przycisk(id, akcja, szerokosc, wysokosc, poz_x, poz_y, nazwa_pliku)
			SButton sell_iron_ore_button(1, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 244, "/resources/iron_ore.png");
			SButton sell_gold_button(2, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 244, "/resources/gold.png");
			SButton sell_cottom_button(3, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 244, "/resources/cottom.png");
			SButton sell_sugarcane_button(4, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 244, "/resources/sugarcane.png");
			SButton sell_food_button(10, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 244, "/resources/food.png");

			SButton sell_tobacco_button(5, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 318, "/resources/tobacco.png");
			SButton sell_cattle_button(6, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 318, "/resources/cattle.png");
			SButton sell_grain_button(7, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 318, "/resources/grain.png");
			SButton sell_flour_button(8, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 318, "/resources/flour.png");
			SButton sell_alcohol_button(14, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 318, "/resources/alcohol.png");

			SButton sell_spices_button(12, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 387, "/resources/spices.png");
			SButton sell_textiles_button(15, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 387, "/resources/textiles.png");
			SButton sell_clothes_button(16, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 387, "/resources/clothes.png");
			SButton sell_cigarettes_button(11, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 387, "/resources/cigarettes.png");
			SButton sell_jewelry_button(17, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 387, "/resources/jewelry.png");

			SButton sell_tools_button(18, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 5, 456, "/resources/tools.png");
			SButton sell_wood_button(19, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 70, 456, "/resources/wood.png");
			SButton sell_bricks_button(20, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 135, 456, "/resources/bricks.png");
			SButton sell_iron_button(9, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 199, 456, "/resources/iron.png");
			SButton sell_cocoa_button(13, SELL_RESOURCE, RESOURCES_BUTTON_WIDTH, RESOURCES_BUTTON_HEIGHT, 263, 456, "/resources/cocoa.png");

			// Przyciski Buduj i Zburz
			// Przycisk(id, akcja, szerokosc, wysokosc, poz_x, poz_y, nazwa_pliku)

			// Tablica Production
			// build_AV		Production
			SButton* Production_build_AV[16];
			Production_build_AV[0] = new SButton(0, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_3, "build_av.png");			// CottonPlantation
			Production_build_AV[1] = new SButton(1, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_av.png");			// ForestersLodge
			Production_build_AV[2] = new SButton(2, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_av.png");			// GrainFarm
			Production_build_AV[3] = new SButton(3, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_av.png");			// SpiceFarm
			Production_build_AV[4] = new SButton(4, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_av.png");			// HuntersHut
			Production_build_AV[5] = new SButton(5, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_3, "build_av.png");			// CocoaPlantation
			Production_build_AV[6] = new SButton(6, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_av.png");			// CattleFarm
			Production_build_AV[7] = new SButton(7, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_av.png");			// SheepFarm
			Production_build_AV[8] = new SButton(8, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_av.png");			// Winery
			Production_build_AV[9] = new SButton(9, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_av.png");			// TobaccoPlantation
			Production_build_AV[10] = new SButton(10, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_av.png");		// SugarcanePlantation
			Production_build_AV[11] = new SButton(11, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_3, "build_av.png");		// IronMine
			Production_build_AV[12] = new SButton(12, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_3, "build_av.png");		// DeepIronMine
			Production_build_AV[13] = new SButton(13, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_3, "build_av.png");		// GoldMine
			Production_build_AV[14] = new SButton(14, BUILD_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_av.png");		// FishersHut
		
			// build_NAV	Production
			SButton* Production_build_NAV[16];
			Production_build_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_3, "build_nav.png");		// CottonPlantation
			Production_build_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_nav.png");		// ForestersLodge
			Production_build_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_nav.png");		// GrainFarm
			Production_build_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_nav.png");		// SpiceFarm
			Production_build_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_nav.png");		// HuntersHut
			Production_build_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_3, "build_nav.png");		// CocoaPlantation
			Production_build_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_nav.png");		// CattleFarm
			Production_build_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_nav.png");		// SheepFarm
			Production_build_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_nav.png");		// Winery
			Production_build_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_nav.png");		// TobaccoPlantation
			Production_build_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_nav.png");		// SugarcanePlantation
			Production_build_NAV[11] = new SButton(11, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_3, "build_nav.png");		// IronMine
			Production_build_NAV[12] = new SButton(12, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_3, "build_nav.png");		// DeepIronMine
			Production_build_NAV[13] = new SButton(13, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_3, "build_nav.png");		// GoldMine
			Production_build_NAV[14] = new SButton(14, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_nav.png");		// FishersHut

			// destroy_AV	Production
			SButton* Production_destroy_AV[16];
			Production_destroy_AV[0] = new SButton(0, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_3, "destroy_av.png");		// CottonPlantation
			Production_destroy_AV[1] = new SButton(1, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_av.png");		// ForestersLodge
			Production_destroy_AV[2] = new SButton(2, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_av.png");		// GrainFarm
			Production_destroy_AV[3] = new SButton(3, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_av.png");		// SpiceFarm
			Production_destroy_AV[4] = new SButton(4, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_av.png");		// HuntersHut
			Production_destroy_AV[5] = new SButton(5, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_3, "destroy_av.png");		// CocoaPlantation
			Production_destroy_AV[6] = new SButton(6, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_av.png");		// CattleFarm
			Production_destroy_AV[7] = new SButton(7, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_av.png");		// SheepFarm
			Production_destroy_AV[8] = new SButton(8, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_av.png");		// Winery
			Production_destroy_AV[9] = new SButton(9, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_av.png");		// TobaccoPlantation
			Production_destroy_AV[10] = new SButton(10, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_av.png");	// SugarcanePlantation
			Production_destroy_AV[11] = new SButton(11, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_3, "destroy_av.png");	// IronMine
			Production_destroy_AV[12] = new SButton(12, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_3, "destroy_av.png");	// DeepIronMine
			Production_destroy_AV[13] = new SButton(13, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_3, "destroy_av.png");	// GoldMine
			Production_destroy_AV[14] = new SButton(14, DESTROY_PROD, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_av.png");	// FishersHut

			// destroy_NAV	Production
			SButton* Production_destroy_NAV[16];
			Production_destroy_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_3, "destroy_nav.png");		// CottonPlantation
			Production_destroy_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_nav.png");		// ForestersLodge
			Production_destroy_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_nav.png");		// GrainFarm
			Production_destroy_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_nav.png");		// SpiceFarm
			Production_destroy_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_nav.png");		// HuntersHut
			Production_destroy_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_3, "destroy_nav.png");		// CocoaPlantation
			Production_destroy_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_nav.png");		// CattleFarm
			Production_destroy_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_nav.png");		// SheepFarm
			Production_destroy_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_nav.png");		// Winery
			Production_destroy_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_nav.png");		// TobaccoPlantation
			Production_destroy_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_nav.png");		// SugarcanePlantation
			Production_destroy_NAV[11] = new SButton(11, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_3, "destroy_nav.png");		// IronMine
			Production_destroy_NAV[12] = new SButton(12, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_3, "destroy_nav.png");		// DeepIronMine
			Production_destroy_NAV[13] = new SButton(13, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_3, "destroy_nav.png");		// GoldMine
			Production_destroy_NAV[14] = new SButton(14, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_nav.png");		// FishersHut

			// Tablica Processing
			// build_AV		Processing
			SButton* Processing_build_AV[12];
			Processing_build_AV[0] = new SButton(0, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_av.png");			// Bakery
			Processing_build_AV[1] = new SButton(1, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_av.png");			// OreRafinery
			Processing_build_AV[2] = new SButton(2, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_3, "build_av.png");			// GoldSmith
			Processing_build_AV[3] = new SButton(3, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_av.png");			// ButchersShop
			Processing_build_AV[4] = new SButton(4, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_av.png");			// RumDistillery
			Processing_build_AV[5] = new SButton(5, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_3, "build_av.png");			// Clothiers
			Processing_build_AV[6] = new SButton(6, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_av.png");			// TobaccoProduction
			Processing_build_AV[7] = new SButton(7, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_av.png");			// WeavingMill
			Processing_build_AV[8] = new SButton(8, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_av.png");			// WeavingHut
			Processing_build_AV[9] = new SButton(9, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_av.png");			// ToolSmith
			Processing_build_AV[10] = new SButton(10, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_av.png");		// WindMill
			Processing_build_AV[11] = new SButton(15, BUILD_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_av.png");		// StoneMason

			// build_NAV	Processing
			SButton* Processing_build_NAV[12];
			Processing_build_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_nav.png");			// Bakery
			Processing_build_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_nav.png");			// OreRafinery
			Processing_build_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_3, "build_nav.png");			// GoldSmith
			Processing_build_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_nav.png");			// ButchersShop
			Processing_build_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_nav.png");			// RumDistillery
			Processing_build_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_3, "build_nav.png");			// Clothiers
			Processing_build_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_nav.png");			// TobaccoProduction
			Processing_build_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_nav.png");			// WeavingMill
			Processing_build_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_nav.png");			// WeavingHut
			Processing_build_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_nav.png");			// ToolSmith
			Processing_build_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_nav.png");		// WindMill
			Processing_build_NAV[11] = new SButton(15, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_nav.png");		// StoneMason

			// destroy_AV	Processing	
			SButton* Processing_destroy_AV[12];
			Processing_destroy_AV[0] = new SButton(0, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_av.png");			// Bakery
			Processing_destroy_AV[1] = new SButton(1, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_av.png");			// OreRafinery
			Processing_destroy_AV[2] = new SButton(2, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_3, "destroy_av.png");			// GoldSmith
			Processing_destroy_AV[3] = new SButton(3, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_av.png");			// ButchersShop
			Processing_destroy_AV[4] = new SButton(4, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_av.png");			// RumDistillery
			Processing_destroy_AV[5] = new SButton(5, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_3, "destroy_av.png");			// Clothiers
			Processing_destroy_AV[6] = new SButton(6, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_av.png");			// TobaccoProduction
			Processing_destroy_AV[7] = new SButton(7, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_av.png");			// WeavingMill
			Processing_destroy_AV[8] = new SButton(8, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_av.png");			// WeavingHut
			Processing_destroy_AV[9] = new SButton(9, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_av.png");			// ToolSmith
			Processing_destroy_AV[10] = new SButton(10, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_av.png");		// WindMill
			Processing_destroy_AV[11] = new SButton(15, DESTROY_PROC, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_av.png");		// StoneMason

			// destroy_NAV	Processing
			SButton* Processing_destroy_NAV[12];
			Processing_destroy_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_nav.png");			// Bakery
			Processing_destroy_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_nav.png");			// OreRafinery
			Processing_destroy_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_3, "destroy_nav.png");			// GoldSmith
			Processing_destroy_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_nav.png");			// ButchersShop
			Processing_destroy_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_nav.png");			// RumDistillery
			Processing_destroy_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_3, "destroy_nav.png");			// Clothiers
			Processing_destroy_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_nav.png");			// TobaccoProduction
			Processing_destroy_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_nav.png");			// WeavingMill
			Processing_destroy_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_nav.png");			// WeavingHut
			Processing_destroy_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_nav.png");			// ToolSmith
			Processing_destroy_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_nav.png");			// WindMill
			Processing_destroy_NAV[11] = new SButton(15, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_nav.png");			// StoneMason

			// Tablica Public
			// build_AV		Public
			SButton* Public_build_AV[12];
			Public_build_AV[0] = new SButton(0, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_av.png");		// Doctor
			Public_build_AV[1] = new SButton(1, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_av.png");		// Public Bath	
			Public_build_AV[2] = new SButton(2, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_av.png");		// Fire Department
			Public_build_AV[3] = new SButton(3, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_av.png");		// University
			Public_build_AV[4] = new SButton(4, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_av.png");		// Chapel
			Public_build_AV[5] = new SButton(5, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_3, "build_av.png");		// Cathedral
			Public_build_AV[6] = new SButton(6, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_av.png");		// Church
			Public_build_AV[7] = new SButton(7, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_av.png");		// Marketplace
			Public_build_AV[8] = new SButton(8, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 - 53, W_3, "build_av.png");		// Palace 
			Public_build_AV[9] = new SButton(9, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_av.png");		// School
			Public_build_AV[10] = new SButton(10, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_av.png");	// Theatre
			Public_build_AV[11] = new SButton(11, BUILD_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_av.png");	// Tavern

			// build_NAV	Public
			SButton* Public_build_NAV[12];
			Public_build_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_2, "build_nav.png");		// Doctor
			Public_build_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_2, "build_nav.png");		// Public Bath	
			Public_build_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_1, "build_nav.png");		// Fire Department
			Public_build_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4, W_2, "build_nav.png");		// University
			Public_build_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_nav.png");		// Chapel
			Public_build_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_3, "build_nav.png");		// Cathedral
			Public_build_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_2, "build_nav.png");		// Church
			Public_build_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_nav.png");		// Marketplace
			Public_build_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 - 53, W_3, "build_nav.png");		// Palace 
			Public_build_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_1, "build_nav.png");		// School
			Public_build_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_2, "build_nav.png");	// Theatre
			Public_build_NAV[11] = new SButton(11, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1	, "build_nav.png");	// Tavern

			// destroy_AV	Public
			SButton* Public_destroy_AV[12];
			Public_destroy_AV[0] = new SButton(0, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_av.png");		// Doctor
			Public_destroy_AV[1] = new SButton(1, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_av.png");		// Public Bath	
			Public_destroy_AV[2] = new SButton(2, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_av.png");		// Fire Department
			Public_destroy_AV[3] = new SButton(3, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_av.png");		// University
			Public_destroy_AV[4] = new SButton(4, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_av.png");		// Chapel
			Public_destroy_AV[5] = new SButton(5, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_3, "destroy_av.png");		// Cathedral
			Public_destroy_AV[6] = new SButton(6, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_av.png");		// Church
			Public_destroy_AV[7] = new SButton(7, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_av.png");		// Marketplace
			Public_destroy_AV[8] = new SButton(8, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_3, "destroy_av.png");			// Palace 
			Public_destroy_AV[9] = new SButton(9, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_av.png");		// School
			Public_destroy_AV[10] = new SButton(10, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_av.png");	// Theatre
			Public_destroy_AV[11] = new SButton(11, DESTROY_PUB, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_av.png");	// Tavern

			// destroy_NAV	Public
			SButton* Public_destroy_NAV[12];
			Public_destroy_NAV[0] = new SButton(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_2, "destroy_nav.png");		// Doctor
			Public_destroy_NAV[1] = new SButton(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_2, "destroy_nav.png");		// Public Bath	
			Public_destroy_NAV[2] = new SButton(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_nav.png");		// Fire Department
			Public_destroy_NAV[3] = new SButton(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_2, "destroy_nav.png");		// University
			Public_destroy_NAV[4] = new SButton(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_nav.png");		// Chapel
			Public_destroy_NAV[5] = new SButton(5, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_3, "destroy_nav.png");		// Cathedral
			Public_destroy_NAV[6] = new SButton(6, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_2, "destroy_nav.png");		// Church
			Public_destroy_NAV[7] = new SButton(7, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_nav.png");		// Marketplace
			Public_destroy_NAV[8] = new SButton(8, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5, W_3, "destroy_nav.png");				// Palace 
			Public_destroy_NAV[9] = new SButton(9, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_nav.png");		// School
			Public_destroy_NAV[10] = new SButton(10, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_2, "destroy_nav.png");		// Theatre
			Public_destroy_NAV[11] = new SButton(11, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_nav.png");		// Tavern

			// DOMY
			// Pionerzy
			SButton build_NAV_House_L1(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_nav.png");
			SButton destroy_NAV_House_L1(0, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_nav.png");
			SButton build_AV_House_L1(0, BUILD_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1, W_1, "build_av.png");
			SButton destroy_AV_House_L1(0, DESTROY_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_1 + R_R, W_1, "destroy_av.png");
			// Osadnicy
			SButton build_NAV_House_L2(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_nav.png");
			SButton destroy_NAV_House_L2(1, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_nav.png");
			SButton build_AV_House_L2(1, BUILD_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2, W_1, "build_av.png");
			SButton destroy_AV_House_L2(1, DESTROY_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_2 + R_R, W_1, "destroy_av.png");
			// Mieszczanie
			SButton build_NAV_House_L3(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_nav.png");
			SButton destroy_NAV_House_L3(2, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_nav.png");
			SButton build_AV_House_L3(2, BUILD_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3, W_1, "build_av.png");
			SButton destroy_AV_House_L3(2, DESTROY_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_3 + R_R, W_1, "destroy_av.png");
			// Kupcy
			SButton destroy_NAV_House_L4(3, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_nav.png");
			SButton destroy_AV_House_L4(3, DESTROY_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_4 + R_R, W_1, "destroy_av.png");
			// Arystokraci
			SButton destroy_NAV_House_L5(4, NONE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_nav.png");
			SButton destroy_AV_House_L5(4, DESTROY_HOUSE, BUILD_BUTTON_WIDTH, BUILD_BUTTON_HEIGHT, C_5 + R_R, W_1, "destroy_av.png");

			// Pozwol budowac
			SButton Allow_Build(666, ALLOW_BUILD, ALLOW_BUILD_BUTTON_WIDTH, ALLOW_BUILD_BUTTON_HEIGHT, A_B_X, A_B_Y, "allow_build.png");
			SButton Deny_Build(666, DENY_BUILD, ALLOW_BUILD_BUTTON_WIDTH, ALLOW_BUILD_BUTTON_HEIGHT, A_B_X, A_B_Y, "deny_build.png");
			// Zabron budowac

			//  MAGAZYNY
			// WarehouseIIUpgrade
			SButton upgrade_NAV_Warehouse(15, NONE, UPGRADE_BUTTON_WIDTH, UPGRADE_BUTTON_HEIGHT, U_X, U_Y, "upgrade_nav.png");
			SButton upgrade_AV_Warehouse(15, UPGRADE, UPGRADE_BUTTON_WIDTH, UPGRADE_BUTTON_HEIGHT, U_X, U_Y, "upgrade_av.png");

			// Muzyka i info
			SButton Music_On(CHANGE_MUSIC, 45, 37, 1315, 725, "music_on.png");
			SButton Music_Off(CHANGE_MUSIC, 45, 37, 1315, 725, "music_off.png");

			// Wspolrzedne czworokatow magazynu 
			// LEWY
			gWarehouse_rect_left.x = gWarehouse_rect_left_x;
			gWarehouse_rect_left.y = gWarehouse_rect_left_y;
			gWarehouse_rect_left.h = gWarehouse_rect_left_h;
			gWarehouse_rect_left.w = gWarehouse_rect_left_w;
			// PRAWY
			gWarehouse_rect_right.x = gWarehouse_rect_right_x;
			gWarehouse_rect_right.y = gWarehouse_rect_right_y;
			gWarehouse_rect_right.h = gWarehouse_rect_right_h;
			gWarehouse_rect_right.w = gWarehouse_rect_right_w;

			gWarehouse_rect_centre.x = gWarehouse_rect_centre_h;
			gWarehouse_rect_centre.y = gWarehouse_rect_centre_y;
			gWarehouse_rect_centre.h = gWarehouse_rect_centre_h;
			gWarehouse_rect_centre.w = gWarehouse_rect_centre_w;

			// Glowna petla gry
			while (!quit)
			{
				// Handle events on queue
				while (SDL_PollEvent(&e) != 0)
				{
					// Sprawdzenie zadania wyjscia
					if (e.type == SDL_QUIT)
						quit = true;
				}
				// Jesli muzyka sie nie odtwarza
				if (Mix_PlayingMusic() == 0)
					// Odtworz muzyke
					Mix_PlayMusic(gBackgroundMusic, -1);

				// Klawisz ESCAPE - wychodzenie do menu glownego
				const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
				if (currentKeyStates[SDL_SCANCODE_ESCAPE])
					if (!(screen == MAIN && subScreen == MAIN))
					{
						if (gTexture2 != NULL)
						{
							SDL_DestroyTexture(gTexture2);
							gTexture2 = NULL;
						}
						SDL_DestroyTexture(gTexture);
						gTexture = NULL;
						gTexture = loadTexture("imgs/main.png");
						if (timer.getTicks() > 0)
							popUp = true;
						screen = MAIN;
						subScreen = MAIN;
					}

				// Czyszczenie ekranu
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
				SDL_RenderClear(gRenderer);

				// Paski surowc�w
				SDL_Rect fillRect = { 6, 295, 56 * tResource[1]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 1 Iron Ore
				SDL_Rect fillRect2 = { 71, 295, 56 * tResource[2]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 2 Gold
				SDL_Rect fillRect3 = { 136, 295, 56 * tResource[3]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 3 Wool
				SDL_Rect fillRect4 = { 201, 295, 56 * tResource[4]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 4 Sugar
				SDL_Rect fillRect5 = { 266, 295, 56 * tResource[10]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 10 Food

				SDL_Rect fillRect6 = { 6, 369, 56 * tResource[5]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 5 Tobacco
				SDL_Rect fillRect7 = { 71, 369, 56 * tResource[6]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 6 Cattle
				SDL_Rect fillRect8 = { 136, 369, 56 * tResource[7]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 7 Grain
				SDL_Rect fillRect9 = { 201, 369, 56 * tResource[8]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 8 Flour
				SDL_Rect fillRect10 = { 266, 369, 56 * tResource[14]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 14 Liquor
				
				SDL_Rect fillRect11 = { 6, 437, 56 * tResource[12]->getNumber() / WareHouse.getmagazineCapacity(), 5 };		// 12 Spices
				SDL_Rect fillRect12 = { 71, 437, 56 * tResource[15]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 15 Cloth
				SDL_Rect fillRect13 = { 136, 437, 56 * tResource[16]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 16 Clothes
				SDL_Rect fillRect14 = { 201, 437, 56 * tResource[11]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 11 Tobacco Products
				SDL_Rect fillRect15 = { 266, 437, 56 * tResource[17]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 17 Jewerly

				SDL_Rect fillRect16 = { 6, 507, 56 * tResource[18]->getNumber()/WareHouse.getmagazineCapacity(), 5 };		// 18 Tools
				SDL_Rect fillRect17 = { 71, 507, 56 * tResource[19]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 19 Wood
				SDL_Rect fillRect18 = { 136, 507, 56 * tResource[20]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 20 Bricks
				SDL_Rect fillRect19 = { 201, 507, 56 * tResource[9]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 9 Iron
				SDL_Rect fillRect20 = { 266, 507, 56 * tResource[13]->getNumber() / WareHouse.getmagazineCapacity(), 5 };	// 13 Cocoa
				
				switch (screen)
				{
				case MAIN:
					timer.pause();
					SDL_RenderSetViewport(gRenderer, &LargeViewport);
					SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);
					switch (subScreen)
					{
					// Ekran menu glownego
					case MAIN:
						if (timer.getTicks() > 0)
						{
							continue_button.render();
							continue_button.handleEvent(&e);
						}
						new_game_button.setPosition(624, 400);
						new_game_button.handleEvent(&e);		new_game_button.render();					
						load_game_button.render();				load_game_button.handleEvent(&e);
						exit_game_button.render();				exit_game_button.handleEvent(&e);
						if (MUSIC_ON == true)
						{
							Music_On.render();
							Music_On.handleEvent(&e);
							Mix_ResumeMusic();
						}
						else
						{
							Music_Off.render();
							Music_Off.handleEvent(&e);
							Mix_PauseMusic();
						}
						break;
						// Komunikat - potwierdzenie nowej gry
					case POPUPMSG:
						gTextTexture.loadFromRenderedText("Czy na pewno chcesz rozpoczac nowa gre?", textC, gFont);
						gTextTexture.render((SCREEN_WIDTH - gTextTexture.getWidth()) / 2, 380);

						new_game_button.setPosition(SCREEN_WIDTH - MAIN_BUTTON_WIDTH - 525, 520);
						new_game_button.render();				new_game_button.handleEvent(&e);

						main_menu_button.setPosition(525, 520);
						main_menu_button.render();				main_menu_button.handleEvent(&e);
						break;
						// Ekran wczytywania stanu gry
					case LOAD:
						gTextTexture.loadFromRenderedText("Wczytaj", textC, gFont);
						gTextTexture.render(600, 200);
						main_menu_button.setPosition(624, 660);
						main_menu_button.render();				main_menu_button.handleEvent(&e);
						break;
						// Ekran zapisu stanu gry
					case SAVE:
						gTextTexture.loadFromRenderedText("Zapisz", textC, gFont);
						gTextTexture.render(624, 200);
						back_button.setPosition(624, 660);
						back_button.render();					back_button.handleEvent(&e);
						break;
					}
					break;
					// Ekran rozgrywki
				case GAME:
					timer.unpause();
					timer.count();
					SDL_RenderSetViewport(gRenderer, &LeftViewport);
					SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);

					// Skarbiec - wyswietlanie wartosci
					// Podatki
					gTextTexture.loadFromRenderedText(_itoa(0, Money_char_buffor, 10), textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 38);
					// Koszty
					gTextTexture.loadFromRenderedText("0", textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 61);
					// Sprzedaz
					gTextTexture.loadFromRenderedText("0", textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 89);
					// Kupno
					gTextTexture.loadFromRenderedText("0", textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 113);
					// Bilans
					gTextTexture.loadFromRenderedText("0", textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 139);
					// Srodki
					gTextTexture.loadFromRenderedText(_itoa(tResource[0]->getNumber(), Money_char_buffor, 10), textC, gFont);
					gTextTexture.render(155 - gTextTexture.getWidth(), 168);

					// Ludnosc - wyswietlanie wartosci
					// Pionierzy
					gTextTexture.loadFromRenderedText(_itoa(tPeople[0]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 38);
					// Osadnicy
					gTextTexture.loadFromRenderedText(_itoa(tPeople[1]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 62);
					// Mieszczanie
					gTextTexture.loadFromRenderedText(_itoa(tPeople[2]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 91);
					// Kupcy
					gTextTexture.loadFromRenderedText(_itoa(tPeople[3]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 118);
					// Arystokraci
					gTextTexture.loadFromRenderedText(_itoa(tPeople[4]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 146);
					// Mieszkancy
					gTextTexture.loadFromRenderedText(_itoa(tPeople[0]->getNumber() + tPeople[1]->getNumber() + tPeople[2]->getNumber() 
						+ tPeople[3]->getNumber() + tPeople[4]->getNumber(), People_char_buffor, 10), textC, gFont);
					gTextTexture.render(400 - gTextTexture.getWidth(), 175);

					// Magazyny
					// LVL1////////////////////////////////////////////////////////////////////////////////////////////////////// WWYWALIC (co� z tym zrobic)
					{
						SDL_RenderCopy(gRenderer, Warehouse_I_texture, NULL, &gWarehouse_rect_left);
						SDL_RenderCopy(gRenderer, Warehouse_II_texture, NULL, &gWarehouse_rect_right);
					}
					// LVL2
					/*
					{
						if (Warehouse_I_texture != NULL)
						{
							SDL_DestroyTexture(Warehouse_I_texture);
							Warehouse_I_texture = NULL;
						{
						SDL_RenderCopy(gRenderer, Warehouse_I_texture, NULL, &gWarehouse_rect_left);
						SDL_RenderCopy(gRenderer, Warehouse_III_texture, NULL, &gWarehouse_rect_right);
					}
					// LVL3
					{
						if (Warehouse_I_texture != NULL)
						{
							SDL_DestroyTexture(Warehouse_II_texture);
							Warehouse_I_texture = NULL;
						{
						SDL_RenderCopy(gRenderer, Warehouse_III_texture, NULL, &gWarehouse_rect_left);
						SDL_RenderCopy(gRenderer, Warehouse_IV_texture, NULL, &gWarehouse_rect_right);
					}
					// LVL4
					{
						if (Warehouse_I_texture != NULL)
						{
							SDL_DestroyTexture(Warehouse_III_texture);
							Warehouse_I_texture = NULL;
						{
						SDL_RenderCopy(gRenderer, Warehouse_IV_texture, NULL, &gWarehouse_rect_centre);
					}
					*/

					// UPGRADE
					if (upgrade == false)
					{
						upgrade_NAV_Warehouse.render();
						upgrade_NAV_Warehouse.handleEvent(&e);
					}
					else
					{
						upgrade_AV_Warehouse.render();
						upgrade_AV_Warehouse.handleEvent(&e);
					}
					// Aktualizacje stan�w

					// DLA BUDYNKOW TYPU PRODUCTION
					if (timer.getTicks() % 2000==0)
					{
						for (int i = 1; i < 21; ++i)
							totalResources += tResource[i]->getNumber();				// sumowanie liczby surowcow ktore posiada gracz

						for (int i = 0; i < 15; ++i)
						{
							if (tProduction[i]->getNumber() > maxBuildingNumber)		// wyszukiwanie zmiennej maxBuldingNumber
								maxBuildingNumber = tProduction[i]->getNumber();

							totalMagazinesCapacity += tProduction[i]->getMagazineCapacity() * tProduction[i]->getNumber();		// sumowanie calkowitej pojemnosci magazynow budynkow
						}

						for (int i = 0; i < 11; ++i)
							totalMagazinesCapacity += tProcessing[i]->getMagazineCapacity() * tProcessing[i]->getNumber();		// sumowanie calkowitej pojemnosci magazynow budynkow cd.
					}

					// ZAPELNIANIE MAGAZYNU OGOLNEGO (w drugiej kolejnosci)
					usedMagazine = totalResources - totalMagazinesCapacity;				// wykorzystanie magazynu glownego to dodatni wynik roznicy wszystkich surowcow od calkowitej pojemnosci wszystkich budynkow
					if (usedMagazine < 0) usedMagazine = 0;								// wynik ujemny tej roznicy oznacza, ze magazyn w ogole nie jest wykorzystywany

					for (int j = 1; j <= maxBuildingNumber; ++j)																								// dodawaj po jednej jednostce surowca tyle razy ile wynosi najwieksza liczba posiadanego budynku
						for (int i = 0; i < 15; ++i)
							if (tProduction[i]->getMagazineCapacity() * tProduction[i]->getNumber() <= tResource[tProduction[i]->getProductID()]->getNumber())	// jezeli pojemnosc magazynu * liczba budynkow <= liczby posiadanych surowcow 
								if (tProduction[i]->getNumber() != 0)																							// oraz liczba budynkow jest != 0
									if (usedMagazine < WareHouse.getmagazineCapacity())																			// oraz dostepne jest jeszcze miejsce w magazynie glownym
										if (tProduction[i]->getNumber() >= j)																					// oraz mamy liczbe j budynkow aby moc dodaj j-ty surowiec
										{
											tResource[tProduction[i]->getProductID()]->increase(1);																// dodaj jedna jednostke surowiec
											++usedMagazine;																										// zwieksz zajetosc magazynu
										}

					// ZAPELNIANIE MAGAZYNOW WEWNETRZNYCH BUDYNKOW DANEGO TYPU (w pierwszej kolejnosci)

					for (int i = 0; i < 15; ++i)
						if (tProduction[i]->getMagazineCapacity() * tProduction[i]->getNumber() > tResource[tProduction[i]->getProductID()]->getNumber())		// jezeli pojemnosc magazynu * liczba budynkow > liczby posiadanych surowcow to
						{
							tResource[tProduction[i]->getProductID()]->increase(tProduction[i]->getNumber());													// zwieksz liczbe surowca o liczbe posiadanych budynkow (kazdy budynek Production zwieksza o 1 jednostke surowca)

							if (tProduction[i]->getMagazineCapacity() * tProduction[i]->getNumber() < tResource[tProduction[i]->getProductID()]->getNumber())	// jezeli po zwiekszeniu pojemnosc magazynu * liczba budynkow < liczby posiadanych surowcow to
							{
								int excess = tResource[tProduction[i]->getProductID()]->getNumber() - tProduction[i]->getMagazineCapacity() * tProduction[i]->getNumber();		// dodany nadmiar surowcow, ktory nie miesci sie w calkowitej pojemnosci magazynow danego typu budynku
								tResource[tProduction[i]->getProductID()]->decrease(excess);		// TU JESZCZE DOKONCZ														// poziom surowcow zmniejsz do max dostepnej pojemnosci
							}
						}

					// AKTUALIZACJA LICZBY MIESZKANCOW
					for (int i = 0; i < 5; ++i)
					{
						if (tHouse[i]->getInhabitants() * tHouse[i]->getNumber() > tPeople[i]->getNumber())			// jezeli liczba lokatorow jednego domu * liczba domow jest wieksza od liczby posiadanych mieszkancow
							tPeople[i]->increase(tHouse[i]->getNumber());											// zwieksz liczbe mieszkancow o liczbe posiadanych budynkow mieszkalnych

						if (tHouse[i]->getInhabitants() * tHouse[i]->getNumber() < tPeople[i]->getNumber())			// jezeli przekroczono limit mieszkancow jaki mozemy posiadac
							tPeople[i]->setNumber(tHouse[i]->getInhabitants() * tHouse[i]->getNumber());			// ustaw liczbe mieszkancow na maksimum
					}

					// AKTUALIZACJA BUDYNK�W PROCESSING
					for (int i = 0; i < 11; ++i)
						for (int j = 0; j < tProcessing[i]->getNumber(); ++j)
							if (tProcessing[i]->getMagazineCapacity() * tProcessing[i]->getNumber() > tResource[tProcessing[i]->getMaterialID()]->getNumber())	// jezeli pojemnosc magazynu * liczba budynkow > liczby posiadanych surowcow 
								if (tResource[tProcessing[i]->getMaterialID()]->getNumber() >= tProcessing[i]->getMaterialNumber())								// oraz posiadamy przynamniej tyle surowca ile potrzeba do przetwarzania na inny to
								{
									tResource[tProcessing[i]->getProductID()]->increase(tProcessing[i]->getProductNumber());									// dodaj liczbe surowca, ktory zostal wyprodukowany
									tResource[tProcessing[i]->getMaterialID()]->decrease(tProcessing[i]->getMaterialNumber());									// zmniejsz liczbe liczbe surowca, ktory zostal przetworzony
								}
					
					// POBOR PODATKU OD MIESZKANCOW

					for (int i = 0; i < 5; ++i)
						tResource[0]->increase(tPeople[i]->getNumber());

					// KOSZTY UTRZYMANIA POSIADANYCH BUDYNKOW

					for (int i = 0; i < 12; ++i)
						tResource[0]->decrease(tPublic[i]->getMaintenanceActiveCost() * tPublic[i]->getNumber());

					for (int i = 0; i < 16; ++i)
						tResource[0]->decrease(tProduction[i]->getMaintenanceActiveCost() * tProduction[i]->getActiveNumber()
							+ tProduction[i]->getMaintenancePassiveCost() * (tProduction[i]->getNumber() - tProduction[i]->getActiveNumber()));

					for (int i = 0; i < 11; ++i)
						tResource[0]->decrease(tProcessing[i]->getMaintenanceActiveCost() * tProcessing[i]->getActiveNumber()
							+ tProcessing[i]->getMaintenancePassiveCost() * (tProcessing[i]->getNumber() - tProcessing[i]->getActiveNumber()));

					// SPRAWDZENIE WARUNKU DOSTEPNOSCI BUDYNKOW:
					// WYMAGANIA POSIADANIA KONKRETNEJ KLASY LUDNOSCI

					for (int i = 0; i < 12; ++i)
						if (tPublic[i]->getClass() > -1)
							tPublic[i]->checkStatus(tPeople[tPublic[i]->getClass()]->getNumber());

					for (int i = 0; i < 16; ++i)

						if (tProduction[i]->getClass() > -1)
							tProduction[i]->checkStatus(tPeople[tProduction[i]->getClass()]->getNumber());

					for (int i = 0; i < 11; ++i)
						if (tProcessing[i]->getClass() > -1)
							tProcessing[i]->checkStatus(tPeople[tProcessing[i]->getClass()]->getNumber());

					if (WareHouse.getClass() > -1)
						WareHouse.checkStatus(tPeople[WareHouse.getClass()]->getNumber());

					// WYMAGANIA POSIADANIA KONRETNYCH BUDYNKOW 

					for (int i = 1; i < 5; ++i)
						for (int j = 0; j < 3; ++j)
							if (tHouse[i]->getBuildingID(j) > -1)									// dla -1 warunek nie wystepuje
							{
								tHouse[i]->checkStatus(tPublic[tHouse[i]->getBuildingID(j)]->getNumber());
								if (false == tHouse[i]->getStatus())								// wystarczy, ze nie posiadamy jednego budynku i budowa jest niedostepna
									break;
							}
					
					if (buy == true)
					{
						gTextTexture.loadFromRenderedText("Kup", textC, gFont);
						gTextTexture.render(250, 210);

						buy_iron_ore_button.render();			buy_iron_ore_button.handleEvent(&e);
						buy_gold_button.render();				buy_gold_button.handleEvent(&e);
						buy_cottom_button.render();				buy_cottom_button.handleEvent(&e);
						buy_sugarcane_button.render();			buy_sugarcane_button.handleEvent(&e);
						buy_food_button.render();				buy_food_button.handleEvent(&e);

						buy_tobacco_button.render();			buy_tobacco_button.handleEvent(&e);
						buy_cattle_button.render();				buy_cattle_button.handleEvent(&e);
						buy_grain_button.render();				buy_grain_button.handleEvent(&e);
						buy_flour_button.render();				buy_flour_button.handleEvent(&e);
						buy_alcohol_button.render();			buy_alcohol_button.handleEvent(&e);

						buy_spices_button.render();				buy_spices_button.handleEvent(&e);
						buy_textiles_button.render();			buy_textiles_button.handleEvent(&e);
						buy_clothes_button.render();			buy_clothes_button.handleEvent(&e);
						buy_cigarettes_button.render();			buy_cigarettes_button.handleEvent(&e);
						buy_jewelry_button.render();			buy_jewelry_button.handleEvent(&e);

						buy_tools_button.render();				buy_tools_button.handleEvent(&e);
						buy_wood_button.render();				buy_wood_button.handleEvent(&e);
						buy_bricks_button.render();				buy_bricks_button.handleEvent(&e);
						buy_iron_button.render();				buy_iron_button.handleEvent(&e);
						buy_cocoa_button.render();				buy_cocoa_button.handleEvent(&e);

						cancel_AV_button.render();				cancel_AV_button.handleEvent(&e);
					}
					else if (sell == true)
					{
						gTextTexture.loadFromRenderedText("Sprzedaj", textC, gFont);
						gTextTexture.render(250, 210);

						sell_iron_ore_button.render();			sell_iron_ore_button.handleEvent(&e);
						sell_gold_button.render();				sell_gold_button.handleEvent(&e);
						sell_cottom_button.render();			sell_cottom_button.handleEvent(&e);
						sell_sugarcane_button.render();			sell_sugarcane_button.handleEvent(&e);
						sell_food_button.render();				sell_food_button.handleEvent(&e);

						sell_tobacco_button.render();			sell_tobacco_button.handleEvent(&e);
						sell_cattle_button.render();			sell_cattle_button.handleEvent(&e);
						sell_grain_button.render();				sell_grain_button.handleEvent(&e);
						sell_flour_button.render();				sell_flour_button.handleEvent(&e);
						sell_alcohol_button.render();			sell_alcohol_button.handleEvent(&e);

						sell_spices_button.render();			sell_spices_button.handleEvent(&e);
						sell_textiles_button.render();			sell_textiles_button.handleEvent(&e);
						sell_clothes_button.render();			sell_clothes_button.handleEvent(&e);
						sell_cigarettes_button.render();		sell_cigarettes_button.handleEvent(&e);
						sell_jewelry_button.render();			sell_jewelry_button.handleEvent(&e);

						sell_tools_button.render();				sell_tools_button.handleEvent(&e);
						sell_wood_button.render();				sell_wood_button.handleEvent(&e);
						sell_bricks_button.render();			sell_bricks_button.handleEvent(&e);
						sell_iron_button.render();				sell_iron_button.handleEvent(&e);
						sell_cocoa_button.render();				sell_cocoa_button.handleEvent(&e);

						cancel_AV_button.render();				cancel_AV_button.handleEvent(&e);
					}
					else
					{
						cancel_NAV_button.render();				cancel_NAV_button.handleEvent(&e);
					}
					SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);

					// Paski stanu zasobow
					SDL_RenderFillRect(gRenderer, &fillRect);
					SDL_RenderFillRect(gRenderer, &fillRect2);
					SDL_RenderFillRect(gRenderer, &fillRect3);
					SDL_RenderFillRect(gRenderer, &fillRect4);
					SDL_RenderFillRect(gRenderer, &fillRect5);

					SDL_RenderFillRect(gRenderer, &fillRect6);
					SDL_RenderFillRect(gRenderer, &fillRect7);
					SDL_RenderFillRect(gRenderer, &fillRect8);
					SDL_RenderFillRect(gRenderer, &fillRect9);
					SDL_RenderFillRect(gRenderer, &fillRect10);

					SDL_RenderFillRect(gRenderer, &fillRect11);
					SDL_RenderFillRect(gRenderer, &fillRect12);
					SDL_RenderFillRect(gRenderer, &fillRect13);
					SDL_RenderFillRect(gRenderer, &fillRect14);
					SDL_RenderFillRect(gRenderer, &fillRect15);

					SDL_RenderFillRect(gRenderer, &fillRect16);
					SDL_RenderFillRect(gRenderer, &fillRect17);
					SDL_RenderFillRect(gRenderer, &fillRect18);
					SDL_RenderFillRect(gRenderer, &fillRect19);
					SDL_RenderFillRect(gRenderer, &fillRect20);

					buy_button.render();						buy_button.handleEvent(&e);
					sell_button.render();						sell_button.handleEvent(&e);
					stats_button.render();						stats_button.handleEvent(&e);
					save_game_button.render();					save_game_button.handleEvent(&e);
					switch (subScreen)
					{
						// Ekran rozgrywki - wybor budynkow
					case GAME:
						main_menu_button.setPosition(300, 732);
						main_menu_button.render();				main_menu_button.handleEvent(&e);

						SDL_RenderSetViewport(gRenderer, &RightViewport);
						ind_button.render();					ind_button.handleEvent(&e);
						prod_button.render();					prod_button.handleEvent(&e);
						pub_button.render();					pub_button.handleEvent(&e);
						break;

						// Ekran rozgrywki - statystyki
					case STATS:
						back_button.setPosition(300, 732);
						back_button.render();					back_button.handleEvent(&e);
		
						SDL_RenderSetViewport(gRenderer, &RightViewport);
						SDL_RenderCopy(gRenderer, gTexture2, NULL, NULL);
						timer.render();

						// Wyswietlanie ilo�ci dom�w
						gTextTexture.loadFromRenderedText(_itoa(tHouse[0]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_1 - 43);
						gTextTexture.loadFromRenderedText(_itoa(tHouse[1]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2+2, T_W_1 - 29);
						gTextTexture.loadFromRenderedText(_itoa(tHouse[2]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3+3, T_W_1 - 29);
						gTextTexture.loadFromRenderedText(_itoa(tHouse[3]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4+3, T_W_1 - 29);
						gTextTexture.loadFromRenderedText(_itoa(tHouse[4]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5+3, T_W_1 - 29);

						// Wyswietlanie stanu surowcow
						gTextTexture.loadFromRenderedText(_itoa(tResource[1]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(85 - gTextTexture.getWidth(), 415);
						gTextTexture.loadFromRenderedText(_itoa(tResource[2]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(250 - gTextTexture.getWidth(), 415);
						gTextTexture.loadFromRenderedText(_itoa(tResource[3]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(415 - gTextTexture.getWidth(), 415);
						gTextTexture.loadFromRenderedText(_itoa(tResource[4]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(580 - gTextTexture.getWidth(), 415);
						gTextTexture.loadFromRenderedText(_itoa(tResource[10]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(745 - gTextTexture.getWidth(), 415);

						gTextTexture.loadFromRenderedText(_itoa(tResource[5]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(85 - gTextTexture.getWidth(), 490);
						gTextTexture.loadFromRenderedText(_itoa(tResource[6]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(250 - gTextTexture.getWidth(), 490);
						gTextTexture.loadFromRenderedText(_itoa(tResource[7]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(415 - gTextTexture.getWidth(), 490);
						gTextTexture.loadFromRenderedText(_itoa(tResource[8]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(580 - gTextTexture.getWidth(), 490);
						gTextTexture.loadFromRenderedText(_itoa(tResource[14]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(745 - gTextTexture.getWidth(), 490);

						gTextTexture.loadFromRenderedText(_itoa(tResource[12]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(85 - gTextTexture.getWidth(), 560);
						gTextTexture.loadFromRenderedText(_itoa(tResource[15]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(250 - gTextTexture.getWidth(), 560);
						gTextTexture.loadFromRenderedText(_itoa(tResource[16]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(415 - gTextTexture.getWidth(), 560);
						gTextTexture.loadFromRenderedText(_itoa(tResource[11]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(580 - gTextTexture.getWidth(), 560);
						gTextTexture.loadFromRenderedText(_itoa(tResource[17]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(745 - gTextTexture.getWidth(), 560);

						gTextTexture.loadFromRenderedText(_itoa(tResource[18]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(85 - gTextTexture.getWidth(), 625);
						gTextTexture.loadFromRenderedText(_itoa(tResource[19]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(250 - gTextTexture.getWidth(), 625);
						gTextTexture.loadFromRenderedText(_itoa(tResource[20]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(415 - gTextTexture.getWidth(), 625);
						gTextTexture.loadFromRenderedText(_itoa(tResource[9]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(580 - gTextTexture.getWidth(), 625);
						gTextTexture.loadFromRenderedText(_itoa(tResource[13]->getNumber(), People_char_buffor, 10), textC, gFont);
						gTextTexture.render(745 - gTextTexture.getWidth(), 625);
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// WYWALIC
						/*gTextTexture.loadFromRenderedText(_itoa(s1, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s11, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_1, wiersz_stat_1);									gTextTexture.render(kolumna_stat_3, wiersz_stat_3);
						gTextTexture.loadFromRenderedText(_itoa(s2, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s12, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_1, wiersz_stat_2);									gTextTexture.render(kolumna_stat_3, wiersz_stat_4);
						gTextTexture.loadFromRenderedText(_itoa(s3, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s13, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_1, wiersz_stat_3);									gTextTexture.render(kolumna_stat_4, wiersz_stat_1);
						gTextTexture.loadFromRenderedText(_itoa(s4, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s14, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_1, wiersz_stat_4);									gTextTexture.render(kolumna_stat_4, wiersz_stat_2);
						gTextTexture.loadFromRenderedText(_itoa(s5, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s15, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_2, wiersz_stat_1);									gTextTexture.render(kolumna_stat_4, wiersz_stat_3);
						gTextTexture.loadFromRenderedText(_itoa(s6, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s16, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_2, wiersz_stat_2);									gTextTexture.render(kolumna_stat_4, wiersz_stat_4);
						gTextTexture.loadFromRenderedText(_itoa(s7, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s17, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_2, wiersz_stat_3);									gTextTexture.render(kolumna_stat_5, wiersz_stat_1);
						gTextTexture.loadFromRenderedText(_itoa(s8, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s18, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_2, wiersz_stat_4);									gTextTexture.render(kolumna_stat_5, wiersz_stat_2);
						gTextTexture.loadFromRenderedText(_itoa(s9, Money_char_buffor, 10), textC);			gTextTexture.loadFromRenderedText(_itoa(s19, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_3, wiersz_stat_1);									gTextTexture.render(kolumna_stat_5, wiersz_stat_3);
						gTextTexture.loadFromRenderedText(_itoa(s10, Money_char_buffor, 10), textC);		gTextTexture.loadFromRenderedText(_itoa(s20, Money_char_buffor, 10), textC);
						gTextTexture.render(kolumna_stat_3, wiersz_stat_2);									gTextTexture.render(kolumna_stat_5, wiersz_stat_4);*/
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// WYWALIC


						//gTextTexture.loadFromRenderedText("Zapisz", textC);
					//	gTextTexture.render(624, 200);

						// Wy�wietlenie ilo�ci p�l na wyspie i p�l wolnych
						gTextTexture.loadFromRenderedText(_itoa(islandSize, People_char_buffor, 10), textC, gFont);
						gTextTexture.render(I_S_X, I_S_Y);
						gTextTexture.loadFromRenderedText(_itoa(islandSize-usedFields, People_char_buffor, 10), textC, gFont);
						gTextTexture.render(U_F_X, U_F_Y);

						// Pozwolenie i zakaz budowy
						if (allow_build == true)
						{
							Allow_Build.render();				Allow_Build.handleEvent(&e);
						}
						else
						{
							Deny_Build.render();				Deny_Build.handleEvent(&e);
						}
						// Buduj zburz domy
						// BUILD								DESTROY
						build_AV_House_L1.render();				destroy_AV_House_L1.render();
						build_AV_House_L1.handleEvent(&e);		destroy_AV_House_L1.handleEvent(&e);

						build_NAV_House_L2.render();			destroy_NAV_House_L2.render();
						build_NAV_House_L2.handleEvent(&e);		destroy_NAV_House_L2.handleEvent(&e);

						build_NAV_House_L3.render();			destroy_NAV_House_L3.render();
						build_NAV_House_L3.handleEvent(&e);		destroy_NAV_House_L3.handleEvent(&e);

						/* Kupcy */								destroy_NAV_House_L4.render();
						/*Tych nie budujemy*/					destroy_NAV_House_L4.handleEvent(&e);

						/* Arystokraci */						destroy_NAV_House_L5.render();
						/*Tych nie budujemy*/					destroy_NAV_House_L5.handleEvent(&e);

						break;
						// Ekran rozgrywki - budynki publiczne
					case PUB:
						back_button.setPosition(300, 732);
						back_button.render();					back_button.handleEvent(&e);

						SDL_RenderSetViewport(gRenderer, &RightViewport);
						SDL_RenderCopy(gRenderer, gTexture2, NULL, NULL);

						for (int i = 0; i < 12; i++)
						{
							//if(Warunek �e mo�na od [i] budowac)
							// {
							Public_build_AV[i]->render();
							Public_build_AV[i]->handleEvent(&e);

							Public_destroy_AV[i]->render();
							Public_destroy_AV[i]->handleEvent(&e);
							// }
							/*
							else
							{
								Public_build_NAV[i]->render;
								Public_build_NAV[i]->handleEvent(&e);
								Public_destroy_NAV[i]->render;
								Public_destroy_NAV[i]->handleEvent(&e);
							}
							*/
						}
						// Wyswietlanie ilosci budynkow publicznych
						gTextTexture.loadFromRenderedText(_itoa(tPublic[7]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[4]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_1); 
						gTextTexture.loadFromRenderedText(_itoa(tPublic[11]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[2]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[9]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_1);

						gTextTexture.loadFromRenderedText(_itoa(tPublic[0]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[6]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[10]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[3]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[1]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_2);

						gTextTexture.loadFromRenderedText(_itoa(tPublic[5]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tPublic[8]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4 + 85, T_W_3);
						break;
						// Ekran rozgrywki - przetworstwo
					case PROC:
						back_button.setPosition(300, 732);
						back_button.render();					back_button.handleEvent(&e);
						SDL_RenderSetViewport(gRenderer, &RightViewport);
						SDL_RenderCopy(gRenderer, gTexture2, NULL, NULL);

						for (int i = 0; i < 12; i++)
						{
							//if(Warunek �e mo�na od [i] budowac)
							// {
							Processing_build_AV[i]->render();
							Processing_build_AV[i]->handleEvent(&e);

							Processing_destroy_AV[i]->render();
							Processing_destroy_AV[i]->handleEvent(&e);
							// }
							/*
							else
							{
							Processing_build_NAV[i]->render;
							Processing_build_NAV[i]->handleEvent(&e);
							Processing_destroy_NAV[i]->render;
							Processing_destroy_NAV[i]->handleEvent(&e);
							}
							*/
						}

						// Wyswietlanie ilosci budynkow przetworczych
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[8]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[3]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[15]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[6]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[4]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_1);

						gTextTexture.loadFromRenderedText(_itoa(tProcessing[0]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[7]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[10]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[9]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[1]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_2);

						gTextTexture.loadFromRenderedText(_itoa(tProcessing[5]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tProcessing[2]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_3);
						break;
						// Ekran rozgrywki - produkcja
					case PROD:
						back_button.setPosition(300, 732);
						back_button.render();					back_button.handleEvent(&e);
						SDL_RenderSetViewport(gRenderer, &RightViewport);
						SDL_RenderCopy(gRenderer, gTexture2, NULL, NULL);

						for (int i = 0; i < 15; i++)
						{
							//if(Warunek �e mo�na od [i] budowac)
							// {
							Production_build_AV[i]->render();
							Production_build_AV[i]->handleEvent(&e);

							Production_destroy_AV[i]->render();
							Production_destroy_AV[i]->handleEvent(&e);
							// }
							/*
							else
							{
							Production_build_NAV[i]->render;
							Production_build_NAV[i]->handleEvent(&e);
							Production_destroy_NAV[i]->render;
							Production_destroy_NAV[i]->handleEvent(&e);
							}
							*/
						}
						gTextTexture.loadFromRenderedText(_itoa(tProduction[1]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[14]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[7]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[4]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_1);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[6]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_1);

						gTextTexture.loadFromRenderedText(_itoa(tProduction[10]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[8]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[9]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[3]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_2);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[2]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_2);

						gTextTexture.loadFromRenderedText(_itoa(tProduction[11]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_1, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[13]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_2, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[5]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_3, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[0]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_4, T_W_3);
						gTextTexture.loadFromRenderedText(_itoa(tProduction[12]->getNumber(), People_char_buffor, 10), textC, gFont_12);
						gTextTexture.render(T_C_5, T_W_3);
						break;
					}
					break;
				case QUIT:
					quit = true;
					break;
				}
				// Odswiezenie ekranu
				SDL_RenderPresent(gRenderer);
			}
		}
	}
	// getch do testowania
	//_getch();
	// Zwalnianie zasob�w i zamykanie SDL
	close();
	return 0;
}

void Render_Prod()
{
	
}