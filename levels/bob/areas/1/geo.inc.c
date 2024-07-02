struct TileScrollSettings bob_seg7_dl_07004390_tile_scroll[] = {
    {0, 1, 32, 32, 0}
};

// 0x0E000488
const GeoLayout bob_geo_000488[] = {
    GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
    GEO_OPEN_NODE(),
        GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
            GEO_NODE_ORTHO(100),
            GEO_OPEN_NODE(),
                GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
        GEO_ZBUFFER(1),
        GEO_OPEN_NODE(),
            GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 30000, geo_camera_fov),
            GEO_OPEN_NODE(),
                GEO_CAMERA(1, 0, 2000, 6000, 3072, 0, -4608, geo_camera_main),
                GEO_OPEN_NODE(),
                    GEO_TILE_SCROLL(LAYER_OPAQUE, bob_seg7_dl_07004390, ARRAY_COUNT(bob_seg7_dl_07004390_tile_scroll), bob_seg7_dl_07004390_tile_scroll),
                    GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_seg7_dl_07009D80),
                    GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_seg7_dl_0700A470),
                    GEO_DISPLAY_LIST(LAYER_ALPHA, bob_seg7_dl_0700A920),
                    GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_seg7_dl_0700DD18),
                    GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_seg7_dl_0700E338),
                    GEO_RENDER_OBJ(),
                    GEO_ASM(0, geo_envfx_main),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
        GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_cannon_circle_base),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
