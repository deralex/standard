#ifndef SYNTAX_H
#define SYNTAX_H

enum syntax_region
{
    SYNREG_DEFAULT,
    SYNREG_ERROR,
    SYNREG_TABBAR,
    SYNREG_TAB_ACTIVE_INNER,
    SYNREG_TAB_ACTIVE_OUTER,
    SYNREG_TAB_INACTIVE_INNER,
    SYNREG_TAB_INACTIVE_OUTER,
    SYNREG_LINENR,
    SYNREG_PLACEHOLDER_EMPTY,
    SYNREG_PLACEHOLDER_LINE,
    SYNREG_STATUSBAR,
    SYNREG_MODEBAR,

    SYNREG_COUNT
};


void syntax_region(enum syntax_region region);

#endif