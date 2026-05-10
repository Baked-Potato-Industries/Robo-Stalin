DEPS := -lcurl

BUILD := build
BUILD_OBJS := $(BUILD)/obj

SRCS := $(shell find src -name "*.c")
OBJS := $(patsubst src/%.c, $(BUILD_OBJS)/%.o, $(SRCS))

$(BUILD)/Robo-Stalin: $(OBJS) 
	mkdir -p $(BUILD_OBJS)
	gcc	$(OBJS) -o $@ $(DEPS) 

$(BUILD_OBJS)/%.o: src/%.c 
	mkdir -p $(dir $@)
	gcc -Iinclude -c $< -o $@

clean:
	rm -rf $(BUILD)
