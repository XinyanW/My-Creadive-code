/*
   Arduino2Max
   Code for Max/MSP:

   {
 "boxes" : [     {
      "box" :       {
        "maxclass" : "message",
        "text" : "0",
        "patching_rect" : [ 382.0, 841.0, 29.5, 22.0 ],
        "id" : "obj-26",
        "numoutlets" : 1,
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "pause",
        "patching_rect" : [ 340.833191, 885.66687, 43.0, 22.0 ],
        "id" : "obj-14",
        "numoutlets" : 1,
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "flonum",
        "patching_rect" : [ 203.999847, 302.666718, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-6",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "format" : 6,
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "if $f1 > 0. then 0. else 1.",
        "fontface" : 0,
        "patching_rect" : [ 203.999847, 261.166718, 139.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-7",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "inc",
        "patching_rect" : [ 875.166565, 575.166748, 36.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-337",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 921.083374, 777.166626, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-336",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 800.666687, 485.333282, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-312",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "1",
        "patching_rect" : [ 511.083313, 348.666718, 29.5, 22.0 ],
        "id" : "obj-313",
        "numoutlets" : 1,
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 508.083191, 393.333405, 24.0, 24.0 ],
        "id" : "obj-314",
        "numoutlets" : 1,
        "presentation_rect" : [ 522.083191, 574.666687, 24.0, 24.0 ],
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 633.666626, 397.333405, 20.0, 20.0 ],
        "presentation" : 1,
        "id" : "obj-315",
        "numoutlets" : 1,
        "bgcolor" : [ 1.0, 0.535997, 0.794332, 1.0 ],
        "parameter_enable" : 0,
        "presentation_rect" : [ 674.333313, 539.5, 78.0, 78.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "metro 2000",
        "fontface" : 0,
        "patching_rect" : [ 664.0, 492.5, 76.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-316",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 664.0, 554.0, 24.0, 24.0 ],
        "id" : "obj-317",
        "numoutlets" : 1,
        "presentation_rect" : [ 724.166504, 779.333313, 24.0, 24.0 ],
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 853.166565, 772.333252, 24.0, 24.0 ],
        "id" : "obj-318",
        "numoutlets" : 1,
        "parameter_enable" : 0,
        "presentation_rect" : [ 822.499878, 937.666626, 24.0, 24.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 800.666687, 767.5, 24.0, 24.0 ],
        "id" : "obj-319",
        "numoutlets" : 1,
        "parameter_enable" : 0,
        "presentation_rect" : [ 789.499878, 966.833374, 24.0, 24.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 690.0, 767.5, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-320",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "counter 0 0 6",
        "fontface" : 0,
        "patching_rect" : [ 690.0, 631.5, 86.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-321",
        "numoutlets" : 4,
        "fontname" : "Arial",
        "outlettype" : [ "int", "", "", "int" ],
        "style" : "",
        "numinlets" : 5
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 690.0, 836.666748, 24.0, 24.0 ],
        "id" : "obj-322",
        "numoutlets" : 1,
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "0",
        "patching_rect" : [ 543.0, 1009.66687, 32.5, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-323",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 708.0, 1038.66687, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-324",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "route populate",
        "patching_rect" : [ 708.0, 1010.66687, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-325",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "outlettype" : [ "", "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "random 6",
        "fontface" : 0,
        "patching_rect" : [ 690.0, 871.66687, 61.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-326",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t 1",
        "patching_rect" : [ 591.0, 1008.66687, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-327",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "ezdac~",
        "patching_rect" : [ 621.0, 1096.66687, 45.0, 45.0 ],
        "id" : "obj-328",
        "numoutlets" : 0,
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend open",
        "patching_rect" : [ 618.0, 1007.66687, 85.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-329",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 690.0, 899.66687, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-330",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "sfplay~ 2",
        "patching_rect" : [ 618.0, 1041.66687, 59.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-331",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "outlettype" : [ "signal", "signal", "bang" ],
        "style" : "",
        "numinlets" : 2,
        "saved_object_attributes" :         {
          "basictuning" : 440,
          "followglobaltempo" : 0,
          "formantcorrection" : 0,
          "mode" : "basic",
          "originallength" : [ 1199.5, "ticks" ],
          "originaltempo" : 120.0,
          "pitchcorrection" : 0,
          "quality" : "basic",
          "timestretch" : [ 0 ]
        }

      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend prefix",
        "patching_rect" : [ 527.0, 941.66687, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-332",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "umenu",
        "fontface" : 0,
        "patching_rect" : [ 527.0, 979.500122, 200.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-333",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "prefix" : "Macintosh HD:/Users/xinyanwang/Desktop/ProudBox/final2/crying2/",
        "parameter_enable" : 0,
        "items" : [ "1.m4a", ",", "2.m4a", ",", "3.m4a", ",", "4.m4a", ",", "5.m4a", ",", "6.m4a" ],
        "outlettype" : [ "int", "", "" ],
        "style" : "",
        "numinlets" : 1,
        "autopopulate" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "dropfile",
        "patching_rect" : [ 527.0, 885.66687, 87.0, 44.0 ],
        "id" : "obj-334",
        "numoutlets" : 2,
        "outlettype" : [ "", "" ],
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t 0",
        "patching_rect" : [ 1705.333374, 706.0, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-179",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "gate",
        "patching_rect" : [ 1649.0, 706.0, 34.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-180",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t b",
        "patching_rect" : [ 1649.0, 735.5, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-181",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "1",
        "patching_rect" : [ 1649.0, 602.5, 32.5, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-183",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "counter 0 0 5",
        "fontface" : 0,
        "patching_rect" : [ 1664.0, 675.5, 81.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-184",
        "numoutlets" : 4,
        "fontname" : "Arial",
        "outlettype" : [ "int", "", "", "int" ],
        "style" : "",
        "numinlets" : 5
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 302.333313, 450.333282, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-177",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 1407.5, 537.666626, 24.0, 24.0 ],
        "id" : "obj-157",
        "numoutlets" : 1,
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "0",
        "patching_rect" : [ 1271.666748, 734.666626, 29.5, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-158",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 1436.666748, 763.666626, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-159",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "route populate",
        "patching_rect" : [ 1436.666748, 735.666626, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-160",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "outlettype" : [ "", "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "random 5",
        "fontface" : 0,
        "patching_rect" : [ 1418.666748, 596.666626, 61.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-161",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t 1",
        "patching_rect" : [ 1319.666748, 733.666626, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-162",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend open",
        "patching_rect" : [ 1346.666748, 732.666626, 85.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-164",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 1418.666748, 624.666626, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-165",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "sfplay~ 2",
        "patching_rect" : [ 1346.666748, 766.666626, 59.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-166",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "outlettype" : [ "signal", "signal", "bang" ],
        "style" : "",
        "numinlets" : 2,
        "saved_object_attributes" :         {
          "basictuning" : 440,
          "followglobaltempo" : 0,
          "formantcorrection" : 0,
          "mode" : "basic",
          "originallength" : [ 5115.820408, "ticks" ],
          "originaltempo" : 120.0,
          "pitchcorrection" : 0,
          "quality" : "basic",
          "timestretch" : [ 0 ]
        }

      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend prefix",
        "patching_rect" : [ 1255.666748, 666.666626, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-167",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "umenu",
        "fontface" : 0,
        "patching_rect" : [ 1255.666748, 704.499939, 200.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-168",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "prefix" : "Macintosh HD:/Users/xinyanwang/Desktop/ProudBox/crying/",
        "parameter_enable" : 0,
        "items" : [ "crying 3_01.mp3", ",", "crying 4_01.mp3" ],
        "outlettype" : [ "int", "", "" ],
        "style" : "",
        "numinlets" : 1,
        "autopopulate" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "dropfile",
        "patching_rect" : [ 1255.666748, 610.666626, 87.0, 44.0 ],
        "id" : "obj-169",
        "numoutlets" : 2,
        "outlettype" : [ "", "" ],
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "1",
        "patching_rect" : [ 62.416622, 364.666656, 29.5, 22.0 ],
        "id" : "obj-156",
        "numoutlets" : 1,
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 59.4165, 409.333344, 24.0, 24.0 ],
        "id" : "obj-154",
        "numoutlets" : 1,
        "presentation_rect" : [ 666.499878, 274.000031, 24.0, 24.0 ],
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 211.666626, 374.166687, 20.0, 20.0 ],
        "presentation" : 1,
        "id" : "obj-147",
        "numoutlets" : 1,
        "bgcolor" : [ 1.0, 0.535997, 0.794332, 1.0 ],
        "parameter_enable" : 0,
        "presentation_rect" : [ 85.166672, 343.333344, 78.0, 78.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "metro 1500",
        "fontface" : 0,
        "patching_rect" : [ 297.833191, 495.500061, 76.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-148",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 256.499847, 579.0, 24.0, 24.0 ],
        "id" : "obj-149",
        "numoutlets" : 1,
        "presentation_rect" : [ 539.0, 203.5, 24.0, 24.0 ],
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 394.166534, 745.0, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-20",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 354.833191, 737.333313, 24.0, 24.0 ],
        "id" : "obj-16",
        "numoutlets" : 1,
        "parameter_enable" : 0,
        "presentation_rect" : [ 587.0, 347.0, 24.0, 24.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "toggle",
        "patching_rect" : [ 321.833191, 766.500061, 24.0, 24.0 ],
        "id" : "obj-11",
        "numoutlets" : 1,
        "parameter_enable" : 0,
        "presentation_rect" : [ 563.0, 381.0, 24.0, 24.0 ],
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 191.666626, 732.500061, 50.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-150",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "inc",
        "patching_rect" : [ 394.166534, 486.500061, 36.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-151",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "counter 0 0 5",
        "fontface" : 0,
        "patching_rect" : [ 297.833191, 663.500061, 86.0, 23.0 ],
        "fontsize" : 13.0,
        "id" : "obj-152",
        "numoutlets" : 4,
        "fontname" : "Arial",
        "outlettype" : [ "int", "", "", "int" ],
        "style" : "",
        "numinlets" : 5
      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 196.666626, 836.666748, 24.0, 24.0 ],
        "id" : "obj-109",
        "numoutlets" : 1,
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "0",
        "patching_rect" : [ 49.666622, 1009.666748, 32.5, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-110",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 214.666626, 1038.666748, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-21",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "route populate",
        "patching_rect" : [ 214.666626, 1010.666748, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-19",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "outlettype" : [ "", "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "random 5",
        "fontface" : 0,
        "patching_rect" : [ 196.666626, 871.666748, 61.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-18",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t 1",
        "patching_rect" : [ 97.666618, 1008.666748, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-17",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "ezdac~",
        "patching_rect" : [ 127.666626, 1096.666748, 45.0, 45.0 ],
        "id" : "obj-111",
        "numoutlets" : 0,
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend open",
        "patching_rect" : [ 124.666618, 1007.666748, 85.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-12",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 196.666626, 899.666748, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-112",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "sfplay~ 2",
        "patching_rect" : [ 124.666618, 1041.666748, 59.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-113",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "outlettype" : [ "signal", "signal", "bang" ],
        "style" : "",
        "numinlets" : 2,
        "saved_object_attributes" :         {
          "basictuning" : 440,
          "followglobaltempo" : 0,
          "formantcorrection" : 0,
          "mode" : "basic",
          "originallength" : [ 827.559184, "ticks" ],
          "originaltempo" : 120.0,
          "pitchcorrection" : 0,
          "quality" : "basic",
          "timestretch" : [ 0 ]
        }

      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend prefix",
        "patching_rect" : [ 33.666622, 941.666748, 87.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-114",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "umenu",
        "fontface" : 0,
        "patching_rect" : [ 33.666626, 979.500122, 200.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-115",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "prefix" : "Macintosh HD:/Users/xinyanwang/Desktop/ProudBox/final2/sound/",
        "parameter_enable" : 0,
        "items" : [ "Do not come over_01.mp3", ",", "Get out_01.mp3", ",", "go away_02.mp3", ",", "Keep away from me_01.mp3", ",", "Leave me_01.mp3" ],
        "outlettype" : [ "int", "", "" ],
        "style" : "",
        "numinlets" : 1,
        "autopopulate" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "dropfile",
        "patching_rect" : [ 33.666622, 885.666748, 87.0, 44.0 ],
        "id" : "obj-116",
        "numoutlets" : 2,
        "outlettype" : [ "", "" ],
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 299.666656, 193.666611, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-64",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "change",
        "patching_rect" : [ 299.666656, 124.333344, 50.0, 22.0 ],
        "id" : "obj-87",
        "numoutlets" : 3,
        "outlettype" : [ "", "int", "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 73.0, 210.500015, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-59",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "change",
        "patching_rect" : [ 73.0, 172.333344, 50.0, 22.0 ],
        "id" : "obj-61",
        "numoutlets" : 3,
        "outlettype" : [ "", "int", "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "number",
        "patching_rect" : [ 85.183411, 66.833351, 50.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-62",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "parameter_enable" : 0,
        "outlettype" : [ "", "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "r d3",
        "fontface" : 0,
        "patching_rect" : [ 85.183411, 32.333351, 32.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-63",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 0
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "p Arduino2Max",
        "patching_rect" : [ 551.666626, 38.333344, 132.0, 29.0 ],
        "fontsize" : 18.0,
        "id" : "obj-36",
        "color" : [ 1.0, 0.741176, 0.196078, 1.0 ],
        "numoutlets" : 0,
        "style" : "",
        "numinlets" : 0,
        "patcher" :         {
          "fileversion" : 1,
          "appversion" :          {
            "major" : 7,
            "minor" : 0,
            "revision" : 0,
            "architecture" : "x64",
            "modernui" : 1
          }
,
          "rect" : [ 343.0, 138.0, 930.0, 670.0 ],
          "bglocked" : 0,
          "openinpresentation" : 0,
          "default_fontsize" : 12.0,
          "default_fontface" : 0,
          "default_fontname" : "Arial",
          "gridonopen" : 1,
          "gridsize" : [ 15.0, 15.0 ],
          "gridsnaponopen" : 1,
          "objectsnaponopen" : 1,
          "statusbarvisible" : 2,
          "toolbarvisible" : 1,
          "lefttoolbarpinned" : 0,
          "toptoolbarpinned" : 0,
          "righttoolbarpinned" : 0,
          "bottomtoolbarpinned" : 0,
          "toolbars_unpinned_last_save" : 0,
          "tallnewobj" : 0,
          "boxanimatetime" : 200,
          "enablehscroll" : 1,
          "enablevscroll" : 1,
          "devicewidth" : 0.0,
          "description" : "",
          "digest" : "",
          "tags" : "",
          "style" : "",
          "subpatcher_template" : "",
          "boxes" : [             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "How to use Arduino2Max: see the readme.txt file!",
                "linecount" : 2,
                "patching_rect" : [ 814.0, 377.0, 169.0, 31.0 ],
                "fontsize" : 10.0,
                "id" : "obj-3",
                "numoutlets" : 0,
                "fontname" : "Verdana",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r portinfo",
                "patching_rect" : [ 487.0, 205.0, 54.0, 19.0 ],
                "hidden" : 1,
                "fontsize" : 9.0,
                "id" : "obj-5",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "umenu",
                "fontface" : 0,
                "patching_rect" : [ 487.0, 249.0, 149.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-6",
                "numoutlets" : 3,
                "fontname" : "Arial",
                "labelclick" : 1,
                "parameter_enable" : 0,
                "textcolor" : [ 0.047059, 0.0, 0.839216, 1.0 ],
                "items" : [ "Bluetooth-Incoming-Port", ",", "DOSSSoundBox-SerialPort", ",", "usbmodem1411", ",", "usbmodem1451", ",", "Bluetooth-Modem", ",", 5, ",", 6, ",", 7 ],
                "outlettype" : [ "int", "", "" ],
                "style" : "",
                "numinlets" : 1,
                "bgfillcolor_type" : "color",
                "bgfillcolor_color1" : [ 0.376471, 0.384314, 0.4, 1.0 ],
                "bgfillcolor_color2" : [ 0.290196, 0.309804, 0.301961, 1.0 ],
                "bgfillcolor_color" : [ 1.0, 1.0, 1.0, 1.0 ],
                "bgfillcolor_angle" : 270.0,
                "bgfillcolor_proportion" : 0.39
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "Credits: Copyleft by Daniel Jolliffe Based on the Thomas Ouellet Fredricks' Simple Message System Thanks to Seejay James for the USB pulldown menu! V.6 November 2012",
                "linecount" : 6,
                "patching_rect" : [ 804.0, 214.0, 191.0, 79.0 ],
                "fontsize" : 10.0,
                "id" : "obj-7",
                "numoutlets" : 0,
                "fontname" : "Verdana",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "Arduino2Max",
                "patching_rect" : [ 467.0, 123.0, 141.0, 31.0 ],
                "fontsize" : 20.0,
                "id" : "obj-8",
                "numoutlets" : 0,
                "fontname" : "Verdana",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "panel",
                "patching_rect" : [ 50.0, 100.0, 965.0, 86.0 ],
                "id" : "obj-9",
                "numoutlets" : 0,
                "rounded" : 0,
                "style" : "",
                "numinlets" : 1,
                "mode" : 0,
                "angle" : 0.0,
                "bgcolor" : [ 1.0, 0.968627, 0.811765, 1.0 ],
                "proportion" : 0.39
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "To read a digital pin on the Arduino, make a receive object as shown at right.",
                "linecount" : 4,
                "patching_rect" : [ 66.0, 531.0, 121.0, 51.0 ],
                "fontsize" : 10.0,
                "id" : "obj-10",
                "numoutlets" : 0,
                "fontname" : "Arial",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "To read an analog pin on the Arudino, make a receive object as shown at right.",
                "linecount" : 4,
                "patching_rect" : [ 66.0, 379.0, 121.0, 51.0 ],
                "fontsize" : 10.0,
                "id" : "obj-11",
                "numoutlets" : 0,
                "fontname" : "Arial",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "Copy the block at right into your patch. (it does the work of reading the Arduino's pins) Connect the programmed Arduino, and then click \"start\". Click on help for more info.",
                "linecount" : 8,
                "patching_rect" : [ 66.0, 201.0, 117.0, 96.0 ],
                "fontsize" : 10.0,
                "id" : "obj-12",
                "numoutlets" : 0,
                "fontname" : "Arial",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a4",
                "patching_rect" : [ 438.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-13",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a5",
                "patching_rect" : [ 483.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-14",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a3",
                "patching_rect" : [ 395.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-15",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a2",
                "patching_rect" : [ 351.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-16",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a1",
                "patching_rect" : [ 307.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-17",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r a0",
                "patching_rect" : [ 262.0, 364.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-18",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d12",
                "patching_rect" : [ 632.0, 519.0, 35.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-19",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d13",
                "patching_rect" : [ 675.0, 519.0, 35.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-20",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d11",
                "patching_rect" : [ 589.0, 519.0, 35.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-21",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d10",
                "patching_rect" : [ 547.0, 519.0, 35.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-22",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d9",
                "patching_rect" : [ 510.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-23",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d8",
                "patching_rect" : [ 474.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-24",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d6",
                "patching_rect" : [ 403.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-25",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d7",
                "patching_rect" : [ 438.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-26",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d5",
                "patching_rect" : [ 367.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-27",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d4",
                "patching_rect" : [ 332.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-28",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d3",
                "patching_rect" : [ 298.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-29",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "r d2",
                "patching_rect" : [ 265.0, 519.0, 29.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-30",
                "numoutlets" : 1,
                "fontname" : "Arial",
                "outlettype" : [ "" ],
                "style" : "",
                "numinlets" : 0
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "Reading the Arduino's digital pins",
                "patching_rect" : [ 285.0, 604.0, 223.0, 21.0 ],
                "fontsize" : 12.0,
                "id" : "obj-31",
                "numoutlets" : 0,
                "fontname" : "Verdana",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 265.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-32",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 675.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-33",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 632.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-34",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 589.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-35",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 547.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-36",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 510.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-37",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 474.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-38",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 438.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-39",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 403.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-40",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 367.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-41",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 332.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-42",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "led",
                "patching_rect" : [ 298.0, 578.0, 17.0, 17.0 ],
                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                "id" : "obj-43",
                "numoutlets" : 1,
                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                "parameter_enable" : 0,
                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 262.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-44",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 307.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-45",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 351.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-46",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 395.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-47",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 438.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-48",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "number",
                "patching_rect" : [ 483.0, 425.0, 40.0, 20.0 ],
                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                "fontsize" : 10.0,
                "triscale" : 0.9,
                "id" : "obj-49",
                "numoutlets" : 2,
                "fontname" : "Arial",
                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                "parameter_enable" : 0,
                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                "outlettype" : [ "", "bang" ],
                "style" : "",
                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "toggle",
                "patching_rect" : [ 259.0, 229.0, 50.0, 50.0 ],
                "id" : "obj-50",
                "numoutlets" : 1,
                "parameter_enable" : 0,
                "outlettype" : [ "int" ],
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "start",
                "patching_rect" : [ 266.0, 206.0, 40.0, 20.0 ],
                "fontsize" : 12.0,
                "id" : "obj-51",
                "numoutlets" : 0,
                "fontname" : "Arial",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "comment",
                "text" : "Reading the Arduino's analog pins",
                "patching_rect" : [ 280.0, 452.0, 225.0, 21.0 ],
                "fontsize" : 12.0,
                "id" : "obj-52",
                "numoutlets" : 0,
                "fontname" : "Verdana",
                "style" : "",
                "numinlets" : 1
              }

            }
,             {
              "box" :               {
                "maxclass" : "newobj",
                "text" : "p arduinoSerialreader",
                "patching_rect" : [ 259.0, 295.0, 247.0, 19.0 ],
                "fontsize" : 9.0,
                "id" : "obj-53",
                "numoutlets" : 0,
                "fontname" : "Arial",
                "style" : "",
                "numinlets" : 2,
                "patcher" :                 {
                  "fileversion" : 1,
                  "appversion" :                  {
                    "major" : 7,
                    "minor" : 0,
                    "revision" : 0,
                    "architecture" : "x64",
                    "modernui" : 1
                  }
,
                  "rect" : [ 255.0, 116.0, 1370.0, 856.0 ],
                  "bglocked" : 0,
                  "openinpresentation" : 0,
                  "default_fontsize" : 12.0,
                  "default_fontface" : 0,
                  "default_fontname" : "Arial",
                  "gridonopen" : 1,
                  "gridsize" : [ 15.0, 15.0 ],
                  "gridsnaponopen" : 1,
                  "objectsnaponopen" : 1,
                  "statusbarvisible" : 2,
                  "toolbarvisible" : 1,
                  "lefttoolbarpinned" : 0,
                  "toptoolbarpinned" : 0,
                  "righttoolbarpinned" : 0,
                  "bottomtoolbarpinned" : 0,
                  "toolbars_unpinned_last_save" : 0,
                  "tallnewobj" : 0,
                  "boxanimatetime" : 200,
                  "enablehscroll" : 1,
                  "enablevscroll" : 1,
                  "devicewidth" : 0.0,
                  "description" : "",
                  "digest" : "",
                  "tags" : "",
                  "style" : "",
                  "subpatcher_template" : "",
                  "boxes" : [                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "r help",
                        "patching_rect" : [ 976.0, 191.0, 36.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-1",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 0
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s portselect",
                        "patching_rect" : [ 1173.0, 205.0, 64.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-2",
                        "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "r portselect",
                        "patching_rect" : [ 35.0, 276.0, 64.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-3",
                        "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 0
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s portinfo",
                        "patching_rect" : [ 229.0, 447.0, 54.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-4",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "p sorter",
                        "patching_rect" : [ 229.0, 412.0, 50.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-5",
                        "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1,
                        "patcher" :                         {
                          "fileversion" : 1,
                          "appversion" :                          {
                            "major" : 7,
                            "minor" : 0,
                            "revision" : 0,
                            "architecture" : "x64",
                            "modernui" : 1
                          }
,
                          "rect" : [ 13.0, 88.0, 471.0, 388.0 ],
                          "bglocked" : 0,
                          "openinpresentation" : 0,
                          "default_fontsize" : 12.0,
                          "default_fontface" : 0,
                          "default_fontname" : "Arial",
                          "gridonopen" : 1,
                          "gridsize" : [ 15.0, 15.0 ],
                          "gridsnaponopen" : 1,
                          "objectsnaponopen" : 1,
                          "statusbarvisible" : 2,
                          "toolbarvisible" : 1,
                          "lefttoolbarpinned" : 0,
                          "toptoolbarpinned" : 0,
                          "righttoolbarpinned" : 0,
                          "bottomtoolbarpinned" : 0,
                          "toolbars_unpinned_last_save" : 0,
                          "tallnewobj" : 0,
                          "boxanimatetime" : 200,
                          "enablehscroll" : 1,
                          "enablevscroll" : 1,
                          "devicewidth" : 0.0,
                          "description" : "",
                          "digest" : "",
                          "tags" : "",
                          "style" : "",
                          "subpatcher_template" : "",
                          "boxes" : [                             {
                              "box" :                               {
                                "maxclass" : "outlet",
                                "patching_rect" : [ 24.0, 246.0, 20.0, 20.0 ],
                                "id" : "obj-1",
                                "numoutlets" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "comment" : ""
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "inlet",
                                "patching_rect" : [ 24.0, 32.0, 20.0, 20.0 ],
                                "id" : "obj-2",
                                "numoutlets" : 1,
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0,
                                "comment" : ""
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 7",
                                "patching_rect" : [ 304.0, 196.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-3",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 6",
                                "patching_rect" : [ 264.0, 170.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-4",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 5",
                                "patching_rect" : [ 224.0, 145.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-5",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 4",
                                "patching_rect" : [ 184.0, 119.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-6",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 3",
                                "patching_rect" : [ 143.0, 197.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-7",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 2",
                                "patching_rect" : [ 104.0, 171.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-8",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 1",
                                "patching_rect" : [ 64.0, 146.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-9",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "prepend setitem 0",
                                "patching_rect" : [ 24.0, 120.0, 127.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-10",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "unpack s s s s s s s s",
                                "patching_rect" : [ 24.0, 89.0, 293.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-11",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 8,
                                "fontname" : "Arial",
                                "outlettype" : [ "", "", "", "", "", "", "", "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "route port",
                                "patching_rect" : [ 24.0, 59.0, 93.0, 20.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-12",
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "numoutlets" : 2,
                                "fontname" : "Arial",
                                "outlettype" : [ "", "" ],
                                "style" : "",
                                "numinlets" : 2
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "Manages serial name data. Each port name (up to 8, in this case) replaces an item in the drop-down menu of the parent patch (items in drop-down are numbered 0 - 7).",
                                "linecount" : 4,
                                "patching_rect" : [ 167.0, 235.0, 258.0, 62.0 ],
                                "fontsize" : 12.0,
                                "id" : "obj-13",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "textcolor" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
 ],
                          "lines" : [                             {
                              "patchline" :                               {
                                "source" : [ "obj-9", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-8", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-7", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-6", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-5", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-4", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-3", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-2", 0 ],
                                "destination" : [ "obj-12", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-12", 0 ],
                                "destination" : [ "obj-11", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 1 ],
                                "destination" : [ "obj-9", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 2 ],
                                "destination" : [ "obj-8", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 3 ],
                                "destination" : [ "obj-7", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 4 ],
                                "destination" : [ "obj-6", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 5 ],
                                "destination" : [ "obj-5", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 6 ],
                                "destination" : [ "obj-4", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 7 ],
                                "destination" : [ "obj-3", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-11", 0 ],
                                "destination" : [ "obj-10", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-10", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                                "disabled" : 0
                              }

                            }
 ]
                        }
,
                        "saved_object_attributes" :                         {
                          "description" : "",
                          "digest" : "",
                          "globalpatchername" : "",
                          "style" : "",
                          "tags" : ""
                        }

                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "prepend port",
                        "patching_rect" : [ 35.0, 307.0, 91.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-6",
                        "color" : [ 0.8, 0.611765, 0.380392, 1.0 ],
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "button",
                        "patching_rect" : [ 350.0, 244.0, 27.0, 27.0 ],
                        "id" : "obj-7",
                        "numoutlets" : 1,
                        "outlettype" : [ "bang" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "comment",
                        "text" : "Set the sample rate: between every 15ms and every 100ms.",
                        "patching_rect" : [ 394.0, 162.0, 284.0, 17.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-8",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 350.0, 177.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-9",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "slider",
                        "min" : 15.0,
                        "patching_rect" : [ 350.0, 120.0, 169.0, 38.0 ],
                        "id" : "obj-10",
                        "numoutlets" : 1,
                        "size" : 86.0,
                        "parameter_enable" : 0,
                        "orientation" : 1,
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "loadbang",
                        "patching_rect" : [ 275.0, 244.0, 48.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-11",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "bang" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "delay 4",
                        "patching_rect" : [ 208.0, 267.0, 43.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-12",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "bang" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 1234.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-13",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 1169.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-14",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 1104.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-15",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 1039.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-16",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 974.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-17",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 909.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-18",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 844.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-19",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 779.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-20",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 714.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-21",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 649.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-22",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 584.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-23",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 519.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-24",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 454.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-25",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 389.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-26",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 324.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-27",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 259.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-28",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 194.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-29",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "number",
                        "patching_rect" : [ 129.0, 582.0, 35.0, 19.0 ],
                        "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                        "fontsize" : 9.0,
                        "triscale" : 0.9,
                        "id" : "obj-30",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                        "parameter_enable" : 0,
                        "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                        "outlettype" : [ "", "bang" ],
                        "style" : "",
                        "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "comment",
                        "text" : "Serial Port Settings",
                        "patching_rect" : [ 395.0, 86.0, 237.0, 27.0 ],
                        "fontsize" : 18.0,
                        "id" : "obj-31",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "pcontrol",
                        "patching_rect" : [ 976.0, 242.0, 47.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-32",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "message",
                        "text" : "open",
                        "patching_rect" : [ 976.0, 221.0, 30.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-33",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "p arduino2max_help",
                        "patching_rect" : [ 976.0, 264.0, 100.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-34",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1,
                        "patcher" :                         {
                          "fileversion" : 1,
                          "appversion" :                          {
                            "major" : 7,
                            "minor" : 0,
                            "revision" : 0,
                            "architecture" : "x64",
                            "modernui" : 1
                          }
,
                          "rect" : [ 483.0, 171.0, 717.0, 593.0 ],
                          "bglocked" : 0,
                          "openinpresentation" : 0,
                          "default_fontsize" : 12.0,
                          "default_fontface" : 0,
                          "default_fontname" : "Arial",
                          "gridonopen" : 1,
                          "gridsize" : [ 15.0, 15.0 ],
                          "gridsnaponopen" : 1,
                          "objectsnaponopen" : 1,
                          "statusbarvisible" : 2,
                          "toolbarvisible" : 1,
                          "lefttoolbarpinned" : 0,
                          "toptoolbarpinned" : 0,
                          "righttoolbarpinned" : 0,
                          "bottomtoolbarpinned" : 0,
                          "toolbars_unpinned_last_save" : 0,
                          "tallnewobj" : 0,
                          "boxanimatetime" : 200,
                          "enablehscroll" : 1,
                          "enablevscroll" : 1,
                          "devicewidth" : 0.0,
                          "description" : "",
                          "digest" : "",
                          "tags" : "",
                          "style" : "",
                          "subpatcher_template" : "",
                          "boxes" : [                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "start",
                                "patching_rect" : [ 254.0, 165.0, 48.0, 18.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-1",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "settings",
                                "patching_rect" : [ 412.0, 162.0, 56.0, 18.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-2",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "button",
                                "patching_rect" : [ 339.0, 190.0, 23.0, 23.0 ],
                                "id" : "obj-3",
                                "numoutlets" : 1,
                                "outlettype" : [ "bang" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "help",
                                "patching_rect" : [ 335.0, 163.0, 35.0, 18.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-4",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "Arduino2Max uses an Arduino board programmed with the Arduino code that watches the Arduino's input pins and makes the pin data available through receive objects anywere in your patch.",
                                "linecount" : 2,
                                "patching_rect" : [ 33.0, 79.0, 496.0, 29.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-5",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "digital pins",
                                "patching_rect" : [ 549.0, 309.0, 61.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-6",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "analog pins",
                                "patching_rect" : [ 80.0, 309.0, 71.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-7",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "button",
                                "patching_rect" : [ 425.0, 190.0, 23.0, 23.0 ],
                                "id" : "obj-8",
                                "numoutlets" : 1,
                                "outlettype" : [ "bang" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "toggle",
                                "patching_rect" : [ 253.0, 192.0, 21.0, 21.0 ],
                                "id" : "obj-9",
                                "numoutlets" : 1,
                                "parameter_enable" : 0,
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "p arduinoreader",
                                "patching_rect" : [ 253.0, 254.0, 183.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-10",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 3,
                                "patcher" :                                 {
                                  "fileversion" : 1,
                                  "appversion" :                                  {
                                    "major" : 7,
                                    "minor" : 0,
                                    "revision" : 0,
                                    "architecture" : "x64",
                                    "modernui" : 1
                                  }
,
                                  "rect" : [ -8.0, 44.0, 1295.0, 686.0 ],
                                  "bglocked" : 0,
                                  "openinpresentation" : 0,
                                  "default_fontsize" : 12.0,
                                  "default_fontface" : 0,
                                  "default_fontname" : "Arial",
                                  "gridonopen" : 1,
                                  "gridsize" : [ 15.0, 15.0 ],
                                  "gridsnaponopen" : 1,
                                  "objectsnaponopen" : 1,
                                  "statusbarvisible" : 2,
                                  "toolbarvisible" : 1,
                                  "lefttoolbarpinned" : 0,
                                  "toptoolbarpinned" : 0,
                                  "righttoolbarpinned" : 0,
                                  "bottomtoolbarpinned" : 0,
                                  "toolbars_unpinned_last_save" : 0,
                                  "tallnewobj" : 0,
                                  "boxanimatetime" : 200,
                                  "enablehscroll" : 1,
                                  "enablevscroll" : 1,
                                  "devicewidth" : 0.0,
                                  "description" : "",
                                  "digest" : "",
                                  "tags" : "",
                                  "style" : "",
                                  "subpatcher_template" : "",
                                  "boxes" : [                                     {
                                      "box" :                                       {
                                        "maxclass" : "inlet",
                                        "patching_rect" : [ 666.0, 67.0, 15.0, 15.0 ],
                                        "id" : "obj-1",
                                        "numoutlets" : 1,
                                        "outlettype" : [ "bang" ],
                                        "style" : "",
                                        "numinlets" : 0,
                                        "comment" : "inlet to open help patch"
                                      }

                                    }
,                                     {
                                      "box" :                                       {
                                        "maxclass" : "inlet",
                                        "patching_rect" : [ 1136.0, 64.0, 15.0, 15.0 ],
                                        "id" : "obj-2",
                                        "numoutlets" : 1,
                                        "outlettype" : [ "bang" ],
                                        "style" : "",
                                        "numinlets" : 0,
                                        "comment" : "inlet for patcher control"
                                      }

                                    }
,                                     {
                                      "box" :                                       {
                                        "maxclass" : "inlet",
                                        "patching_rect" : [ 73.0, 39.0, 15.0, 15.0 ],
                                        "id" : "obj-3",
                                        "numoutlets" : 1,
                                        "outlettype" : [ "int" ],
                                        "style" : "",
                                        "numinlets" : 0,
                                        "comment" : "1 or 0 to start/stop serial reads"
                                      }

                                    }
 ],
                                  "lines" : [  ]
                                }
,
                                "saved_object_attributes" :                                 {
                                  "description" : "",
                                  "digest" : "",
                                  "globalpatchername" : "",
                                  "style" : "",
                                  "tags" : ""
                                }

                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "A few notes: - Unused inputs will fluctuate between values. This is normal, as unconected pins do this on their own.",
                                "patching_rect" : [ 35.0, 417.0, 585.0, 18.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-11",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "Once you have the above patch, you can get Arduino's analog and digital values anywere in your own patcher by making a \"receive a#\" or \"receive d#\" object, where # is the input pin you want to read.",
                                "linecount" : 3,
                                "patching_rect" : [ 189.0, 343.0, 319.0, 38.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-12",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "r d3",
                                "patching_rect" : [ 600.0, 336.0, 29.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-13",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "r d2",
                                "patching_rect" : [ 544.0, 336.0, 29.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-14",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "r a1",
                                "patching_rect" : [ 124.0, 336.0, 29.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-15",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "r a0",
                                "patching_rect" : [ 67.0, 336.0, 29.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-16",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "led",
                                "patching_rect" : [ 544.0, 364.0, 17.0, 17.0 ],
                                "oncolor" : [ 1.0, 0.0, 0.0, 1.0 ],
                                "id" : "obj-17",
                                "numoutlets" : 1,
                                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                                "parameter_enable" : 0,
                                "offcolor" : [ 0.6, 0.0, 0.0, 1.0 ],
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "led",
                                "patching_rect" : [ 600.0, 364.0, 17.0, 17.0 ],
                                "oncolor" : [ 1.0, 1.0, 0.0, 1.0 ],
                                "id" : "obj-18",
                                "numoutlets" : 1,
                                "bgcolor" : [ 0.35294, 0.35294, 0.35294, 1.0 ],
                                "parameter_enable" : 0,
                                "offcolor" : [ 1.0, 0.666667, 0.0, 1.0 ],
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "number",
                                "patching_rect" : [ 67.0, 364.0, 40.0, 18.0 ],
                                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                                "fontsize" : 10.0,
                                "triscale" : 0.9,
                                "id" : "obj-19",
                                "numoutlets" : 2,
                                "fontname" : "Arial",
                                "bgcolor" : [ 1.0, 0.741176, 0.611765, 1.0 ],
                                "parameter_enable" : 0,
                                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                                "outlettype" : [ "", "bang" ],
                                "style" : "",
                                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "number",
                                "patching_rect" : [ 124.0, 364.0, 40.0, 18.0 ],
                                "tricolor" : [ 0.75, 0.75, 0.75, 1.0 ],
                                "fontsize" : 10.0,
                                "triscale" : 0.9,
                                "id" : "obj-20",
                                "numoutlets" : 2,
                                "fontname" : "Arial",
                                "bgcolor" : [ 0.866667, 0.866667, 0.866667, 1.0 ],
                                "parameter_enable" : 0,
                                "textcolor" : [ 0.0, 0.0, 0.0, 1.0 ],
                                "outlettype" : [ "", "bang" ],
                                "style" : "",
                                "htricolor" : [ 0.87, 0.82, 0.24, 1.0 ],
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "- Arduino2Max runs flawlessly on a 1.83 GHz Macbook Pro;\ryour mileage may vary.",
                                "linecount" : 2,
                                "patching_rect" : [ 35.0, 462.0, 655.0, 29.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-21",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "- Patch adapted from Thomas Ouellet Fredericks' \"Simple Message Sytem\" example. Serial writes are possible, but not implemented here: see the S.M.S. code. Thanks to Seejay James one the MAX list for the pull-down menu code!",
                                "linecount" : 2,
                                "patching_rect" : [ 36.0, 491.0, 636.0, 29.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-22",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "- You may have to change your serial port to suit the port in use. Click on the yellow button to see the guts of the serial read and to make changes to how the patch talks to the serial port.",
                                "linecount" : 2,
                                "patching_rect" : [ 35.0, 433.0, 643.0, 29.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-23",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "At minimum, you need the \"arduinoreader\" patcher at the right, which does the work of reading the pins. The toggle turns serial reads from the Arduino on and off.",
                                "linecount" : 7,
                                "patching_rect" : [ 97.0, 175.0, 122.0, 79.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-24",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "The right-hand yellow button opens the patch so that you can adjust settings, like how often to read from the Arduino and which port to use.",
                                "linecount" : 7,
                                "patching_rect" : [ 495.0, 179.0, 104.0, 79.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-25",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "Arduino2Max",
                                "patching_rect" : [ 33.0, 33.0, 163.0, 27.0 ],
                                "fontsize" : 18.0,
                                "id" : "obj-26",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "textcolor" : [ 0.082353, 0.219608, 0.035294, 1.0 ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "comment",
                                "text" : "Read the 6 analog and 12 digital input pins of the Arduino into MAX.",
                                "patching_rect" : [ 218.0, 39.0, 334.0, 18.0 ],
                                "fontsize" : 10.0,
                                "id" : "obj-27",
                                "numoutlets" : 0,
                                "fontname" : "Arial",
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "panel",
                                "patching_rect" : [ 18.0, 29.0, 670.0, 101.0 ],
                                "id" : "obj-28",
                                "numoutlets" : 0,
                                "rounded" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "mode" : 0,
                                "angle" : 0.0,
                                "bgcolor" : [ 1.0, 0.968627, 0.811765, 1.0 ],
                                "proportion" : 0.39
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "inlet",
                                "patching_rect" : [ 594.0, 21.0, 15.0, 15.0 ],
                                "hidden" : 1,
                                "id" : "obj-29",
                                "numoutlets" : 1,
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0,
                                "comment" : ""
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "panel",
                                "patching_rect" : [ 18.0, 412.0, 671.0, 114.0 ],
                                "id" : "obj-30",
                                "numoutlets" : 0,
                                "rounded" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "mode" : 0,
                                "angle" : 0.0,
                                "bgcolor" : [ 1.0, 0.968627, 0.811765, 1.0 ],
                                "proportion" : 0.39
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "panel",
                                "patching_rect" : [ 43.0, 332.0, 128.0, 57.0 ],
                                "id" : "obj-31",
                                "numoutlets" : 0,
                                "rounded" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "mode" : 0,
                                "angle" : 0.0,
                                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                                "proportion" : 0.39
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "panel",
                                "patching_rect" : [ 245.0, 154.0, 227.0, 129.0 ],
                                "id" : "obj-32",
                                "numoutlets" : 0,
                                "rounded" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "mode" : 0,
                                "angle" : 0.0,
                                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                                "proportion" : 0.39
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "panel",
                                "patching_rect" : [ 515.0, 329.0, 139.0, 57.0 ],
                                "id" : "obj-33",
                                "numoutlets" : 0,
                                "rounded" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "mode" : 0,
                                "angle" : 0.0,
                                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                                "proportion" : 0.39
                              }

                            }
 ],
                          "lines" : [                             {
                              "patchline" :                               {
                                "source" : [ "obj-9", 0 ],
                                "destination" : [ "obj-10", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 262.5, 224.0, 262.5, 224.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-8", 0 ],
                                "destination" : [ "obj-10", 2 ],
                                "hidden" : 0,
                                "midpoints" : [ 434.5, 226.0, 426.5, 226.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-3", 0 ],
                                "destination" : [ "obj-10", 1 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-16", 0 ],
                                "destination" : [ "obj-19", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-15", 0 ],
                                "destination" : [ "obj-20", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-14", 0 ],
                                "destination" : [ "obj-17", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-13", 0 ],
                                "destination" : [ "obj-18", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
 ]
                        }
,
                        "saved_object_attributes" :                         {
                          "description" : "",
                          "digest" : "",
                          "globalpatchername" : "",
                          "style" : "",
                          "tags" : ""
                        }

                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "r onoff",
                        "patching_rect" : [ 61.0, 137.0, 41.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-35",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 0
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "inlet",
                        "patching_rect" : [ 1173.0, 146.0, 15.0, 15.0 ],
                        "id" : "obj-36",
                        "numoutlets" : 1,
                        "outlettype" : [ "int" ],
                        "style" : "",
                        "numinlets" : 0,
                        "comment" : "inlet for patcher control"
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "comment",
                        "text" : "help and patcher control stuff.",
                        "patching_rect" : [ 978.0, 289.0, 168.0, 17.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-37",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "inlet",
                        "patching_rect" : [ 129.0, 120.0, 15.0, 15.0 ],
                        "id" : "obj-38",
                        "numoutlets" : 1,
                        "outlettype" : [ "int" ],
                        "style" : "",
                        "numinlets" : 0,
                        "comment" : "1 or 0 to start/stop serial reads"
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "comment",
                        "text" : "Print a list of serial ports to the max window",
                        "patching_rect" : [ 397.0, 251.0, 243.0, 17.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-39",
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "button",
                        "patching_rect" : [ 208.0, 299.0, 15.0, 15.0 ],
                        "id" : "obj-40",
                        "numoutlets" : 1,
                        "outlettype" : [ "bang" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "p convert",
                        "patching_rect" : [ 129.0, 290.0, 53.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-41",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1,
                        "patcher" :                         {
                          "fileversion" : 1,
                          "appversion" :                          {
                            "major" : 7,
                            "minor" : 0,
                            "revision" : 0,
                            "architecture" : "x64",
                            "modernui" : 1
                          }
,
                          "rect" : [ 289.0, 44.0, 838.0, 659.0 ],
                          "bglocked" : 0,
                          "openinpresentation" : 0,
                          "default_fontsize" : 12.0,
                          "default_fontface" : 0,
                          "default_fontname" : "Arial",
                          "gridonopen" : 1,
                          "gridsize" : [ 15.0, 15.0 ],
                          "gridsnaponopen" : 1,
                          "objectsnaponopen" : 1,
                          "statusbarvisible" : 2,
                          "toolbarvisible" : 1,
                          "lefttoolbarpinned" : 0,
                          "toptoolbarpinned" : 0,
                          "righttoolbarpinned" : 0,
                          "bottomtoolbarpinned" : 0,
                          "toolbars_unpinned_last_save" : 0,
                          "tallnewobj" : 0,
                          "boxanimatetime" : 200,
                          "enablehscroll" : 1,
                          "enablevscroll" : 1,
                          "devicewidth" : 0.0,
                          "description" : "",
                          "digest" : "",
                          "tags" : "",
                          "style" : "",
                          "subpatcher_template" : "",
                          "boxes" : [                             {
                              "box" :                               {
                                "maxclass" : "outlet",
                                "patching_rect" : [ 99.0, 316.0, 15.0, 15.0 ],
                                "id" : "obj-1",
                                "numoutlets" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "comment" : ""
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "spell",
                                "patching_rect" : [ 107.0, 210.0, 31.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-2",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "message",
                                "text" : "13",
                                "patching_rect" : [ 90.0, 241.0, 20.0, 15.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-3",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 2
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "t b l",
                                "patching_rect" : [ 90.0, 127.0, 27.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-4",
                                "numoutlets" : 2,
                                "fontname" : "Arial",
                                "outlettype" : [ "bang", "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "inlet",
                                "patching_rect" : [ 90.0, 70.0, 15.0, 15.0 ],
                                "id" : "obj-5",
                                "numoutlets" : 1,
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 0,
                                "comment" : ""
                              }

                            }
 ],
                          "lines" : [                             {
                              "patchline" :                               {
                                "source" : [ "obj-5", 0 ],
                                "destination" : [ "obj-4", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-4", 0 ],
                                "destination" : [ "obj-3", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 99.5, 235.0, 98.0, 235.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-4", 1 ],
                                "destination" : [ "obj-2", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-3", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 99.5, 286.0, 108.0, 286.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-2", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 116.5, 286.0, 108.0, 286.0 ],
                                "disabled" : 0
                              }

                            }
 ]
                        }
,
                        "saved_object_attributes" :                         {
                          "description" : "",
                          "digest" : "",
                          "globalpatchername" : "",
                          "style" : "",
                          "tags" : ""
                        }

                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d12",
                        "patching_rect" : [ 1169.0, 697.0, 35.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-42",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d13",
                        "patching_rect" : [ 1234.0, 697.0, 35.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-43",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d11",
                        "patching_rect" : [ 1104.0, 697.0, 35.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-44",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d10",
                        "patching_rect" : [ 1039.0, 697.0, 35.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-45",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d9",
                        "patching_rect" : [ 974.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-46",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d8",
                        "patching_rect" : [ 909.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-47",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d6",
                        "patching_rect" : [ 779.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-48",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d7",
                        "patching_rect" : [ 844.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-49",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d5",
                        "patching_rect" : [ 714.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-50",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d4",
                        "patching_rect" : [ 649.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-51",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d3",
                        "patching_rect" : [ 584.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-52",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s d2",
                        "patching_rect" : [ 519.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-53",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a4",
                        "patching_rect" : [ 389.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-54",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a5",
                        "patching_rect" : [ 454.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-55",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a3",
                        "patching_rect" : [ 324.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-56",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a2",
                        "patching_rect" : [ 259.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-57",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a1",
                        "patching_rect" : [ 194.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-58",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "s a0",
                        "patching_rect" : [ 129.0, 697.0, 29.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-59",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 0,
                        "fontname" : "Arial",
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "p convertback",
                        "patching_rect" : [ 129.0, 412.0, 73.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-60",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 1,
                        "patcher" :                         {
                          "fileversion" : 1,
                          "appversion" :                          {
                            "major" : 7,
                            "minor" : 0,
                            "revision" : 0,
                            "architecture" : "x64",
                            "modernui" : 1
                          }
,
                          "rect" : [ 582.0, 197.0, 281.0, 423.0 ],
                          "bglocked" : 0,
                          "openinpresentation" : 0,
                          "default_fontsize" : 12.0,
                          "default_fontface" : 0,
                          "default_fontname" : "Arial",
                          "gridonopen" : 1,
                          "gridsize" : [ 15.0, 15.0 ],
                          "gridsnaponopen" : 1,
                          "objectsnaponopen" : 1,
                          "statusbarvisible" : 2,
                          "toolbarvisible" : 1,
                          "lefttoolbarpinned" : 0,
                          "toptoolbarpinned" : 0,
                          "righttoolbarpinned" : 0,
                          "bottomtoolbarpinned" : 0,
                          "toolbars_unpinned_last_save" : 0,
                          "tallnewobj" : 0,
                          "boxanimatetime" : 200,
                          "enablehscroll" : 1,
                          "enablevscroll" : 1,
                          "devicewidth" : 0.0,
                          "description" : "",
                          "digest" : "",
                          "tags" : "",
                          "style" : "",
                          "subpatcher_template" : "",
                          "boxes" : [                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "fromsymbol",
                                "patching_rect" : [ 137.0, 226.0, 64.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-1",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "" ],
                                "style" : "",
                                "numinlets" : 1
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "itoa",
                                "patching_rect" : [ 137.0, 182.0, 40.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-2",
                                "numoutlets" : 1,
                                "fontname" : "Arial",
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 3
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "zl group 78",
                                "patching_rect" : [ 137.0, 148.0, 61.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-3",
                                "numoutlets" : 2,
                                "fontname" : "Arial",
                                "outlettype" : [ "", "" ],
                                "style" : "",
                                "numinlets" : 2
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "newobj",
                                "text" : "sel 10 13",
                                "patching_rect" : [ 137.0, 84.0, 53.0, 17.0 ],
                                "fontsize" : 9.0,
                                "id" : "obj-4",
                                "numoutlets" : 3,
                                "fontname" : "Arial",
                                "outlettype" : [ "bang", "bang", "" ],
                                "style" : "",
                                "numinlets" : 3
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "outlet",
                                "patching_rect" : [ 137.0, 298.0, 26.0, 26.0 ],
                                "id" : "obj-5",
                                "numoutlets" : 0,
                                "style" : "",
                                "numinlets" : 1,
                                "comment" : "out"
                              }

                            }
,                             {
                              "box" :                               {
                                "maxclass" : "inlet",
                                "patching_rect" : [ 137.0, 37.0, 15.0, 15.0 ],
                                "id" : "obj-6",
                                "numoutlets" : 1,
                                "outlettype" : [ "int" ],
                                "style" : "",
                                "numinlets" : 0,
                                "comment" : "in"
                              }

                            }
 ],
                          "lines" : [                             {
                              "patchline" :                               {
                                "source" : [ "obj-6", 0 ],
                                "destination" : [ "obj-4", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-4", 1 ],
                                "destination" : [ "obj-3", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 163.5, 124.0, 146.5, 124.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-4", 2 ],
                                "destination" : [ "obj-3", 0 ],
                                "hidden" : 0,
                                "midpoints" : [ 180.5, 124.0, 146.5, 124.0 ],
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-3", 0 ],
                                "destination" : [ "obj-2", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-2", 0 ],
                                "destination" : [ "obj-1", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
,                             {
                              "patchline" :                               {
                                "source" : [ "obj-1", 0 ],
                                "destination" : [ "obj-5", 0 ],
                                "hidden" : 0,
                                "disabled" : 0
                              }

                            }
 ]
                        }
,
                        "saved_object_attributes" :                         {
                          "description" : "",
                          "digest" : "",
                          "globalpatchername" : "",
                          "style" : "",
                          "tags" : ""
                        }

                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "route list",
                        "patching_rect" : [ 129.0, 470.0, 52.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-61",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 1234.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-62",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 1169.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-63",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 1104.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-64",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 1039.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-65",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 974.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-66",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 909.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-67",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 844.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-68",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 779.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-69",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 714.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-70",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 649.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-71",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 584.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-72",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 519.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-73",
                        "color" : [ 0.156863, 0.8, 0.54902, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 454.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-74",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 389.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-75",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 324.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-76",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 259.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-77",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 194.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-78",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "change 0",
                        "patching_rect" : [ 129.0, 611.0, 49.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-79",
                        "color" : [ 1.0, 0.360784, 0.682353, 1.0 ],
                        "numoutlets" : 3,
                        "fontname" : "Arial",
                        "outlettype" : [ "", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "unpack i i i i i i i i i i i i i i i i i i",
                        "patching_rect" : [ 129.0, 528.0, 1131.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-80",
                        "numoutlets" : 18,
                        "fontname" : "Arial",
                        "outlettype" : [ "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int", "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "message",
                        "text" : "r",
                        "patching_rect" : [ 129.0, 240.0, 16.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-81",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "toggle",
                        "patching_rect" : [ 129.0, 157.0, 15.0, 15.0 ],
                        "id" : "obj-82",
                        "numoutlets" : 1,
                        "parameter_enable" : 0,
                        "outlettype" : [ "int" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "metro 15",
                        "patching_rect" : [ 129.0, 204.0, 52.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-83",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "bang" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "newobj",
                        "text" : "serial a 115200 8 1 0",
                        "patching_rect" : [ 129.0, 365.0, 110.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-84",
                        "numoutlets" : 2,
                        "fontname" : "Arial",
                        "outlettype" : [ "int", "" ],
                        "style" : "",
                        "numinlets" : 1
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "message",
                        "text" : "print",
                        "patching_rect" : [ 350.0, 301.0, 32.0, 19.0 ],
                        "fontsize" : 9.0,
                        "id" : "obj-85",
                        "numoutlets" : 1,
                        "fontname" : "Arial",
                        "outlettype" : [ "" ],
                        "style" : "",
                        "numinlets" : 2
                      }

                    }
,                     {
                      "box" :                       {
                        "maxclass" : "panel",
                        "patching_rect" : [ 327.0, 76.0, 398.0, 255.0 ],
                        "id" : "obj-86",
                        "numoutlets" : 0,
                        "rounded" : 0,
                        "style" : "",
                        "numinlets" : 1,
                        "mode" : 0,
                        "angle" : 0.0,
                        "bgcolor" : [ 0.619608, 0.87451, 0.996078, 1.0 ],
                        "proportion" : 0.39
                      }

                    }
 ],
                  "lines" : [                     {
                      "patchline" :                       {
                        "source" : [ "obj-9", 0 ],
                        "destination" : [ "obj-83", 1 ],
                        "hidden" : 0,
                        "midpoints" : [ 359.5, 199.0, 171.5, 199.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-85", 0 ],
                        "destination" : [ "obj-84", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 359.5, 341.0, 138.5, 341.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-84", 0 ],
                        "destination" : [ "obj-60", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-84", 1 ],
                        "destination" : [ "obj-5", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-83", 0 ],
                        "destination" : [ "obj-81", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-83", 0 ],
                        "destination" : [ "obj-12", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 138.5, 232.0, 217.5, 232.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-82", 0 ],
                        "destination" : [ "obj-83", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-81", 0 ],
                        "destination" : [ "obj-41", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 0 ],
                        "destination" : [ "obj-30", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 1 ],
                        "destination" : [ "obj-29", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 2 ],
                        "destination" : [ "obj-28", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 3 ],
                        "destination" : [ "obj-27", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 4 ],
                        "destination" : [ "obj-26", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 5 ],
                        "destination" : [ "obj-25", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 6 ],
                        "destination" : [ "obj-24", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 7 ],
                        "destination" : [ "obj-23", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 8 ],
                        "destination" : [ "obj-22", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 9 ],
                        "destination" : [ "obj-21", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 10 ],
                        "destination" : [ "obj-20", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 792.617647, 570.0, 788.5, 570.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 11 ],
                        "destination" : [ "obj-19", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 12 ],
                        "destination" : [ "obj-18", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 13 ],
                        "destination" : [ "obj-17", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 14 ],
                        "destination" : [ "obj-16", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 15 ],
                        "destination" : [ "obj-15", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 16 ],
                        "destination" : [ "obj-14", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-80", 17 ],
                        "destination" : [ "obj-13", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-79", 0 ],
                        "destination" : [ "obj-59", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 138.5, 678.0, 138.5, 678.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-78", 0 ],
                        "destination" : [ "obj-58", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 203.5, 680.0, 203.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-77", 0 ],
                        "destination" : [ "obj-57", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 268.5, 680.0, 268.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-76", 0 ],
                        "destination" : [ "obj-56", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 333.5, 680.0, 333.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-75", 0 ],
                        "destination" : [ "obj-54", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 398.5, 680.0, 398.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-74", 0 ],
                        "destination" : [ "obj-55", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 463.5, 680.0, 463.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-73", 0 ],
                        "destination" : [ "obj-53", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 528.5, 680.0, 528.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-72", 0 ],
                        "destination" : [ "obj-52", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 593.5, 680.0, 593.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-71", 0 ],
                        "destination" : [ "obj-51", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 658.5, 680.0, 658.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-70", 0 ],
                        "destination" : [ "obj-50", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 723.5, 680.0, 723.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-7", 0 ],
                        "destination" : [ "obj-85", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-69", 0 ],
                        "destination" : [ "obj-48", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 788.5, 680.0, 788.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-68", 0 ],
                        "destination" : [ "obj-49", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 853.5, 680.0, 853.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-67", 0 ],
                        "destination" : [ "obj-47", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 918.5, 680.0, 918.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-66", 0 ],
                        "destination" : [ "obj-46", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 983.5, 680.0, 983.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-65", 0 ],
                        "destination" : [ "obj-45", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 1048.5, 680.0, 1048.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-64", 0 ],
                        "destination" : [ "obj-44", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 1113.5, 680.0, 1113.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-63", 0 ],
                        "destination" : [ "obj-42", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 1178.5, 680.0, 1178.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-62", 0 ],
                        "destination" : [ "obj-43", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 1243.5, 680.0, 1243.5, 680.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-61", 0 ],
                        "destination" : [ "obj-80", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-60", 0 ],
                        "destination" : [ "obj-61", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-6", 0 ],
                        "destination" : [ "obj-84", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-5", 0 ],
                        "destination" : [ "obj-4", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-41", 0 ],
                        "destination" : [ "obj-84", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-40", 0 ],
                        "destination" : [ "obj-84", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 217.0, 333.0, 138.5, 333.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-38", 0 ],
                        "destination" : [ "obj-82", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-36", 0 ],
                        "destination" : [ "obj-2", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-35", 0 ],
                        "destination" : [ "obj-82", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 70.5, 155.0, 138.0, 155.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-33", 0 ],
                        "destination" : [ "obj-32", 0 ],
                        "hidden" : 1,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-32", 0 ],
                        "destination" : [ "obj-34", 0 ],
                        "hidden" : 1,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-30", 0 ],
                        "destination" : [ "obj-79", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-3", 0 ],
                        "destination" : [ "obj-6", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-29", 0 ],
                        "destination" : [ "obj-78", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-28", 0 ],
                        "destination" : [ "obj-77", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-27", 0 ],
                        "destination" : [ "obj-76", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-26", 0 ],
                        "destination" : [ "obj-75", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-25", 0 ],
                        "destination" : [ "obj-74", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-24", 0 ],
                        "destination" : [ "obj-73", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-23", 0 ],
                        "destination" : [ "obj-72", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-22", 0 ],
                        "destination" : [ "obj-71", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-21", 0 ],
                        "destination" : [ "obj-70", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-20", 0 ],
                        "destination" : [ "obj-69", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 788.5, 604.0, 788.5, 604.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-19", 0 ],
                        "destination" : [ "obj-68", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-18", 0 ],
                        "destination" : [ "obj-67", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-17", 0 ],
                        "destination" : [ "obj-66", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-16", 0 ],
                        "destination" : [ "obj-65", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-15", 0 ],
                        "destination" : [ "obj-64", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-14", 0 ],
                        "destination" : [ "obj-63", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-13", 0 ],
                        "destination" : [ "obj-62", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-12", 0 ],
                        "destination" : [ "obj-40", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-11", 0 ],
                        "destination" : [ "obj-85", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 284.5, 281.0, 359.5, 281.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-10", 0 ],
                        "destination" : [ "obj-9", 0 ],
                        "hidden" : 0,
                        "midpoints" : [ 359.5, 167.0, 359.5, 167.0 ],
                        "disabled" : 0
                      }

                    }
,                     {
                      "patchline" :                       {
                        "source" : [ "obj-1", 0 ],
                        "destination" : [ "obj-33", 0 ],
                        "hidden" : 0,
                        "disabled" : 0
                      }

                    }
 ]
                }
,
                "saved_object_attributes" :                 {
                  "description" : "",
                  "digest" : "",
                  "globalpatchername" : "",
                  "style" : "",
                  "tags" : ""
                }

              }

            }
,             {
              "box" :               {
                "maxclass" : "panel",
                "patching_rect" : [ 249.0, 506.0, 479.0, 137.0 ],
                "id" : "obj-54",
                "numoutlets" : 0,
                "rounded" : 0,
                "style" : "",
                "numinlets" : 1,
                "mode" : 0,
                "angle" : 0.0,
                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                "proportion" : 0.39
              }

            }
,             {
              "box" :               {
                "maxclass" : "panel",
                "patching_rect" : [ 245.0, 352.0, 300.0, 128.0 ],
                "id" : "obj-55",
                "numoutlets" : 0,
                "rounded" : 0,
                "style" : "",
                "numinlets" : 1,
                "mode" : 0,
                "angle" : 0.0,
                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                "proportion" : 0.39
              }

            }
,             {
              "box" :               {
                "maxclass" : "panel",
                "patching_rect" : [ 243.0, 196.0, 487.0, 129.0 ],
                "id" : "obj-56",
                "numoutlets" : 0,
                "rounded" : 0,
                "style" : "",
                "numinlets" : 1,
                "mode" : 0,
                "angle" : 0.0,
                "bgcolor" : [ 0.509804, 0.854902, 0.909804, 1.0 ],
                "proportion" : 0.39
              }

            }
,             {
              "box" :               {
                "maxclass" : "panel",
                "patching_rect" : [ 789.0, 193.0, 226.0, 408.0 ],
                "id" : "obj-57",
                "numoutlets" : 0,
                "rounded" : 0,
                "style" : "",
                "numinlets" : 1,
                "mode" : 0,
                "angle" : 0.0,
                "bgcolor" : [ 0.913725, 0.92549, 0.568627, 1.0 ],
                "proportion" : 0.39
              }

            }
 ],
          "lines" : [             {
              "patchline" :               {
                "source" : [ "obj-6", 0 ],
                "destination" : [ "obj-53", 1 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-50", 0 ],
                "destination" : [ "obj-53", 0 ],
                "hidden" : 0,
                "midpoints" : [ 268.5, 272.0, 268.5, 272.0 ],
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-5", 0 ],
                "destination" : [ "obj-6", 0 ],
                "hidden" : 1,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-30", 0 ],
                "destination" : [ "obj-32", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-29", 0 ],
                "destination" : [ "obj-43", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-28", 0 ],
                "destination" : [ "obj-42", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-27", 0 ],
                "destination" : [ "obj-41", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-26", 0 ],
                "destination" : [ "obj-39", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-25", 0 ],
                "destination" : [ "obj-40", 0 ],
                "hidden" : 0,
                "midpoints" : [ 412.5, 548.0, 412.5, 548.0 ],
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-24", 0 ],
                "destination" : [ "obj-38", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-23", 0 ],
                "destination" : [ "obj-37", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-22", 0 ],
                "destination" : [ "obj-36", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-21", 0 ],
                "destination" : [ "obj-35", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-20", 0 ],
                "destination" : [ "obj-33", 0 ],
                "hidden" : 0,
                "midpoints" : [ 684.5, 552.0, 684.5, 552.0 ],
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-19", 0 ],
                "destination" : [ "obj-34", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-18", 0 ],
                "destination" : [ "obj-44", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-17", 0 ],
                "destination" : [ "obj-45", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-16", 0 ],
                "destination" : [ "obj-46", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-15", 0 ],
                "destination" : [ "obj-47", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-14", 0 ],
                "destination" : [ "obj-49", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
,             {
              "patchline" :               {
                "source" : [ "obj-13", 0 ],
                "destination" : [ "obj-48", 0 ],
                "hidden" : 0,
                "disabled" : 0
              }

            }
 ]
        }
,
        "saved_object_attributes" :         {
          "description" : "",
          "digest" : "",
          "globalpatchername" : "",
          "style" : "",
          "tags" : ""
        }

      }

    }
,     {
      "box" :       {
        "maxclass" : "button",
        "patching_rect" : [ 1565.0, 180.666687, 24.0, 24.0 ],
        "id" : "obj-8",
        "numoutlets" : 1,
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "umenu",
        "fontface" : 0,
        "patching_rect" : [ 1425.0, 222.666687, 200.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-4",
        "numoutlets" : 3,
        "fontname" : "Arial",
        "prefix" : "Macintosh HD:/Users/xinyanwang/Desktop/ProudBox/sound/",
        "parameter_enable" : 0,
        "items" : [ "Do not come over_01.mp3", ",", "Get out_01.mp3", ",", "go away_02.mp3", ",", "Keep away from me_01.mp3", ",", "Leave me_01.mp3" ],
        "outlettype" : [ "int", "", "" ],
        "style" : "",
        "numinlets" : 1,
        "autopopulate" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t 0",
        "patching_rect" : [ 1530.333374, 391.166687, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-32",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "int" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "gate",
        "patching_rect" : [ 1474.0, 391.166687, 34.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-31",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "t b",
        "patching_rect" : [ 1474.0, 420.666687, 24.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-30",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "bang" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "comment",
        "text" : "loop 3 times",
        "patching_rect" : [ 1582.0, 360.666687, 150.0, 20.0 ],
        "fontsize" : 12.0,
        "id" : "obj-29",
        "numoutlets" : 0,
        "fontname" : "Arial",
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "comment",
        "text" : "<< click to start",
        "patching_rect" : [ 1370.0, 261.666687, 92.0, 20.0 ],
        "fontsize" : 12.0,
        "id" : "obj-27",
        "numoutlets" : 0,
        "fontname" : "Arial",
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "comment",
        "text" : "<< drop file",
        "patching_rect" : [ 1389.0, 182.666687, 150.0, 20.0 ],
        "fontsize" : 12.0,
        "id" : "obj-24",
        "numoutlets" : 0,
        "fontname" : "Arial",
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "message",
        "text" : "1",
        "patching_rect" : [ 1474.0, 287.666687, 32.5, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-22",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "counter 0 0 2",
        "patching_rect" : [ 1489.0, 360.666687, 81.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-15",
        "numoutlets" : 4,
        "fontname" : "Arial",
        "outlettype" : [ "int", "", "", "int" ],
        "style" : "",
        "numinlets" : 5,
        "frozen_object_attributes" :        {
          "carryflag" : 1
        }

      }

    }
,     {
      "box" :       {
        "maxclass" : "ezdac~",
        "patching_rect" : [ 1237.0, 396.333344, 45.0, 45.0 ],
        "id" : "obj-5",
        "numoutlets" : 0,
        "style" : "",
        "numinlets" : 2
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "prepend open",
        "patching_rect" : [ 1237.0, 304.333374, 85.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-3",
        "numoutlets" : 1,
        "fontname" : "Arial",
        "outlettype" : [ "" ],
        "style" : "",
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "dropfile",
        "patching_rect" : [ 1237.0, 174.666687, 138.0, 70.0 ],
        "id" : "obj-2",
        "numoutlets" : 2,
        "outlettype" : [ "", "" ],
        "numinlets" : 1
      }

    }
,     {
      "box" :       {
        "maxclass" : "newobj",
        "text" : "sfplay~",
        "patching_rect" : [ 1237.0, 335.333374, 49.0, 22.0 ],
        "fontsize" : 12.0,
        "id" : "obj-1",
        "numoutlets" : 2,
        "fontname" : "Arial",
        "outlettype" : [ "signal", "bang" ],
        "style" : "",
        "numinlets" : 2,
        "saved_object_attributes" :         {
          "basictuning" : 440,
          "followglobaltempo" : 0,
          "formantcorrection" : 0,
          "mode" : "basic",
          "originallength" : [ 0.0, "ticks" ],
          "originaltempo" : 120.0,
          "pitchcorrection" : 0,
          "quality" : "basic",
          "timestretch" : [ 0 ]
        }

      }

    }
 ],
  "lines" : [     {
      "patchline" :       {
        "source" : [ "obj-87", 0 ],
        "destination" : [ "obj-64", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-8", 0 ],
        "destination" : [ "obj-4", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-7", 0 ],
        "destination" : [ "obj-6", 0 ],
        "hidden" : 0,
        "midpoints" : [ 213.499847, 283.666718, 213.499847, 283.666718 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-63", 0 ],
        "destination" : [ "obj-62", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-62", 0 ],
        "destination" : [ "obj-87", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-62", 0 ],
        "destination" : [ "obj-7", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-62", 0 ],
        "destination" : [ "obj-61", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-62", 0 ],
        "destination" : [ "obj-315", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-61", 0 ],
        "destination" : [ "obj-59", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-6", 0 ],
        "destination" : [ "obj-147", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-4", 0 ],
        "destination" : [ "obj-3", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-337", 0 ],
        "destination" : [ "obj-321", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-334", 0 ],
        "destination" : [ "obj-332", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-333", 1 ],
        "destination" : [ "obj-329", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-333", 1 ],
        "destination" : [ "obj-327", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-333", 2 ],
        "destination" : [ "obj-325", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-332", 0 ],
        "destination" : [ "obj-333", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-331", 0 ],
        "destination" : [ "obj-328", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-331", 1 ],
        "destination" : [ "obj-328", 1 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-330", 0 ],
        "destination" : [ "obj-333", 0 ],
        "hidden" : 0,
        "midpoints" : [ 699.5, 971.16687, 536.5, 971.16687 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-329", 0 ],
        "destination" : [ "obj-331", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-327", 0 ],
        "destination" : [ "obj-331", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-326", 0 ],
        "destination" : [ "obj-330", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-325", 0 ],
        "destination" : [ "obj-324", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-323", 0 ],
        "destination" : [ "obj-331", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-322", 0 ],
        "destination" : [ "obj-326", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-321", 3 ],
        "destination" : [ "obj-336", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-321", 0 ],
        "destination" : [ "obj-320", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-321", 1 ],
        "destination" : [ "obj-319", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-321", 2 ],
        "destination" : [ "obj-318", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-320", 0 ],
        "destination" : [ "obj-322", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-32", 0 ],
        "destination" : [ "obj-31", 0 ],
        "hidden" : 0,
        "midpoints" : [ 1539.833374, 415.666687, 1461.0, 415.666687, 1461.0, 386.666687, 1483.5, 386.666687 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-317", 0 ],
        "destination" : [ "obj-321", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-316", 0 ],
        "destination" : [ "obj-317", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-315", 0 ],
        "destination" : [ "obj-316", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-315", 0 ],
        "destination" : [ "obj-312", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-314", 0 ],
        "destination" : [ "obj-315", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-313", 0 ],
        "destination" : [ "obj-314", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-31", 0 ],
        "destination" : [ "obj-30", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-30", 0 ],
        "destination" : [ "obj-22", 0 ],
        "hidden" : 0,
        "midpoints" : [ 1483.5, 441.666687, 1733.0, 441.666687, 1733.0, 281.666687, 1483.5, 281.666687 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-3", 0 ],
        "destination" : [ "obj-1", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-26", 0 ],
        "destination" : [ "obj-14", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-22", 0 ],
        "destination" : [ "obj-31", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-22", 0 ],
        "destination" : [ "obj-1", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-2", 0 ],
        "destination" : [ "obj-3", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-19", 0 ],
        "destination" : [ "obj-21", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-184", 0 ],
        "destination" : [ "obj-180", 1 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-184", 2 ],
        "destination" : [ "obj-179", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-183", 0 ],
        "destination" : [ "obj-180", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-183", 0 ],
        "destination" : [ "obj-157", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-181", 0 ],
        "destination" : [ "obj-183", 0 ],
        "hidden" : 0,
        "midpoints" : [ 1658.5, 756.500001, 1908.0, 756.500001, 1908.0, 596.500001, 1658.5, 596.500001 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-180", 0 ],
        "destination" : [ "obj-181", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-18", 0 ],
        "destination" : [ "obj-112", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-179", 0 ],
        "destination" : [ "obj-180", 0 ],
        "hidden" : 0,
        "midpoints" : [ 1714.833374, 730.500001, 1636.0, 730.500001, 1636.0, 701.500001, 1658.5, 701.500001 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-17", 0 ],
        "destination" : [ "obj-113", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-169", 0 ],
        "destination" : [ "obj-167", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-168", 1 ],
        "destination" : [ "obj-164", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-168", 1 ],
        "destination" : [ "obj-162", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-168", 2 ],
        "destination" : [ "obj-160", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-167", 0 ],
        "destination" : [ "obj-168", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-166", 2 ],
        "destination" : [ "obj-184", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-165", 0 ],
        "destination" : [ "obj-168", 0 ],
        "hidden" : 0,
        "midpoints" : [ 1428.166748, 696.166611, 1265.166748, 696.166611 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-164", 0 ],
        "destination" : [ "obj-166", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-162", 0 ],
        "destination" : [ "obj-166", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-161", 0 ],
        "destination" : [ "obj-165", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-160", 0 ],
        "destination" : [ "obj-159", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-159", 0 ],
        "destination" : [ "obj-161", 1 ],
        "hidden" : 0,
        "midpoints" : [ 1446.166748, 793.666611, 1533.666748, 793.666611, 1533.666748, 592.666611, 1470.166748, 592.666611 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-158", 0 ],
        "destination" : [ "obj-166", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-157", 0 ],
        "destination" : [ "obj-161", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-156", 0 ],
        "destination" : [ "obj-154", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-154", 0 ],
        "destination" : [ "obj-147", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-152", 3 ],
        "destination" : [ "obj-20", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-152", 2 ],
        "destination" : [ "obj-16", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-152", 0 ],
        "destination" : [ "obj-150", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-152", 1 ],
        "destination" : [ "obj-11", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-151", 0 ],
        "destination" : [ "obj-152", 0 ],
        "hidden" : 0,
        "midpoints" : [ 403.666534, 529.333343, 307.333191, 529.333343 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-150", 0 ],
        "destination" : [ "obj-109", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-15", 2 ],
        "destination" : [ "obj-32", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-15", 0 ],
        "destination" : [ "obj-31", 1 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-149", 0 ],
        "destination" : [ "obj-152", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-148", 0 ],
        "destination" : [ "obj-149", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-147", 0 ],
        "destination" : [ "obj-177", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-147", 0 ],
        "destination" : [ "obj-148", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-14", 0 ],
        "destination" : [ "obj-113", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-12", 0 ],
        "destination" : [ "obj-113", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-116", 0 ],
        "destination" : [ "obj-114", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-115", 2 ],
        "destination" : [ "obj-19", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-115", 1 ],
        "destination" : [ "obj-17", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-115", 1 ],
        "destination" : [ "obj-12", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-114", 0 ],
        "destination" : [ "obj-115", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-113", 0 ],
        "destination" : [ "obj-111", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-113", 1 ],
        "destination" : [ "obj-111", 1 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-112", 0 ],
        "destination" : [ "obj-115", 0 ],
        "hidden" : 0,
        "midpoints" : [ 206.166626, 971.166748, 43.166626, 971.166748 ],
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-110", 0 ],
        "destination" : [ "obj-113", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-109", 0 ],
        "destination" : [ "obj-18", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-1", 0 ],
        "destination" : [ "obj-5", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-1", 0 ],
        "destination" : [ "obj-5", 1 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
,     {
      "patchline" :       {
        "source" : [ "obj-1", 1 ],
        "destination" : [ "obj-15", 0 ],
        "hidden" : 0,
        "disabled" : 0
      }

    }
 ],
  "appversion" :  {
    "major" : 7,
    "minor" : 0,
    "revision" : 0,
    "architecture" : "x64",
    "modernui" : 1
  }

}

  

*/
#include <Servo.h>
Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int x = 0;                              // a place to hold pin values
int ledpin = 13;

int pos = 0;
int E18Pin = 3;
int onOff = 0;




void setup()
{
  Serial.begin(115200);               // 115200 is the default Arduino Bluetooth speed
  digitalWrite(13, HIGH);             ///startup blink
  delay(600);
  digitalWrite(13, LOW);
  pinMode(13, INPUT);
  
  pinMode(E18Pin, INPUT);
  myservo.attach(9);
  myservo2.attach(10);
  myservo3.attach(12);
  myservo4.attach(13);



}



void loop()
{

  if (Serial.available() > 0) {        // Check serial buffer for characters

    if (Serial.read() == 'r') {       // If an 'r' is received then read the pins

      for (int pin = 0; pin <= 5; pin++) {  // Read and send analog pins 0-5
        x = analogRead(pin);
        sendValue (x);
      }


      for (int pin = 2; pin <= 13; pin++) { // Read and send digital pins 2-13
        x = digitalRead(pin);
        sendValue (x);

      }
      Serial.println();                 // Send a carriage returnt to mark end of pin data.
      delay (5);                        // add a delay to prevent crashing/overloading of the serial port

    }

  }



  /////////////////////////////////////////////
  //all the servo stuff
  onOff = digitalRead(E18Pin);

  if (onOff == 0) {
    onOff = 1;
    //Serial.println(state);
    myservo4.write(0);
    myservo3.write(0);
    myservo.write(50);
    myservo2.write(50);
    delay(10);
  }

  else {
    onOff = 0;
    //Serial.println(state);
    myservo3.write(180);
    myservo4.write(180);
    //delay(5);

    for (pos = 0; pos <= 60; pos += 1) {
      myservo.write(pos);
      myservo2.write(pos);
      delay(8);
    }

    for (pos = 60; pos >= 0; pos -= 1) {
      myservo.write(pos);
      myservo2.write(pos);
      delay(8);
    }
  }

  delay(5);









}

void sendValue (int x) {             // function to send the pin value followed by a "space".
  Serial.print(x);
  Serial.write(32);
}



