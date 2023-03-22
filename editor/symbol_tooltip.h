//
// Created by jmcgettigan on 3/20/2023.
//

#ifndef GODOT_SYMBOL_TOOLTIP_H
#define GODOT_SYMBOL_TOOLTIP_H

#include "editor/editor_help.h"
#include "scene/gui/panel_container.h"
#include "scene/gui/scroll_container.h"
#include "scene/gui/rich_text_label.h"
#include "scene/resources/theme.h"

class SymbolTooltip : public PanelContainer {
	GDCLASS(SymbolTooltip, PanelContainer);

private:
	RichTextLabel *header_label;
	RichTextLabel *body_label;
	ScrollContainer *scroll_container;

	Ref<Theme> create_tooltip_theme();

protected:
	void _notification(int p_what);
	static void _bind_methods();

public:
	void set_header_text(const String &p_text);
	void set_body_text(const String &p_text);
	void set_tooltip_position(const Vector2 &p_position);

	SymbolTooltip();
};

#endif //GODOT_SYMBOL_TOOLTIP_H
