module top (
    input wire clk,
    input wire  reset,
    output reg [1:0] cnt
    )
    
    always @ (posedge clk) begin
        if (reset) begin
            cnt <= 2'b0;
        end else begin
            cnt <= cnt + 1'b1;
        end
    end


endmodule
