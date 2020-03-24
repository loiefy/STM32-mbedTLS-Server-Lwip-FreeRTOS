#include "fsdata.h"
#include "lwip/apps/fs.h"
#include "lwip/def.h"

/*--- Include picture data -- */
#include "havicom_logo_160x39px_png.c"
#include "Home_ICON_png.c"
#include "info_ICON_png.c"
#include "logo60x61px_png.c"

/*--- Include html data --*/
#include "index_html.c"
#include "about_html.c"
#include "reboot_html.c"

/*--- Include css data --*/
#include "main_css.c"

/*--- Include Js data -- */
#include "reboot_js.c"

#define file_NULL (struct fsdata_file *) NULL



const struct fsdata_file file__havicom_logo_160x39px_png[] = { {
file_NULL,
data__havicom_logo_160x39px_png,
data__havicom_logo_160x39px_png + 34,
sizeof(data__havicom_logo_160x39px_png) - 34,
1,
}};

const struct fsdata_file file__Home_ICON_png[] = { {
file__havicom_logo_160x39px_png,
data__Home_ICON_png,
data__Home_ICON_png + 22,
sizeof(data__Home_ICON_png) - 22,
1,
}};

const struct fsdata_file file__info_ICON_png[] = { {
file__Home_ICON_png,
data__info_ICON_png,
data__info_ICON_png + 22,
sizeof(data__info_ICON_png) - 22,
1,
}};

const struct fsdata_file file__logo60x61px_png[] = { {
file__info_ICON_png,
data__logo60x61px_png,
data__logo60x61px_png + 24,
sizeof(data__logo60x61px_png) - 24,
1,
}};

const struct fsdata_file file__index_html[] = { {
file__logo60x61px_png,
data__index_html,
data__index_html + 13,
sizeof(data__index_html) - 13,
1,
}};

const struct fsdata_file file__about_html[] = { {
file__index_html,
data__about_html,
data__about_html + 12,
sizeof(data__about_html) - 12,
1,
}};

const struct fsdata_file file__main_css[] = { {
file__about_html,
data__main_css,
data__main_css + 10,
sizeof(data__main_css) - 10,
1,
}};

const struct fsdata_file file__reboot_html[] = { {
file__main_css,
data__reboot_html,
data__reboot_html + 13,
sizeof(data__reboot_html) - 13,
1,
}};

const struct fsdata_file file__rebootjs_js[] = { {
file__reboot_html,
data__rebootjs_js,
data__rebootjs_js + 13,
sizeof(data__rebootjs_js) - 13,
1,
}};

#define FS_ROOT file__rebootjs_js
#define FS_NUMFILES 9

