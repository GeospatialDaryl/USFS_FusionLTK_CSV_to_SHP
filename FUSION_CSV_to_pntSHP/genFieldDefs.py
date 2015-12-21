str1="    if (poLayer->CreateField(&oField"
str1i=") != OGRERR_NONE)"
str2="    {"
str3='        printf("Creating '
str3i=' field failed.'
str4="        exit(1);"
str5="    }"

listCols = ["row","col","center_X","center_Y","Total_retu","Elev_minim","Elev_maxim","Elev_mean","Elev_mode","Elev_stdde","Elev_varia","Elev_CV","Elev_IQ","Elev_skewn","Elev_kurto","Elev_AAD","Elev_L1","Elev_L2","Elev_L3","Elev_L4","Elev_L_CV","Elev_L_ske","Elev_L_kur","Elev_P01","Elev_P05","Elev_P10","Elev_P20","Elev_P25","Elev_P30","Elev_P40","Elev_P50","Elev_P60","Elev_P70","Elev_P75","Elev_P80","Elev_P90","Elev_P95","Elev_P99","Return_1_c","Return_2_c","Return_3_c","Return_4_c","Return_5_c","Return_6_c","Return_7_c","Return_8_c","Return_9_c","Other_retu","Perc_1st_a","Perc_all_a","AllRet_div","Frs_ret_Ab","All_ret_Ab","P1stGTMean","P1stGTMode","PAGT_mean","PAGT_mode","PAOvrMean1","PAOvrMode1","FGT_mean","FGT_mode","All_GT_mea","All_GT_mod","Total_firs","TotalAll","EMAD_Med","EMAD_Mode","CRRatio","EQuadMean","eCubicMean"]

k = 0
for items in listCols:
    print str1+str(k)+str1i
    print str2
    print str3+items+str3i+'''");'''
    print str4
    print str5
    k=k+1
