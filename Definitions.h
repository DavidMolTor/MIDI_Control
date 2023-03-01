#ifndef Definitions_h
#define Definitions_h

#include "Controller.h"

//----------------------------- BUTTON 1 -----------------------------//

//Button 1 press definitions
byte BUTTON1_PRESS_CHN[]    {   1,   1,   2,   2 };
byte BUTTON1_PRESS_CMD[]    { 128,  69,  12,  65 };
byte BUTTON1_PRESS_MIN[]    {   0,   8,   0, 127 };
byte BUTTON1_PRESS_MAX[]    { 125,   0,   8, 127 };
byte BUTTON1_PRESS_STP[]    {   1,   0,   1, 127 };
ButtonValues BUTTON1_PRESS(BUTTON1_PRESS_CHN, BUTTON1_PRESS_CMD, BUTTON1_PRESS_MIN, BUTTON1_PRESS_MAX, BUTTON1_PRESS_STP);

//Button 1 release definitions
byte BUTTON1_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON1_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON1_RELEASE(BUTTON1_RELEASE_CHN, BUTTON1_RELEASE_CMD, BUTTON1_RELEASE_MIN, BUTTON1_RELEASE_MAX, BUTTON1_RELEASE_STP);

//Button 1 hold definitions
byte BUTTON1_HOLD_CHN[]     {   1,   1,   0,   2 };
byte BUTTON1_HOLD_CMD[]     { 128,  69,   0,  66 };
byte BUTTON1_HOLD_MIN[]     {   0,   9, 255, 127 };
byte BUTTON1_HOLD_MAX[]     { 125,   0,   0, 127 };
byte BUTTON1_HOLD_STP[]     {  10,   0,   0, 127 };
ButtonValues BUTTON1_HOLD(BUTTON1_HOLD_CHN, BUTTON1_HOLD_CMD, BUTTON1_HOLD_MIN, BUTTON1_HOLD_MAX, BUTTON1_HOLD_STP);

//----------------------------- BUTTON 2 -----------------------------//

//Button 2 press definitions
byte BUTTON2_PRESS_CHN[]    {   2,   1,   2,   2 };
byte BUTTON2_PRESS_CMD[]    { 128,  71,   4,  63 };
byte BUTTON2_PRESS_MIN[]    {   0,   4, 127,   0 };
byte BUTTON2_PRESS_MAX[]    { 127,   0, 127,   0 };
byte BUTTON2_PRESS_STP[]    {   1,   0, 127,   0 };
ButtonValues BUTTON2_PRESS(BUTTON2_PRESS_CHN, BUTTON2_PRESS_CMD, BUTTON2_PRESS_MIN, BUTTON2_PRESS_MAX, BUTTON2_PRESS_STP);

//Button 2 release definitions
byte BUTTON2_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON2_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON2_RELEASE(BUTTON2_RELEASE_CHN, BUTTON2_RELEASE_CMD, BUTTON2_RELEASE_MIN, BUTTON2_RELEASE_MAX, BUTTON2_RELEASE_STP);

//Button 2 hold definitions
byte BUTTON2_HOLD_CHN[]     {   2,   1,   0,   2 };
byte BUTTON2_HOLD_CMD[]     { 128,  71,   0,  63 };
byte BUTTON2_HOLD_MIN[]     {   0,   5, 255, 127 };
byte BUTTON2_HOLD_MAX[]     { 127,   0,   0,   0 };
byte BUTTON2_HOLD_STP[]     {  10,   0,   0,   0 };
ButtonValues BUTTON2_HOLD(BUTTON2_HOLD_CHN, BUTTON2_HOLD_CMD, BUTTON2_HOLD_MIN, BUTTON2_HOLD_MAX, BUTTON2_HOLD_STP);

//----------------------------- BUTTON 3 -----------------------------//

//Button 3 press definitions
byte BUTTON3_PRESS_CHN[]    {   1,   1,   1,   1 };
byte BUTTON3_PRESS_CMD[]    {  68,  68,  68,  68 };
byte BUTTON3_PRESS_MIN[]    {   0,   0,   0,   0 };
byte BUTTON3_PRESS_MAX[]    {   0,   0,   0,   0 };
byte BUTTON3_PRESS_STP[]    {   0,   0,   0,   0 };
ButtonValues BUTTON3_PRESS(BUTTON3_PRESS_CHN, BUTTON3_PRESS_CMD, BUTTON3_PRESS_MIN, BUTTON3_PRESS_MAX, BUTTON3_PRESS_STP);

//Button 3 release definitions
byte BUTTON3_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON3_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON3_RELEASE(BUTTON3_RELEASE_CHN, BUTTON3_RELEASE_CMD, BUTTON3_RELEASE_MIN, BUTTON3_RELEASE_MAX, BUTTON3_RELEASE_STP);

//Button 3 hold definitions
byte BUTTON3_HOLD_CHN[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLD_CMD[]     { 200, 200, 200, 200 };
byte BUTTON3_HOLD_MIN[]     {   1,   2,   3,   0 };
byte BUTTON3_HOLD_MAX[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLD_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON3_HOLD(BUTTON3_HOLD_CHN, BUTTON3_HOLD_CMD, BUTTON3_HOLD_MIN, BUTTON3_HOLD_MAX, BUTTON3_HOLD_STP);

//----------------------------- BUTTON 4 -----------------------------//

//Button 4 press definitions
byte BUTTON4_PRESS_CHN[]    {   1,   1,   2,   2 };
byte BUTTON4_PRESS_CMD[]    { 128,  49,  64,  60 };
byte BUTTON4_PRESS_MIN[]    { 125,   0,  64, 127 };
byte BUTTON4_PRESS_MAX[]    { 125,   0,   0,   0 };
byte BUTTON4_PRESS_STP[]    {  -1,   0,   0,   0 };
ButtonValues BUTTON4_PRESS(BUTTON4_PRESS_CHN, BUTTON4_PRESS_CMD, BUTTON4_PRESS_MIN, BUTTON4_PRESS_MAX, BUTTON4_PRESS_STP);

//Button 4 release definitions
byte BUTTON4_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON4_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON4_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON4_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON4_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON4_RELEASE(BUTTON4_RELEASE_CHN, BUTTON4_RELEASE_CMD, BUTTON4_RELEASE_MIN, BUTTON4_RELEASE_MAX, BUTTON4_RELEASE_STP);

//Button 4 hold definitions
byte BUTTON4_HOLD_CHN[]     {   1,   0,   0,   0 };
byte BUTTON4_HOLD_CMD[]     { 128,   0,   0,   0 };
byte BUTTON4_HOLD_MIN[]     {   0, 255, 255, 255 };
byte BUTTON4_HOLD_MAX[]     {   0,   0,   0,   0 };
byte BUTTON4_HOLD_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON4_HOLD(BUTTON4_HOLD_CHN, BUTTON4_HOLD_CMD, BUTTON4_HOLD_MIN, BUTTON4_HOLD_MAX, BUTTON4_HOLD_STP);

//----------------------------- BUTTON 5 -----------------------------//

//Button 5 press definitions
byte BUTTON5_PRESS_CHN[]    {   2,   1,   2,   2 };
byte BUTTON5_PRESS_CMD[]    { 128,  50,  13,  61 };
byte BUTTON5_PRESS_MIN[]    { 127,   0, 127, 127 };
byte BUTTON5_PRESS_MAX[]    { 127,   0,   0, 127 };
byte BUTTON5_PRESS_STP[]    {  -1,   0,   0, 127 };
ButtonValues BUTTON5_PRESS(BUTTON5_PRESS_CHN, BUTTON5_PRESS_CMD, BUTTON5_PRESS_MIN, BUTTON5_PRESS_MAX, BUTTON5_PRESS_STP);

//Button 5 release definitions
byte BUTTON5_RELEASE_CHN[]  {   0,   0,   2,   0 };
byte BUTTON5_RELEASE_CMD[]  {   0,   0,  13,   0 };
byte BUTTON5_RELEASE_MIN[]  { 255, 255,  40, 255 };
byte BUTTON5_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON5_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON5_RELEASE(BUTTON5_RELEASE_CHN, BUTTON5_RELEASE_CMD, BUTTON5_RELEASE_MIN, BUTTON5_RELEASE_MAX, BUTTON5_RELEASE_STP);

//Button 5 hold definitions
byte BUTTON5_HOLD_CHN[]     {   2,   0,   0,   0 };
byte BUTTON5_HOLD_CMD[]     { 128,   0,   0,   0 };
byte BUTTON5_HOLD_MIN[]     {   0, 255, 255, 255 };
byte BUTTON5_HOLD_MAX[]     {   0,   0,   0,   0 };
byte BUTTON5_HOLD_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON5_HOLD(BUTTON5_HOLD_CHN, BUTTON5_HOLD_CMD, BUTTON5_HOLD_MIN, BUTTON5_HOLD_MAX, BUTTON5_HOLD_STP);

//----------------------------- BUTTON 6 -----------------------------//

//Button 6 press definitions
byte BUTTON6_PRESS_CHN[]    {   1,   1,   2,   2 };
byte BUTTON6_PRESS_CMD[]    {  69,  51,   9,  60 };
byte BUTTON6_PRESS_MIN[]    {   8,   0, 127,   0 };
byte BUTTON6_PRESS_MAX[]    {   0,   0, 127,   0 };
byte BUTTON6_PRESS_STP[]    {   0,   0, 127,   0 };
ButtonValues BUTTON6_PRESS(BUTTON6_PRESS_CHN, BUTTON6_PRESS_CMD, BUTTON6_PRESS_MIN, BUTTON6_PRESS_MAX, BUTTON6_PRESS_STP);

//Button 6 release definitions
byte BUTTON6_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON6_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON6_RELEASE(BUTTON6_RELEASE_CHN, BUTTON6_RELEASE_CMD, BUTTON6_RELEASE_MIN, BUTTON6_RELEASE_MAX, BUTTON6_RELEASE_STP);

//Button 6 hold definitions
byte BUTTON6_HOLD_CHN[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLD_CMD[]     { 200, 200, 200, 200 };
byte BUTTON6_HOLD_MIN[]     {   3,   0,   1,   2 };
byte BUTTON6_HOLD_MAX[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLD_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON6_HOLD(BUTTON6_HOLD_CHN, BUTTON6_HOLD_CMD, BUTTON6_HOLD_MIN, BUTTON6_HOLD_MAX, BUTTON6_HOLD_STP);

#endif
