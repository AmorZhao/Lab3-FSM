module lfsr(
    input  logic       clk, 
    input  logic       rst, 
    input  logic       en, 
    output  logic [3:0] data_out
); 

logic [4:1]    sreg; 
logic          data_in; 
assign data_in = (sreg[3] & sreg[4]) | (sreg[3]==0 & sreg[4]==0); 

always_ff @(posedge clk, posedge rst) begin
    if (rst)
        sreg <= 4'b0; 
    else if(en) begin
        sreg[4] <= sreg[3]; 
        sreg[3] <= sreg[2]; 
        sreg[2] <= sreg[1]; 
        sreg[1] <= data_in; 
    end    
end

assign  data_out = sreg;     
endmodule
