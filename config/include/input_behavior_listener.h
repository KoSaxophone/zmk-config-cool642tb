#define ZMK_INPUT_BEHAVIOR_LISTENER_NODES(node_id) \
    input_behavior_listener_##node_id { \
        compatible = "zmk,input-behavior-listener"; \
        device = <&vtrackball>; \
        layers = <0>; \
    };

#include <dt-bindings/zmk/input_behavior_listener.h>
