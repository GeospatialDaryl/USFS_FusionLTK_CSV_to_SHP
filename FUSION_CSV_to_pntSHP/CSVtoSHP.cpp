// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ogrsf_frmts.h"
#include "gdal.h"

//int main()

std::vector<std::string> split(const std::string &s, char delim, std::vector<std::string> &elems) {
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

//int main(int argc, _TCHAR* argv[])
int main(int argc, char* argv[])
{
	if ( (argc == 2 )&&( std::string(argv[1]) == "--dictionary"))
	{
		printf("SHP_Attribute________FUSION Metric Name___________Index \n");
		printf("\"row\"           |     \"row INTEGER\"    <-->  0\n");
		printf("\"col\"           |   \"col INTEGER\"      <-->  1\n");
		printf("\"center_X\"      |   \"center_X REAL\"    <-->  2\n");
		printf("\"center_Y\"      |   \"center_Y REAL\"    <-->  3\n");
		printf("\"Total_retu\"    |   \"Total_return_count REAL\"  <-->  4\n");
		printf("\"Elev_minim\"    |   \"Elev_minimum REAL\"<-->  5\n");
		printf("\"Elev_maxim\"    |   \"Elev_maximum REAL\"<-->  6\n");
		printf("\"Elev_mean\"     |   \"Elev_mean REAL\"   <-->  7\n");
		printf("\"Elev_mode\"     |   \"Elev_mode REAL\"   <-->  8\n");
		printf("\"Elev_stdde\"    |   \"Elev_stddev REAL\" <-->  9\n");
		printf("\"Elev_varia\"    |   \"Elev_variance REAL\"<-->  10\n");
		printf("\"Elev_CV\"       |   \"Elev_CV REAL\"      <-->  11\n");
		printf("\"Elev_IQ\"       |   \"Elev_IQ REAL\"      <-->  12\n");
		printf("\"Elev_skewn\"    |   \"Elev_skewness REAL\"  <-->  13\n");
		printf("\"Elev_kurto\"    |   \"Elev_kurtosis REAL\"  <-->  14\n");
		printf("\"Elev_AAD\"      |   \"Elev_AAD REAL\"  <-->  15\n");
		printf("\"Elev_L1\"       |   \"Elev_L1 REAL\"  <-->  16\n");
		printf("\"Elev_L2\"       |   \"Elev_L2 REAL\"  <-->  17\n");
		printf("\"Elev_L3\"       |   \"Elev_L3 REAL\"  <-->  18\n");
		printf("\"Elev_L4\"       |   \"Elev_L4 REAL\"  <-->  19\n");
		printf("\"Elev_L_CV\"     |   \"Elev_L_CV REAL\"  <-->  20\n");
		printf("\"Elev_L_ske\"    |   \"Elev_L_skewnes REALs\"  <-->  21\n");
		printf("\"Elev_L_kur\"    |   \"Elev_L_kurtosis REAL\"  <-->  22\n");
		printf("\"Elev_P01\"      |   \"Elev_P01 REAL\"  <-->  23\n");
		printf("\"Elev_P05\"      |   \"Elev_P05 REAL\"  <-->  24\n");
		printf("\"Elev_P10\"      |   \"Elev_P10 REAL\"  <-->  25\n");
		printf("\"Elev_P20\"      |   \"Elev_P20 REAL\"  <-->  26\n");
		printf("\"Elev_P25\"      |   \"Elev_P25 REAL\"  <-->  27\n");
		printf("\"Elev_P30\"      |   \"Elev_P30 REAL\"  <-->  28\n");
		printf("\"Elev_P40\"      |   \"Elev_P40 REAL\"  <-->  29\n");
		printf("\"Elev_P50\"      |   \"Elev_P50 REAL\"  <-->  30\n");
		printf("\"Elev_P60\"      |   \"Elev_P60 REAL\"  <-->  31\n");
		printf("\"Elev_P70\"      |   \"Elev_P70 REAL\"  <-->  32\n");
		printf("\"Elev_P75\"      |   \"Elev_P75 REAL\"  <-->  33\n");
		printf("\"Elev_P80\"      |   \"Elev_P80 REAL\"  <-->  34\n");
		printf("\"Elev_P90\"      |   \"Elev_P90 REAL\"  <-->  35\n");
		printf("\"Elev_P95\"      |   \"Elev_P95 REAL\"  <-->  36\n");
		printf("\"Elev_P99\"      |   \"Elev_P99 REAL\"  <-->  37\n");
		printf("\"Return_1_c\"    |   \"Return_1_count REAL\"  <-->  38\n");
		printf("\"Return_2_c\"    |   \"Return_2_count REAL\"  <-->  39\n");
		printf("\"Return_3_c\"    |   \"Return_3_count REAL\"  <-->  40\n");
		printf("\"Return_4_c\"    |   \"Return_4_count REAL\"  <-->  41\n");
		printf("\"Return_5_c\"    |   \"Return_5_count REAL\"  <-->  42\n");
		printf("\"Return_6_c\"    |   \"Return_6_count REAL\"  <-->  43\n");
		printf("\"Return_7_c\"    |   \"Return_7_count REAL\"  <-->  44\n");
		printf("\"Return_8_c\"    |   \"Return_8_count REAL\"  <-->  45\n");
		printf("\"Return_9_c\"    |   \"Return_9_count REAL\"  <-->  46\n");
		printf("\"Other_retu\"    |   \"Other_return_count  REAL\"  <-->  47\n");
		printf("\"Perc_1st_a\"    |   \"Perc_1st_above_1 REAL\"  <-->  48\n");
		printf("\"Perc_all_a\"    |   \"Perc_all_above_1  REAL\"  <-->  49\n");
		printf("\"AllRet_div\"    |   \"AllRet_div_1stRet  REAL\"  <-->  50\n");
		printf("\"Frs_ret_Ab\"    |   \"First_ret_Abv1 REAL\"  <-->  51\n");
		printf("\"All_ret_Ab\"    |   \"All_ret_Abv1 REAL\"  <-->  52\n");
		printf("\"P1stGTMean\"    |   \"Perc1st_GT_Mean REAL\"  <-->  53\n");
		printf("\"P1stGTMode\"    |   \"Perc1st_GT_Mode REAL\"  <-->  54\n");
		printf("\"PAGT_mean\"     |   \"PercAll_GT_mean REAL\"  <-->  55\n");
		printf("\"PAGT_mode\"     |   \"PercAll_GT_mode REAL\"  <-->  56\n");
		printf("\"PAOvrMean1\"    |   \"PercAllOverMean_to_1st REAL\"  <-->  57\n");
		printf("\"PAOvrMode1\"    |   \"PercAllOverMode_to_1st REAL\"  <-->  58\n");
		printf("\"FGT_mean\"      |   \"First_GT_mean REAL\"  <-->  59\n");
		printf("\"FGT_mode\"      |   \"First_GT_mode REAL\"  <-->  60\n");
		printf("\"All_GT_mea\"    |   \"All_GT_mean REAL\"  <-->  61\n");
		printf("\"All_GT_mod\"    |   \"All_GT_mode REAL\"  <-->  62\n");
		printf("\"Total_firs\"    |   \"Total_first_returns REAL\"  <-->  63\n");
		printf("\"TotalAll\"      |   \"Total_all_returns REAL\"  <-->  64\n");
		printf("\"EMAD_Med\"      |   \"Elev_MAD_median REAL\"  <-->  65\n");
		printf("\"EMAD_Mode\"     |   \"Elev_MAD_mode REAL\"  <-->  66\n");
		printf("\"CRRatio\"       |   \"Canopy_relief_ratio REAL\"  <-->  67\n");
		printf("\"EQuadMean\"     |   \"Elev_quadratic_mean REAL \"  <-->  68\n");
		printf("\"eCubicMean\"    |   \"Elev_cubic_mean REAL\"  <-->  69\n");
		exit(1);
	}
	else if (argc < 3) // 1 is the name of exe
	{
		printf("\n \n  FUSION LTK Metrics CSV to point SHP  \n \n \
			   \n      version 1.0    - 2015-12-17  \n  \
			\n for FUSION v3.50 format output \n \n Syntax:  \n  \
			  \n   'CSV_to_pntSHP.exe <input Fusion Metrics CSV> <output SHP> ' \n   \
			  \n or 'CSV_to_pntSHP.exe --dictionary' for SHP Field Name Dictionary\n  \
				       \n please send bug reports  to 'daryl_van_dyke@fws.gov'   \n \n ");
		exit(1);
	}

	std::ifstream fileIn(argv[1]);
	std::string value;
	//while (file.good() )
	//fileIn.open();
	if (!fileIn.is_open())
	{
		printf("%s : input file not located.\n", argv[1]);
		exit(1);
	}

	const char *pszDriverName = "ESRI Shapefile";
	GDALDriver *poDriver;
	GDALAllRegister();
	poDriver = GetGDALDriverManager()->GetDriverByName(pszDriverName);
	if (poDriver == NULL)
	{
		printf("%s driver not available.\n", pszDriverName);
		exit(1);
	}
	GDALDataset *poDS;
	poDS = poDriver->Create(argv[2], 0, 0, 0, GDT_Unknown, NULL);
	if (poDS == NULL)
	{
		printf("Creation of output file failed.\n");
		exit(1);
	}
	OGRLayer *poLayer;
	poLayer = poDS->CreateLayer("point_out", NULL, wkbPoint, NULL);
	if (poLayer == NULL)
	{
		printf("Layer creation failed.\n");
		exit(1);
	}
	OGRFieldDefn oField("Name", OFTString);
	oField.SetWidth(32);
	if (poLayer->CreateField(&oField) != OGRERR_NONE)
	{
		printf("Creating Name field failed.\n");
		exit(1);
	}
	OGRFieldDefn oField0("row", OFTInteger);
	OGRFieldDefn oField1("col", OFTInteger);
	OGRFieldDefn oField2("center_X", OFTReal);
	OGRFieldDefn oField3("center_Y", OFTReal);
	OGRFieldDefn oField4("Total_retu", OFTReal);
	OGRFieldDefn oField5("Elev_minim", OFTReal);
	OGRFieldDefn oField6("Elev_maxim", OFTReal);
	OGRFieldDefn oField7("Elev_mean", OFTReal);
	OGRFieldDefn oField8("Elev_mode", OFTReal);
	OGRFieldDefn oField9("Elev_stdde", OFTReal);
	OGRFieldDefn oField10("Elev_varia", OFTReal);
	OGRFieldDefn oField11("Elev_CV", OFTReal);
	OGRFieldDefn oField12("Elev_IQ", OFTReal);
	OGRFieldDefn oField13("Elev_skewn", OFTReal);
	OGRFieldDefn oField14("Elev_kurto", OFTReal);
	OGRFieldDefn oField15("Elev_AAD", OFTReal);
	OGRFieldDefn oField16("Elev_L1", OFTReal);
	OGRFieldDefn oField17("Elev_L2", OFTReal);
	OGRFieldDefn oField18("Elev_L3", OFTReal);
	OGRFieldDefn oField19("Elev_L4", OFTReal);
	OGRFieldDefn oField20("Elev_L_CV", OFTReal);
	OGRFieldDefn oField21("Elev_L_ske", OFTReal);
	OGRFieldDefn oField22("Elev_L_kur", OFTReal);
	OGRFieldDefn oField23("Elev_P01", OFTReal);
	OGRFieldDefn oField24("Elev_P05", OFTReal);
	OGRFieldDefn oField25("Elev_P10", OFTReal);
	OGRFieldDefn oField26("Elev_P20", OFTReal);
	OGRFieldDefn oField27("Elev_P25", OFTReal);
	OGRFieldDefn oField28("Elev_P30", OFTReal);
	OGRFieldDefn oField29("Elev_P40", OFTReal);
	OGRFieldDefn oField30("Elev_P50", OFTReal);
	OGRFieldDefn oField31("Elev_P60", OFTReal);
	OGRFieldDefn oField32("Elev_P70", OFTReal);
	OGRFieldDefn oField33("Elev_P75", OFTReal);
	OGRFieldDefn oField34("Elev_P80", OFTReal);
	OGRFieldDefn oField35("Elev_P90", OFTReal);
	OGRFieldDefn oField36("Elev_P95", OFTReal);
	OGRFieldDefn oField37("Elev_P99", OFTReal);
	OGRFieldDefn oField38("Return_1_c", OFTReal);
	OGRFieldDefn oField39("Return_2_c", OFTReal);
	OGRFieldDefn oField40("Return_3_c", OFTReal);
	OGRFieldDefn oField41("Return_4_c", OFTReal);
	OGRFieldDefn oField42("Return_5_c", OFTReal);
	OGRFieldDefn oField43("Return_6_c", OFTReal);
	OGRFieldDefn oField44("Return_7_c", OFTReal);
	OGRFieldDefn oField45("Return_8_c", OFTReal);
	OGRFieldDefn oField46("Return_9_c", OFTReal);
	OGRFieldDefn oField47("Other_retu", OFTReal);
	OGRFieldDefn oField48("Perc_1st_a", OFTReal);
	OGRFieldDefn oField49("Perc_all_a", OFTReal);
	OGRFieldDefn oField50("AllRet_div", OFTReal);
	OGRFieldDefn oField51("Frs_ret_Ab", OFTReal);
	OGRFieldDefn oField52("All_ret_Ab", OFTReal);
	OGRFieldDefn oField53("P1stGTMean", OFTReal);
	OGRFieldDefn oField54("P1stGTMode", OFTReal);
	OGRFieldDefn oField55("PAGT_mean", OFTReal);
	OGRFieldDefn oField56("PAGT_mode", OFTReal);
	OGRFieldDefn oField57("PAOvrMean1", OFTReal);
	OGRFieldDefn oField58("PAOvrMode1", OFTReal);
	OGRFieldDefn oField59("FGT_mean", OFTReal);
	OGRFieldDefn oField60("FGT_mode", OFTReal);
	OGRFieldDefn oField61("All_GT_mea", OFTReal);
	OGRFieldDefn oField62("All_GT_mod", OFTReal);
	OGRFieldDefn oField63("Total_firs", OFTReal);
	OGRFieldDefn oField64("TotalAll", OFTReal);
	OGRFieldDefn oField65("EMAD_Med", OFTReal);
	OGRFieldDefn oField66("EMAD_Mode", OFTReal);
	OGRFieldDefn oField67("CRRatio", OFTReal);
	OGRFieldDefn oField68("EQuadMean", OFTReal);
	OGRFieldDefn oField69("eCubicMean", OFTReal);

	if (poLayer->CreateField(&oField0) != OGRERR_NONE)
	{
		printf("Creating row field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField1) != OGRERR_NONE)
	{
		printf("Creating col field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField2) != OGRERR_NONE)
	{
		printf("Creating center_X field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField3) != OGRERR_NONE)
	{
		printf("Creating center_Y field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField4) != OGRERR_NONE)
	{
		printf("Creating Total_retu field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField5) != OGRERR_NONE)
	{
		printf("Creating Elev_minim field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField6) != OGRERR_NONE)
	{
		printf("Creating Elev_maxim field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField7) != OGRERR_NONE)
	{
		printf("Creating Elev_mean field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField8) != OGRERR_NONE)
	{
		printf("Creating Elev_mode field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField9) != OGRERR_NONE)
	{
		printf("Creating Elev_stdde field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField10) != OGRERR_NONE)
	{
		printf("Creating Elev_varia field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField11) != OGRERR_NONE)
	{
		printf("Creating Elev_CV field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField12) != OGRERR_NONE)
	{
		printf("Creating Elev_IQ field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField13) != OGRERR_NONE)
	{
		printf("Creating Elev_skewn field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField14) != OGRERR_NONE)
	{
		printf("Creating Elev_kurto field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField15) != OGRERR_NONE)
	{
		printf("Creating Elev_AAD field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField16) != OGRERR_NONE)
	{
		printf("Creating Elev_L1 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField17) != OGRERR_NONE)
	{
		printf("Creating Elev_L2 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField18) != OGRERR_NONE)
	{
		printf("Creating Elev_L3 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField19) != OGRERR_NONE)
	{
		printf("Creating Elev_L4 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField20) != OGRERR_NONE)
	{
		printf("Creating Elev_L_CV field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField21) != OGRERR_NONE)
	{
		printf("Creating Elev_L_ske field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField22) != OGRERR_NONE)
	{
		printf("Creating Elev_L_kur field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField23) != OGRERR_NONE)
	{
		printf("Creating Elev_P01 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField24) != OGRERR_NONE)
	{
		printf("Creating Elev_P05 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField25) != OGRERR_NONE)
	{
		printf("Creating Elev_P10 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField26) != OGRERR_NONE)
	{
		printf("Creating Elev_P20 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField27) != OGRERR_NONE)
	{
		printf("Creating Elev_P25 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField28) != OGRERR_NONE)
	{
		printf("Creating Elev_P30 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField29) != OGRERR_NONE)
	{
		printf("Creating Elev_P40 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField30) != OGRERR_NONE)
	{
		printf("Creating Elev_P50 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField31) != OGRERR_NONE)
	{
		printf("Creating Elev_P60 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField32) != OGRERR_NONE)
	{
		printf("Creating Elev_P70 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField33) != OGRERR_NONE)
	{
		printf("Creating Elev_P75 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField34) != OGRERR_NONE)
	{
		printf("Creating Elev_P80 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField35) != OGRERR_NONE)
	{
		printf("Creating Elev_P90 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField36) != OGRERR_NONE)
	{
		printf("Creating Elev_P95 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField37) != OGRERR_NONE)
	{
		printf("Creating Elev_P99 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField38) != OGRERR_NONE)
	{
		printf("Creating Return_1_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField39) != OGRERR_NONE)
	{
		printf("Creating Return_2_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField40) != OGRERR_NONE)
	{
		printf("Creating Return_3_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField41) != OGRERR_NONE)
	{
		printf("Creating Return_4_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField42) != OGRERR_NONE)
	{
		printf("Creating Return_5_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField43) != OGRERR_NONE)
	{
		printf("Creating Return_6_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField44) != OGRERR_NONE)
	{
		printf("Creating Return_7_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField45) != OGRERR_NONE)
	{
		printf("Creating Return_8_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField46) != OGRERR_NONE)
	{
		printf("Creating Return_9_c field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField47) != OGRERR_NONE)
	{
		printf("Creating Other_retu field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField48) != OGRERR_NONE)
	{
		printf("Creating Perc_1st_a field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField49) != OGRERR_NONE)
	{
		printf("Creating Perc_all_a field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField50) != OGRERR_NONE)
	{
		printf("Creating AllRet_div field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField51) != OGRERR_NONE)
	{
		printf("Creating Frs_ret_Ab field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField52) != OGRERR_NONE)
	{
		printf("Creating All_ret_Ab field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField53) != OGRERR_NONE)
	{
		printf("Creating P1stGTMean field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField54) != OGRERR_NONE)
	{
		printf("Creating P1stGTMode field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField55) != OGRERR_NONE)
	{
		printf("Creating PAGT_mean field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField56) != OGRERR_NONE)
	{
		printf("Creating PAGT_mode field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField57) != OGRERR_NONE)
	{
		printf("Creating PAOvrMean1 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField58) != OGRERR_NONE)
	{
		printf("Creating PAOvrMode1 field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField59) != OGRERR_NONE)
	{
		printf("Creating FGT_mean field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField60) != OGRERR_NONE)
	{
		printf("Creating FGT_mode field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField61) != OGRERR_NONE)
	{
		printf("Creating All_GT_mea field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField62) != OGRERR_NONE)
	{
		printf("Creating All_GT_mod field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField63) != OGRERR_NONE)
	{
		printf("Creating Total_firs field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField64) != OGRERR_NONE)
	{
		printf("Creating TotalAll field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField65) != OGRERR_NONE)
	{
		printf("Creating EMAD_Med field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField66) != OGRERR_NONE)
	{
		printf("Creating EMAD_Mode field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField67) != OGRERR_NONE)
	{
		printf("Creating CRRatio field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField68) != OGRERR_NONE)
	{
		printf("Creating EQuadMean field failed.\n");
		exit(1);
	}
	if (poLayer->CreateField(&oField69) != OGRERR_NONE)
	{
		printf("Creating eCubicMean field failed.\n");
		exit(1);
	}


	double x, y;
	char szName[33];
	int k = -1;

	//"row INTEGER"  <-->  0
	//"col INTEGER"  <-->  1
	//"center_X REAL"  <-->  2
	//"center_Y REAL"  <-->  3
	//"Total_return_count REAL"  <-->  4
	//"Elev_minimum REAL"  <-->  5
	//"Elev_maximum REAL"  <-->  6
	//"Elev_mean REAL"  <-->  7
	//"Elev_mode REAL"  <-->  8
	//"Elev_stddev REAL"  <-->  9
	//"Elev_variance REAL"  <-->  10
	//"Elev_CV REAL"  <-->  11
	//"Elev_IQ REAL"  <-->  12
	//"Elev_skewness REAL"  <-->  13
	//"Elev_kurtosis REAL"  <-->  14
	//"Elev_AAD REAL"  <-->  15
	//"Elev_L1 REAL"  <-->  16
	//"Elev_L2 REAL"  <-->  17
	//"Elev_L3 REAL"  <-->  18
	//"Elev_L4 REAL"  <-->  19
	//"Elev_L_CV REAL"  <-->  20
	//"Elev_L_skewnes REALs"  <-->  21
	//"Elev_L_kurtosis REAL"  <-->  22
	//"Elev_P01 REAL"  <-->  23
	//"Elev_P05 REAL"  <-->  24
	//"Elev_P10 REAL"  <-->  25
	//"Elev_P20 REAL"  <-->  26
	//"Elev_P25 REAL"  <-->  27
	//"Elev_P30 REAL"  <-->  28
	//"Elev_P40 REAL"  <-->  29
	//"Elev_P50 REAL"  <-->  30
	//"Elev_P60 REAL"  <-->  31
	//"Elev_P70 REAL"  <-->  32
	//"Elev_P75 REAL"  <-->  33
	//"Elev_P80 REAL"  <-->  34
	//"Elev_P90 REAL"  <-->  35
	//"Elev_P95 REAL"  <-->  36
	//"Elev_P99 REAL"  <-->  37
	//"Return_1_count REAL"  <-->  38
	//"Return_2_count REAL"  <-->  39
	//"Return_3_count REAL"  <-->  40
	//"Return_4_count REAL"  <-->  41
	//"Return_5_count REAL"  <-->  42
	//"Return_6_count REAL"  <-->  43
	//"Return_7_count REAL"  <-->  44
	//"Return_8_count REAL"  <-->  45
	//"Return_9_count REAL"  <-->  46
	//"Other_return_count  REAL"  <-->  47
	//"Perc_1st_above_1 REAL"  <-->  48
	//"Perc_all_above_1  REAL"  <-->  49
	//"AllRet_div_1stRet  REAL"  <-->  50
	//"First_ret_Abv1 REAL"  <-->  51
	//"All_ret_Abv1 REAL"  <-->  52
	//"Perc1st_GT_Mean REAL"  <-->  53
	//"Perc1st_GT_Mode REAL"  <-->  54
	//"PercAll_GT_mean REAL"  <-->  55
	//"PercAll_GT_mode REAL"  <-->  56
	//"PercAllOverMean_to_1st REAL"  <-->  57
	//"PercAllOverMode_to_1st REAL"  <-->  58
	//"First_GT_mean REAL"  <-->  59
	//"First_GT_mode REAL"  <-->  60
	//"All_GT_mean REAL"  <-->  61
	//"All_GT_mode REAL"  <-->  62
	//"Total_first_returns REAL"  <-->  63
	//"Total_all_returns REAL"  <-->  64
	//"Elev_MAD_median REAL"  <-->  65
	//"Elev_MAD_mode REAL"  <-->  66
	//"Canopy_relief_ratio REAL"  <-->  67
	//"Elev_quadratic_mean REAL "  <-->  68
	//"Elev_cubic_mean REAL"  <-->  69

	double val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, \
		val15, val16, val17, val18, val19, val20, val21, val22, val23, val24, val25, val26, val27, val28, \
		val29, val30, val31, val32, val33, val34, val35, val36, val37, val38, val39, val40, val41, val42, \
		val43, val44, val45, val46, val47, val48, val49, val50, val51, val52, val53, val54, val55, val56, \
		val57, val58, val59, val60, val61, val62, val63, val64, val65, val66, val67, val68, val69;

	while (std::getline(fileIn,value))
	//}
		//&& fscanf(stdin, "%lf,%lf,%32s", &x, &y, szName) == 3)
	{   
		k++;
		//skip the header line
		if (k == 0){ continue; }
		std::vector<std::string> elems;
		std::vector<std::string> stringVector = split(value, ',', elems );
		//elems is a vector of strings with vals

		OGRFeature *poFeature;
		poFeature = OGRFeature::CreateFeature(poLayer->GetLayerDefn());
		//SetAll Fieldds

		val0 = std::atoi(elems.at(0).c_str());
	    //std::cout << val0 <<std::endl;
		val1 = std::atoi(elems.at(1).c_str());
		val2 = std::atof(elems.at(2).c_str());
		val3 = std::atof(elems.at(3).c_str());
		val4 = std::atof(elems.at(4).c_str());
		val5 = std::atof(elems.at(5).c_str());
		val6 = std::atof(elems.at(6).c_str());
		val7 = std::atof(elems.at(7).c_str());
		val8 = std::atof(elems.at(8).c_str());
		val9 = std::atof(elems.at(9).c_str());
		val10 = std::atof(elems.at(10).c_str());
		val11 = std::atof(elems.at(11).c_str());
		val12 = std::atof(elems.at(12).c_str());
		val13 = std::atof(elems.at(13).c_str());
		val14 = std::atof(elems.at(14).c_str());
		val15 = std::atof(elems.at(15).c_str());
		val16 = std::atof(elems.at(16).c_str());
		val17 = std::atof(elems.at(17).c_str());
		val18 = std::atof(elems.at(18).c_str());
		val19 = std::atof(elems.at(19).c_str());
		val20 = std::atof(elems.at(20).c_str());
		val21 = std::atof(elems.at(21).c_str());
		val22 = std::atof(elems.at(22).c_str());
		val23 = std::atof(elems.at(23).c_str());
		val24 = std::atof(elems.at(24).c_str());
		val25 = std::atof(elems.at(25).c_str());
		val26 = std::atof(elems.at(26).c_str());
		val27 = std::atof(elems.at(27).c_str());
		val28 = std::atof(elems.at(28).c_str());
		val29 = std::atof(elems.at(29).c_str());
		val30 = std::atof(elems.at(30).c_str());
		val31 = std::atof(elems.at(31).c_str());
		val32 = std::atof(elems.at(32).c_str());
		val33 = std::atof(elems.at(33).c_str());
		val34 = std::atof(elems.at(34).c_str());
		val35 = std::atof(elems.at(35).c_str());
		val36 = std::atof(elems.at(36).c_str());
		val37 = std::atof(elems.at(37).c_str());
		val38 = std::atof(elems.at(38).c_str());
		val39 = std::atof(elems.at(39).c_str());
		val40 = std::atof(elems.at(40).c_str());
		val41 = std::atof(elems.at(41).c_str());
		val42 = std::atof(elems.at(42).c_str());
		val43 = std::atof(elems.at(43).c_str());
		val44 = std::atof(elems.at(44).c_str());
		val45 = std::atof(elems.at(45).c_str());
		val46 = std::atof(elems.at(46).c_str());
		val47 = std::atof(elems.at(47).c_str());
		val48 = std::atof(elems.at(48).c_str());
		val49 = std::atof(elems.at(49).c_str());
		val50 = std::atof(elems.at(50).c_str());
		val51 = std::atof(elems.at(51).c_str());
		val52 = std::atof(elems.at(52).c_str());
		val53 = std::atof(elems.at(53).c_str());
		val54 = std::atof(elems.at(54).c_str());
		val55 = std::atof(elems.at(55).c_str());
		val56 = std::atof(elems.at(56).c_str());
		val57 = std::atof(elems.at(57).c_str());
		val58 = std::atof(elems.at(58).c_str());
		val59 = std::atof(elems.at(59).c_str());
		val60 = std::atof(elems.at(60).c_str());
		val61 = std::atof(elems.at(61).c_str());
		val62 = std::atof(elems.at(62).c_str());
		val63 = std::atof(elems.at(63).c_str());
		val64 = std::atof(elems.at(64).c_str());
		val65 = std::atof(elems.at(65).c_str());
		val66 = std::atof(elems.at(66).c_str());
		val67 = std::atof(elems.at(67).c_str());
		val68 = std::atof(elems.at(68).c_str());
		val69 = std::atof(elems.at(69).c_str());

		//poFeature->SetField("Name", szName);
		poFeature->SetField("row", val0);
		poFeature->SetField("col", val1);
		poFeature->SetField("center_X", val2);
		poFeature->SetField("center_Y", val3);
		poFeature->SetField("Total_retu", val4);
		poFeature->SetField("Elev_minim", val5);
		poFeature->SetField("Elev_maxim", val6);
		poFeature->SetField("Elev_mean", val7);
		poFeature->SetField("Elev_mode", val8);
		poFeature->SetField("Elev_stdde", val9);
		poFeature->SetField("Elev_varia", val10);
		poFeature->SetField("Elev_CV", val11);
		poFeature->SetField("Elev_IQ", val12);
		poFeature->SetField("Elev_skewn", val13);
		poFeature->SetField("Elev_kurto", val14);
		poFeature->SetField("Elev_AAD", val15);
		poFeature->SetField("Elev_L1", val16);
		poFeature->SetField("Elev_L2", val17);
		poFeature->SetField("Elev_L3", val18);
		poFeature->SetField("Elev_L4", val19);
		poFeature->SetField("Elev_L_CV", val20);
		poFeature->SetField("Elev_L_ske", val21);
		poFeature->SetField("Elev_L_kur", val22);
		poFeature->SetField("Elev_P01", val23);
		poFeature->SetField("Elev_P05", val24);
		poFeature->SetField("Elev_P10", val25);
		poFeature->SetField("Elev_P20", val26);
		poFeature->SetField("Elev_P25", val27);
		poFeature->SetField("Elev_P30", val28);
		poFeature->SetField("Elev_P40", val29);
		poFeature->SetField("Elev_P50", val30);
		poFeature->SetField("Elev_P60", val31);
		poFeature->SetField("Elev_P70", val32);
		poFeature->SetField("Elev_P75", val33);
		poFeature->SetField("Elev_P80", val34);
		poFeature->SetField("Elev_P90", val35);
		poFeature->SetField("Elev_P95", val36);
		poFeature->SetField("Elev_P99", val37);
		poFeature->SetField("Return_1_c", val38);
		poFeature->SetField("Return_2_c", val39);
		poFeature->SetField("Return_3_c", val40);
		poFeature->SetField("Return_4_c", val41);
		poFeature->SetField("Return_5_c", val42);
		poFeature->SetField("Return_6_c", val43);
		poFeature->SetField("Return_7_c", val44);
		poFeature->SetField("Return_8_c", val45);
		poFeature->SetField("Return_9_c", val46);
		poFeature->SetField("Other_retu", val47);
		poFeature->SetField("Perc_1st_a", val48);
		poFeature->SetField("Perc_all_a", val49);
		poFeature->SetField("AllRet_div", val50);
		poFeature->SetField("Frs_ret_Ab", val51);
		poFeature->SetField("All_ret_Ab", val52);
		poFeature->SetField("P1stGTMean", val53);
		poFeature->SetField("P1stGTMode", val54);
		poFeature->SetField("PAGT_mean", val55);
		poFeature->SetField("PAGT_mode", val56);
		poFeature->SetField("PAOvrMean1", val57);
		poFeature->SetField("PAOvrMode1", val58);
		poFeature->SetField("FGT_mean", val59);
		poFeature->SetField("FGT_mode", val60);
		poFeature->SetField("All_GT_mea", val61);
		poFeature->SetField("All_GT_mod", val62);
		poFeature->SetField("Total_firs", val63);
		poFeature->SetField("TotalAll", val64);
		poFeature->SetField("EMAD_Med", val65);
		poFeature->SetField("EMAD_Mode", val66);
		poFeature->SetField("CRRatio", val67);
		poFeature->SetField("EQuadMean", val68);
		poFeature->SetField("eCubicMean", val69);

		OGRPoint pt;

		double posX = std::atof( elems.at(2).c_str() );
		double posY = std::atof( elems.at(3).c_str() );

		pt.setX( posX );
		pt.setY( posY );

		poFeature->SetGeometry(&pt);
		if (poLayer->CreateFeature(poFeature) != OGRERR_NONE)
		{
			printf("Failed to create feature in shapefile.\n");
			exit(1);
		}
		OGRFeature::DestroyFeature(poFeature);
	}
	GDALClose(poDS);
}