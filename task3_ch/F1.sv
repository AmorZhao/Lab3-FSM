module F1 #(
    parameter WIDTH = 16
)(
    input  logic             clk,      // clock 
    input  logic             rst,      // reset
    input  logic             en,       // enable signal
    input  logic [WIDTH-1:0] N,        // clock divided by N+1
    output logic [7:0]       data_out
); 

logic  	tick;       // tick output

clktick  BPS_modified (
    .clk(clk), 
    .rst(rst), 
    .en(en), 
    .N(N), 
    .tick(tick)
); 

LightSequenceFSM  Light (
    .clk(clk), 
    .rst(rst), 
    .en(tick), 
    .data_out(data_out)
); 

endmodule
