//
// Created by jmcgettigan on 3/20/2023.
//

#include "symbol_tooltip.h"

void SymbolTooltip::_notification(int p_what) {
}

void SymbolTooltip::_bind_methods() {
}

Ref<Theme> SymbolTooltip::create_tooltip_theme() {
	Ref<Theme> theme = memnew(Theme);

	// You can set up your theme styles here, e.g.:
	// theme->set_stylebox(...);
	// theme->set_color(...);
	// theme->set_font(...);

	return theme;
}

void SymbolTooltip::set_header_text(const String &p_text) {
	header_label->set_text(p_text);
}

void SymbolTooltip::set_body_text(const String &p_text) {
	body_label->set_text(p_text);
	body_label->set_use_bbcode(true);
}

void SymbolTooltip::set_tooltip_position(const Vector2 &p_position) {
	set_position(p_position);
}

SymbolTooltip::SymbolTooltip() {
	set_theme(create_tooltip_theme());

	header_label = memnew(RichTextLabel);
	add_child(header_label);

	body_label = memnew(RichTextLabel);
	body_label->set_use_bbcode(true);
	scroll_container = memnew(ScrollContainer);
	scroll_container->add_child(body_label);
	add_child(scroll_container);
}
