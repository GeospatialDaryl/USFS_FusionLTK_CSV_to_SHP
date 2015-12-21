# USFS_FusionLTK_CSV_to_SHP

A VS2013 project that generates point SHP from output of the USFS Fusion/LTK Metrics programs (e.g. CloudMetrics)

Daryl Van Dyke - USFWS GIS Analyst - Strategic Habitat Conservation

      1.0  - 2015-12-17 -  Intial Release with GDAL2.0 lib @ x64  
                            for matches FUSION v3.50
 
This program implements a CSV to Shapefile conversion of the metrics produced by the [USFS Fusion/LTK LiDAR Processing Package](http://forsys.cfr.washington.edu/fusion/fusionlatest.html "Fusion/LTK Homepage").   The tool takes as input the CSV metrics files produced by GridMetrics.exe and CloudMetrics.exe (elevation and intensity outputs) and produces Shapefiles.  There is no projection set on the SHP, so the user should either add the appropriate .PRJ or make sure to correctly set the projection in a GIS package.

Field width on DBF in SHP is limited to 10 characters - narrower than is comfortable - and therefore the field names have been somewhat mangled from the original names assigned in the output files from Fusion.  As a result, the SHP field names are < 10 character codes.  They should be somewhat easy to read.  You can query the dictionary for these codes by calling 'CSV_to_pntSHP.exe --dictionary'.  This will print the dictionary to the screen, or can be routed to a text file ( 'CSV_to_pntSHP.exe --dictionary > dictionary.txt).

The tool is used by passing two arguments at the command line:
1. name_of_output.csv or /full/path/to/output.csv
2. name_of_output.shp or /full/path/to/output.shp

Please send gut reports to daryl_van_dyke@fws.gov
