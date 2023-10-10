#ifndef Definitions_h
#define Definitions_h

#include "Controller.h"

//----------------------------- BUTTON 1 -----------------------------//

//Button 1 press definitions
byte BUTTON1_PRESS_CHN[]    {   1,   2,   0,   0 };
byte BUTTON1_PRESS_CMD[]    { 128,  16,   0,   0 };
byte BUTTON1_PRESS_MIN[]    {   0,   0, 255, 255 };
byte BUTTON1_PRESS_MAX[]    { 125,   0,   0,   0 };
byte BUTTON1_PRESS_STP[]    {   1,   0,   0,   0 };
ButtonValues BUTTON1_PRESS(BUTTON1_PRESS_CHN, BUTTON1_PRESS_CMD, BUTTON1_PRESS_MIN, BUTTON1_PRESS_MAX, BUTTON1_PRESS_STP);

//Button 1 release definitions
byte BUTTON1_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON1_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON1_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON1_RELEASE(BUTTON1_RELEASE_CHN, BUTTON1_RELEASE_CMD, BUTTON1_RELEASE_MIN, BUTTON1_RELEASE_MAX, BUTTON1_RELEASE_STP);

//Button 1 hold press definitions
byte BUTTON1_HOLDPRESS_CHN[]     {   1,   2,   0,   0 };
byte BUTTON1_HOLDPRESS_CMD[]     { 128, 128,   0,   0 };
byte BUTTON1_HOLDPRESS_MIN[]     {   0,   0, 255, 255 };
byte BUTTON1_HOLDPRESS_MAX[]     { 125, 255,   0,   0 };
byte BUTTON1_HOLDPRESS_STP[]     {  10, 255,   0,   0 };
ButtonValues BUTTON1_HOLDPRESS(BUTTON1_HOLDPRESS_CHN, BUTTON1_HOLDPRESS_CMD, BUTTON1_HOLDPRESS_MIN, BUTTON1_HOLDPRESS_MAX, BUTTON1_HOLDPRESS_STP);

//Button 1 hold release definitions
byte BUTTON1_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON1_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON1_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON1_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON1_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON1_HOLDRELEASE(BUTTON1_HOLDRELEASE_CHN, BUTTON1_HOLDRELEASE_CMD, BUTTON1_HOLDRELEASE_MIN, BUTTON1_HOLDRELEASE_MAX, BUTTON1_HOLDRELEASE_STP);

//----------------------------- BUTTON 2 -----------------------------//

//Button 2 press definitions
byte BUTTON2_PRESS_CHN[]    {   2,   2,   0,   0 };
byte BUTTON2_PRESS_CMD[]    { 128,   2,   0,   0 };
byte BUTTON2_PRESS_MIN[]    {   0,  15, 255, 255 };
byte BUTTON2_PRESS_MAX[]    { 127,   0,   0,   0 };
byte BUTTON2_PRESS_STP[]    {   1,   0,   0,   0 };
ButtonValues BUTTON2_PRESS(BUTTON2_PRESS_CHN, BUTTON2_PRESS_CMD, BUTTON2_PRESS_MIN, BUTTON2_PRESS_MAX, BUTTON2_PRESS_STP);

//Button 2 release definitions
byte BUTTON2_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON2_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON2_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON2_RELEASE(BUTTON2_RELEASE_CHN, BUTTON2_RELEASE_CMD, BUTTON2_RELEASE_MIN, BUTTON2_RELEASE_MAX, BUTTON2_RELEASE_STP);

//Button 2 hold press definitions
byte BUTTON2_HOLDPRESS_CHN[]     {   2,   2,   0,   0 };
byte BUTTON2_HOLDPRESS_CMD[]     { 128,   4,   0,   0 };
byte BUTTON2_HOLDPRESS_MIN[]     {   0, 127, 255, 255 };
byte BUTTON2_HOLDPRESS_MAX[]     { 127, 127,   0,   0 };
byte BUTTON2_HOLDPRESS_STP[]     {  10, 127,   0,   0 };
ButtonValues BUTTON2_HOLDPRESS(BUTTON2_HOLDPRESS_CHN, BUTTON2_HOLDPRESS_CMD, BUTTON2_HOLDPRESS_MIN, BUTTON2_HOLDPRESS_MAX, BUTTON2_HOLDPRESS_STP);

//Button 2 hold release definitions
byte BUTTON2_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON2_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON2_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON2_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON2_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON2_HOLDRELEASE(BUTTON2_HOLDRELEASE_CHN, BUTTON2_HOLDRELEASE_CMD, BUTTON2_HOLDRELEASE_MIN, BUTTON2_HOLDRELEASE_MAX, BUTTON2_HOLDRELEASE_STP);

//----------------------------- BUTTON 3 -----------------------------//

//Button 3 press definitions
byte BUTTON3_PRESS_CHN[]    {   1,   2,   0,   0 };
byte BUTTON3_PRESS_CMD[]    {  69,  65,   0,   0 };
byte BUTTON3_PRESS_MIN[]    {   8, 127, 255, 255 };
byte BUTTON3_PRESS_MAX[]    {   0, 127,   0,   0 };
byte BUTTON3_PRESS_STP[]    {   0, 127,   0,   0 };
ButtonValues BUTTON3_PRESS(BUTTON3_PRESS_CHN, BUTTON3_PRESS_CMD, BUTTON3_PRESS_MIN, BUTTON3_PRESS_MAX, BUTTON3_PRESS_STP);

//Button 3 release definitions
byte BUTTON3_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON3_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON3_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON3_RELEASE(BUTTON3_RELEASE_CHN, BUTTON3_RELEASE_CMD, BUTTON3_RELEASE_MIN, BUTTON3_RELEASE_MAX, BUTTON3_RELEASE_STP);

//Button 3 hold press definitions
byte BUTTON3_HOLDPRESS_CHN[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLDPRESS_CMD[]     { 200, 200,   0,   0 };
byte BUTTON3_HOLDPRESS_MIN[]     {   1,   0, 255, 255 };
byte BUTTON3_HOLDPRESS_MAX[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLDPRESS_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON3_HOLDPRESS(BUTTON3_HOLDPRESS_CHN, BUTTON3_HOLDPRESS_CMD, BUTTON3_HOLDPRESS_MIN, BUTTON3_HOLDPRESS_MAX, BUTTON3_HOLDPRESS_STP);

//Button 3 hold release definitions
byte BUTTON3_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON3_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON3_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON3_HOLDRELEASE(BUTTON3_HOLDRELEASE_CHN, BUTTON3_HOLDRELEASE_CMD, BUTTON3_HOLDRELEASE_MIN, BUTTON3_HOLDRELEASE_MAX, BUTTON3_HOLDRELEASE_STP);

//----------------------------- BUTTON 4 -----------------------------//

//Button 4 press definitions
byte BUTTON4_PRESS_CHN[]    {   1,   2,   0,   0 };
byte BUTTON4_PRESS_CMD[]    { 128,  60,   0,   0 };
byte BUTTON4_PRESS_MIN[]    { 125, 127, 255, 255 };
byte BUTTON4_PRESS_MAX[]    { 125,   0,   0,   0 };
byte BUTTON4_PRESS_STP[]    { 128,   0,   0,   0 };
ButtonValues BUTTON4_PRESS(BUTTON4_PRESS_CHN, BUTTON4_PRESS_CMD, BUTTON4_PRESS_MIN, BUTTON4_PRESS_MAX, BUTTON4_PRESS_STP);

//Button 4 release definitions
byte BUTTON4_RELEASE_CHN[]  {   0,   2,   0,   0 };
byte BUTTON4_RELEASE_CMD[]  {   0,  61,   0,   0 };
byte BUTTON4_RELEASE_MIN[]  {   0, 127, 255, 255 };
byte BUTTON4_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON4_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON4_RELEASE(BUTTON4_RELEASE_CHN, BUTTON4_RELEASE_CMD, BUTTON4_RELEASE_MIN, BUTTON4_RELEASE_MAX, BUTTON4_RELEASE_STP);

//Button 4 hold press definitions
byte BUTTON4_HOLDPRESS_CHN[]     {   1,   0,   0,   0 };
byte BUTTON4_HOLDPRESS_CMD[]     { 128,   0,   0,   0 };
byte BUTTON4_HOLDPRESS_MIN[]     {   0, 255, 255, 255 };
byte BUTTON4_HOLDPRESS_MAX[]     {   0,   0,   0,   0 };
byte BUTTON4_HOLDPRESS_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON4_HOLDPRESS(BUTTON4_HOLDPRESS_CHN, BUTTON4_HOLDPRESS_CMD, BUTTON4_HOLDPRESS_MIN, BUTTON4_HOLDPRESS_MAX, BUTTON4_HOLDPRESS_STP);

//Button 4 hold release definitions
byte BUTTON4_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON4_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON4_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON4_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON4_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON4_HOLDRELEASE(BUTTON4_HOLDRELEASE_CHN, BUTTON4_HOLDRELEASE_CMD, BUTTON4_HOLDRELEASE_MIN, BUTTON4_HOLDRELEASE_MAX, BUTTON4_HOLDRELEASE_STP);

//----------------------------- BUTTON 5 -----------------------------//

//Button 5 press definitions
byte BUTTON5_PRESS_CHN[]    {   2,   2,   0,   0 };
byte BUTTON5_PRESS_CMD[]    { 128,  60,   0,   0 };
byte BUTTON5_PRESS_MIN[]    { 127,   0, 255, 255 };
byte BUTTON5_PRESS_MAX[]    { 127,   0,   0,   0 };
byte BUTTON5_PRESS_STP[]    { 128,   0,   0,   0 };
ButtonValues BUTTON5_PRESS(BUTTON5_PRESS_CHN, BUTTON5_PRESS_CMD, BUTTON5_PRESS_MIN, BUTTON5_PRESS_MAX, BUTTON5_PRESS_STP);

//Button 5 release definitions
byte BUTTON5_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON5_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON5_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON5_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON5_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON5_RELEASE(BUTTON5_RELEASE_CHN, BUTTON5_RELEASE_CMD, BUTTON5_RELEASE_MIN, BUTTON5_RELEASE_MAX, BUTTON5_RELEASE_STP);

//Button 5 hold press definitions
byte BUTTON5_HOLDPRESS_CHN[]     {   2,   2,   0,   0 };
byte BUTTON5_HOLDPRESS_CMD[]     { 128,  63,   0,   0 };
byte BUTTON5_HOLDPRESS_MIN[]     {   0,   0, 255, 255 };
byte BUTTON5_HOLDPRESS_MAX[]     {   0,   0,   0,   0 };
byte BUTTON5_HOLDPRESS_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON5_HOLDPRESS(BUTTON5_HOLDPRESS_CHN, BUTTON5_HOLDPRESS_CMD, BUTTON5_HOLDPRESS_MIN, BUTTON5_HOLDPRESS_MAX, BUTTON5_HOLDPRESS_STP);

//Button 5 hold release definitions
byte BUTTON5_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON5_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON5_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON5_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON5_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON5_HOLDRELEASE(BUTTON5_HOLDRELEASE_CHN, BUTTON5_HOLDRELEASE_CMD, BUTTON5_HOLDRELEASE_MIN, BUTTON5_HOLDRELEASE_MAX, BUTTON5_HOLDRELEASE_STP);

//----------------------------- BUTTON 6 -----------------------------//

//Button 6 press definitions
byte BUTTON6_PRESS_CHN[]    {   1,   2,   0,   0 };
byte BUTTON6_PRESS_CMD[]    {  69,  61,   0,   0 };
byte BUTTON6_PRESS_MIN[]    {   9,   0, 255, 255 };
byte BUTTON6_PRESS_MAX[]    {   0, 127,   0,   0 };
byte BUTTON6_PRESS_STP[]    {   0, 127,   0,   0 };
ButtonValues BUTTON6_PRESS(BUTTON6_PRESS_CHN, BUTTON6_PRESS_CMD, BUTTON6_PRESS_MIN, BUTTON6_PRESS_MAX, BUTTON6_PRESS_STP);

//Button 6 release definitions
byte BUTTON6_RELEASE_CHN[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_CMD[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_MIN[]  { 255, 255, 255, 255 };
byte BUTTON6_RELEASE_MAX[]  {   0,   0,   0,   0 };
byte BUTTON6_RELEASE_STP[]  {   0,   0,   0,   0 };
ButtonValues BUTTON6_RELEASE(BUTTON6_RELEASE_CHN, BUTTON6_RELEASE_CMD, BUTTON6_RELEASE_MIN, BUTTON6_RELEASE_MAX, BUTTON6_RELEASE_STP);

//Button 6 hold press definitions
byte BUTTON6_HOLDPRESS_CHN[]     {   1,   1,   0,   0 };
byte BUTTON6_HOLDPRESS_CMD[]     {  68,  68,   0,   0 };
byte BUTTON6_HOLDPRESS_MIN[]     {   0,   0, 255, 255 };
byte BUTTON6_HOLDPRESS_MAX[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLDPRESS_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON6_HOLDPRESS(BUTTON6_HOLDPRESS_CHN, BUTTON6_HOLDPRESS_CMD, BUTTON6_HOLDPRESS_MIN, BUTTON6_HOLDPRESS_MAX, BUTTON6_HOLDPRESS_STP);

//Button 6 hold release definitions
byte BUTTON6_HOLDRELEASE_CHN[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLDRELEASE_CMD[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLDRELEASE_MIN[]     { 255, 255, 255, 255 };
byte BUTTON6_HOLDRELEASE_MAX[]     {   0,   0,   0,   0 };
byte BUTTON6_HOLDRELEASE_STP[]     {   0,   0,   0,   0 };
ButtonValues BUTTON6_HOLDRELEASE(BUTTON6_HOLDRELEASE_CHN, BUTTON6_HOLDRELEASE_CMD, BUTTON6_HOLDRELEASE_MIN, BUTTON6_HOLDRELEASE_MAX, BUTTON6_HOLDRELEASE_STP);

#endif
