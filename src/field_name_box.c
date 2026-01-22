// <<<<<<< HEAD
 // #include "global.h"
 // #include "palette.h"
 // #include "string_util.h"
 // #include "window.h"
 // #include "decompress.h"
 // #include "task.h"
 // #include "text.h"
 // #include "field_name_box.h"
 // #include "menu.h"
 // #include "script_menu.h"

 // #define NAMEBOX_TAG 0x2722

 // //  Usage:
// // //  namebox <text>  ->  displays the namebox with the given text
// // //  hidenamebox     ->  hides the namebox

 // static void LoadNameboxWindow(const struct WindowTemplate *window);
 // static void LoadNameboxTilemap();
 // static void CreateTask_DisplayNamebox();
 // static void Task_DisplayNamebox(u8 taskId);
 // static void LoadNameboxSprite(s8 x, s8 y);
 // static void AddTextPrinterForName();
 // static void ClearNameboxTiles();
 // void ShowNameboxMenuExtraWindow(const u8 *str);

 // static EWRAM_DATA u8 sNameboxWindowId = 0;
 // static EWRAM_DATA u8 sNameboxGfxId = 0;

 // static const u32 sNamebox_Gfx[] = INCBIN_U32("graphics/text_window/name_box.4bpp.lz");
 // static const u16 sNamebox_Pal[] = INCBIN_U16("graphics/text_window/name_box.gbapal");

 // #define NAMEBOX_WIDTH 64
 // #define NAMEBOX_HEIGHT 32
 // #define NAMEBOX_SIZE (NAMEBOX_WIDTH * NAMEBOX_HEIGHT / 2)

 // static const struct WindowTemplate sNameboxWindowTemplate = {0, 1, 12, 8, 2, 15, 0}; // Parámetros de la ventana extra


 // static const struct OamData sOam_Namebox =
 // {
     // .x = 0,
     // .y = 0,
     // .affineMode = ST_OAM_AFFINE_OFF,
     // .objMode = ST_OAM_OBJ_NORMAL,
     // .bpp = ST_OAM_4BPP,
     // .shape = SPRITE_SHAPE(64x32),
     // .size = SPRITE_SIZE(64x32),
     // .tileNum = 0,
     // .priority = 1,
     // .paletteNum = 0,
 // };



 // static const struct CompressedSpriteSheet sSpriteSheet_Namebox = {
     // .data = sNamebox_Gfx,
     // .size = 1024,
     // .tag = NAMEBOX_TAG,
 // };

 // static const union AnimCmd sSpriteAnim_Namebox[] = {
     // ANIMCMD_FRAME(0, 0),
     // ANIMCMD_END
 // };

 // static const union AnimCmd *const sSpriteAnimTable_Namebox[] = {
     // sSpriteAnim_Namebox,
 // };

 // static const struct SpriteTemplate sSpriteTemplate_Namebox = {
     // .tileTag = NAMEBOX_TAG,
     // .paletteTag = NAMEBOX_TAG,
     // .oam = &sOam_Namebox,
     // .anims = sSpriteAnimTable_Namebox,
     // .images = NULL,
     // .affineAnims = gDummySpriteAffineAnimTable,
     // .callback = SpriteCallbackDummy
 // };

 // static const struct SpritePalette sSpritePalette_Namebox = {
     // .data = sNamebox_Pal, 
     // .tag = NAMEBOX_TAG,
 // };

 // void ShowNameboxMenuExtraWindow(const u8 *str) // Función que carga una ventana auxiliar en el menú de pausa.
 // {	
	// u8 left;
	// u8 top;
	// int i, width = 0;
    // u8 newWidth;
    // for (i = 0; i < 1; i++){
        // width = DisplayTextAndGetWidth(str, width);
    // }
	// StringExpandPlaceholders(gStringVar3, str);
    // newWidth = ConvertPixelWidthToTileWidth(width);
    // left = ScriptMenu_AdjustLeftCoordFromWidth(0, newWidth);
    // sNameboxWindowId = CreateWindowFromRect(0, 10, newWidth, 2);
    // SetStandardWindowBorderStyle(sNameboxWindowId, 0);
	// AddTextPrinterParameterized(sNameboxWindowId, 1, gStringVar3, 0, 1, TEXT_SKIP_DRAW, NULL);
	// CopyWindowToVram(sNameboxWindowId, 3);
    // ScheduleBgCopyTilemapToVram(0);
// }

 // void ShowFieldName(const u8 *str) {
     // if(IsNameboxDisplayed())
             // ClearNamebox();
            
	// ShowNameboxMenuExtraWindow(str);
 // }

 // bool8 IsNameboxDisplayed() {
     // if(sNameboxWindowId == 0)
         // return FALSE;
     // return TRUE;
 // }

 // void ClearNamebox() {
	 // ClearStdWindowAndFrameToTransparent(sNameboxWindowId, FALSE);
     // RemoveWindow(sNameboxWindowId);
     // sNameboxWindowId = 0;
 // }


 // #define tTimer data[0]

 // static void CreateTask_DisplayNamebox() {
     // u8 taskId = CreateTask(Task_DisplayNamebox, 0x50);
     // gTasks[taskId].tTimer = 0x1;
 // }

 // static void Task_DisplayNamebox(u8 taskId) {
     // struct Task *task = &gTasks[taskId];
    
     // if (gTasks[taskId].tTimer) 
         // gTasks[taskId].tTimer--;
     // else{
         // LoadNameboxTilemap();
         // LoadNameboxSprite(32, 104);
        
         // DestroyTask(taskId);
     // }
 // }

 // #undef tTimer


 // static void LoadNameboxWindow(const struct WindowTemplate *window) {
     // sNameboxWindowId = AddWindow(window);
    
     // CopyWindowToVram(sNameboxWindowId, 3);
 // }

 // static void LoadNameboxTilemap() {
     // PutWindowTilemap(sNameboxWindowId);
 // }

 // static void LoadNameboxSprite(s8 x, s8 y) {
     // u8 spriteId;
    
     // LoadCompressedSpriteSheet(&sSpriteSheet_Namebox);
     // LoadSpritePalette(&sSpritePalette_Namebox);
     // spriteId = CreateSprite(&sSpriteTemplate_Namebox, x, y, 0);
     // if (sNameboxGfxId == MAX_SPRITES)
         // return;
     // else
         // sNameboxGfxId = spriteId;
 // }

 // static void AddTextPrinterForName() {
     // struct TextPrinterTemplate printer;
    
     // printer.currentChar = gStringVar3;
     // printer.windowId = sNameboxWindowId;
     // printer.fontId = 1;
     // printer.x = 5; 
     // printer.y = 0;
     // printer.currentX = printer.x;
     // printer.currentY = printer.y;
     // printer.fgColor = GetFontAttribute(1, FONTATTR_COLOR_FOREGROUND);
     // printer.bgColor = TEXT_COLOR_TRANSPARENT;
     // printer.shadowColor = GetFontAttribute(1, FONTATTR_COLOR_SHADOW);
     // printer.unk = GetFontAttribute(1, FONTATTR_UNKNOWN);
     // printer.letterSpacing = 0;
     // printer.lineSpacing = 0;

     // AddTextPrinter(&printer, 0xFF, NULL);
 // }

 // static void ClearNameboxTiles(){
     // ClearWindowTilemap(sNameboxWindowId);
     // FillWindowPixelBuffer(sNameboxWindowId, PIXEL_FILL(0));
     // CopyWindowToVram(sNameboxWindowId, 3);
 // }
// =======
#include "global.h"
#include "main.h"
#include "menu.h"
#include "bg.h"
#include "window.h"
#include "text.h"
#include "string_util.h"
#include "international_string_util.h"
#include "script_menu.h"
#include "field_message_box.h"
#include "graphics.h"
#include "script.h"
#include "field_name_box.h"
#include "event_data.h"
#include "match_call.h"
#include "malloc.h"
#include "constants/speaker_names.h"
#include "data/speaker_names.h"

static EWRAM_INIT u8 sNameboxWindowId = WINDOW_NONE;
EWRAM_DATA const u8 *gSpeakerName = NULL;

static const u32 sNameBoxDefaultGfx[] = INCBIN_U32("graphics/text_window/name_box.4bpp");
static const u32 sNameBoxPokenavGfx[] = INCBIN_U32("graphics/pokenav/name_box.4bpp");

static void WindowFunc_DrawNamebox(u32, u32, u32, u32, u32, u32, u32);
static void WindowFunc_ClearNamebox(u8, u8, u8, u8, u8, u8);

void TrySpawnNamebox(u32 tileNum)
{
    u8 *strbuf = AllocZeroed(32 * sizeof(u8));
    if ((OW_FLAG_SUPPRESS_NAME_BOX != 0 && FlagGet(OW_FLAG_SUPPRESS_NAME_BOX)) || gSpeakerName == NULL || !strbuf)
    {
        // Re-check again in case anything but !strbuf is TRUE.
        if (strbuf)
            Free(strbuf);

        DestroyNamebox();
        return;
    }

    StringExpandPlaceholders(strbuf, gSpeakerName);

    u32 fontId = FONT_SMALL;
    u32 winWidth = OW_NAME_BOX_DEFAULT_WIDTH;

    if (OW_NAME_BOX_USE_DYNAMIC_WIDTH)
    {
        winWidth = ConvertPixelWidthToTileWidth(GetStringWidth(fontId, strbuf, -1));
        if (winWidth > OW_NAME_BOX_DEFAULT_WIDTH)
            winWidth = OW_NAME_BOX_DEFAULT_WIDTH;
    }

    if (sNameboxWindowId != WINDOW_NONE)
    {
        DestroyNamebox();
        RedrawDialogueFrame();
    }

    bool32 matchCall = IsMatchCallTaskActive();

    struct WindowTemplate template =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 13,
        .width = winWidth,
        .height = OW_NAME_BOX_DEFAULT_HEIGHT,
        .paletteNum = matchCall ? 14 : DLG_WINDOW_PALETTE_NUM,
        .baseBlock = tileNum,
    };

    sNameboxWindowId = AddWindow(&template);
    FillNamebox();

    u8 colors[3] = {TEXT_COLOR_TRANSPARENT, OW_NAME_BOX_FOREGROUND_COLOR, OW_NAME_BOX_SHADOW_COLOR};
    u8 bakColors[3];
    int strX = GetStringCenterAlignXOffset(fontId, strbuf, (winWidth * 8));
    if (matchCall)
    {
        colors[1] = 1;
        colors[2] = 0;
    }

    SaveTextColors(&bakColors[0], &bakColors[1], &bakColors[2]);
    AddTextPrinterParameterized3(sNameboxWindowId, fontId, strX, 0, colors, 0, strbuf);
    RestoreTextColors(&bakColors[0], &bakColors[1], &bakColors[2]);
    PutWindowTilemap(sNameboxWindowId);
    Free(strbuf);
}

u32 GetNameboxWindowId(void)
{
    return sNameboxWindowId;
}

void ResetNameboxData(void)
{
    sNameboxWindowId = WINDOW_NONE;
    gSpeakerName = NULL;
}

void DestroyNamebox(void)
{
    if (sNameboxWindowId == WINDOW_NONE)
        return;

    ClearNamebox(sNameboxWindowId, TRUE);
    ClearWindowTilemap(sNameboxWindowId);
    RemoveWindow(sNameboxWindowId);
    sNameboxWindowId = WINDOW_NONE;
    gSpeakerName = NULL;
}

u32 GetNameboxWidth(void)
{
    return gWindows[sNameboxWindowId].window.width;
}

static const u32 *GetNameboxGraphics(void)
{
    if (IsMatchCallTaskActive())
        return sNameBoxPokenavGfx;
    else
        return sNameBoxDefaultGfx;
}

void FillNamebox(void)
{
    u32 winSize = GetNameboxWidth();
    const u32 *gfx = GetNameboxGraphics();

    for (u32 i = 0; i < winSize; i++)
    {
        #define TILE(x) (8 * x)
        CopyToWindowPixelBuffer(sNameboxWindowId, &gfx[TILE(1)], TILE_SIZE_4BPP, i);
        CopyToWindowPixelBuffer(sNameboxWindowId, &gfx[TILE(4)], TILE_SIZE_4BPP, i + winSize);
        #undef TILE
    }
}

void DrawNamebox(u32 windowId, u32 tileNum, bool32 copyToVram)
{
    // manual instead of using CallWindowFunction for extra tileNum param
    struct WindowTemplate *w = &gWindows[windowId].window;
    u32 size = TILE_OFFSET_4BPP(NAME_BOX_BASE_TILES_TOTAL);

    LoadBgTiles(GetWindowAttribute(sNameboxWindowId, WINDOW_BG), GetNameboxGraphics(), size, tileNum);
    WindowFunc_DrawNamebox(w->bg, w->tilemapLeft, w->tilemapTop, w->width, w->height, w->paletteNum, tileNum);
    PutWindowTilemap(windowId);
    if (copyToVram == TRUE)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

void ClearNamebox(u32 windowId, bool32 copyToVram)
{
    CallWindowFunction(windowId, WindowFunc_ClearNamebox);
    ClearWindowTilemap(windowId);
    if (copyToVram == TRUE)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void WindowFunc_DrawNamebox(u32 bg, u32 L, u32 T, u32 w, u32 h, u32 p, u32 tileNum)
{
    // left-most
    FillBgTilemapBufferRect(bg, tileNum,     L - 1, T,     1, 1, p);
    FillBgTilemapBufferRect(bg, tileNum + 3, L - 1, T + 1, 1, 1, p);

    // right-most
    FillBgTilemapBufferRect(bg, tileNum + 2, L + w, T,     1, 1, p);
    FillBgTilemapBufferRect(bg, tileNum + 5, L + w, T + 1, 1, 1, p);
}

static void WindowFunc_ClearNamebox(u8 bg, u8 L, u8 T, u8 w, u8 h, u8 p)
{
    FillBgTilemapBufferRect(bg, 0, L - 1, T, w + 2, h, 0); // palette doesn't matter
}

void SetSpeaker(struct ScriptContext *ctx)
{
    u32 arg = ScriptReadWord(ctx);
    const u8 *speaker = NULL;

    if (arg < SP_NAME_COUNT)
        speaker = gSpeakerNamesTable[arg];
    else if (arg >= ROM_START && arg < ROM_END)
        speaker = (const u8 *)arg;

    gSpeakerName = speaker;
}

// useful for other context e.g. match call
void TrySpawnAndShowNamebox(const u8 *speaker, u32 tileNum)
{
    gSpeakerName = speaker;
    TrySpawnNamebox(tileNum);
    if (sNameboxWindowId != WINDOW_NONE)
        DrawNamebox(sNameboxWindowId, tileNum - NAME_BOX_BASE_TILES_TOTAL, TRUE);
    else // either NULL or SP_NAME_NONE
        RedrawDialogueFrame();
}
// >>>>>>> pbh/main
